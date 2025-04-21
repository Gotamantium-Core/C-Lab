#include <stdio.h>
#include <string.h>

/*
You are given an unformatted file "stock.dat" containing the following information.
`Item_Code(char(5)), Item_Name(char(30)), Unit_Price(float), Qty_Stock(float)`
Write a C program to accept item_code and quantity_purchased of N items and display 
the bill in the following format:
| Si.No | Item_Code | Item_Name | Unit_Price  | Quantity | Price |
|-------|-----------|-----------|-------------|----------|-------|
| 1.    |           |           |             |          |       |
| 2.    |           |           |             |          |       |
|       |           |           |             |          |       |
| N.    |           |           |             |          |       |
|       |           |           | Total Price | :        |       |
Also, update stock.dat by reducing the quantity of items sold
*/

struct Data {
    char item_code[6];
    char item_name[30];
    float unit_price;
    float qty;
};

struct Bill {
    char item_code[6];
    char item_name[30];
    float unit_price;
    float qty;
    float price;
};

int fetchData(FILE *, struct Data []);
void writeData(FILE *, struct Data [], int);

void main() {
    FILE *f;
    struct Data data[50];
    struct Bill bill[50];
    int n;

    f = fopen("stock.dat", "r");
    if (!f) {
        printf("Error opening file.\n");
        return;
    }

    n = fetchData(f, data);
    fclose(f); 

    int cont = 1, k = 0;

    while (cont) {
        char code[6];
        float qty;
        int found = 0;
        printf("\nEnter item code: ");
        scanf(" %s", code);

        printf("Enter quantity: ");
        scanf("%f", &qty);

        for (int i = 0; i < n; i++) {
            if (strcmp(data[i].item_code, code) == 0) {
                found = 1;
                if (data[i].qty < qty) {
                    printf("Not enough stock!\n");
                    break;
                }

                strcpy(bill[k].item_code, data[i].item_code);
                strcpy(bill[k].item_name, data[i].item_name);
                bill[k].unit_price = data[i].unit_price;
                bill[k].qty = qty;
                bill[k].price = qty * bill[k].unit_price;
                data[i].qty -= qty;

                printf("Added to bill: %s, %s, %.2f, %.2f, %.2f\n", bill[k].item_code, bill[k].item_name, bill[k].unit_price, bill[k].qty, bill[k].price);
                k++;
                break;
            }
        }

        if (!found) {
            printf("Item code not found!\n");
        }

        printf("Continue? (1 = yes, 0 = no): ");
        scanf("%d", &cont);
    }

    // print bill
    float total = 0;
    printf("\nSI.No\tItemCode\tItemName\tUnitPrice\tQty\tPrice\n");
    for (int i = 0; i < k; i++) {
        printf("%d\t%s\t\t%s\t%.2f\t\t%.2f\t%.2f\n", i + 1, bill[i].item_code, bill[i].item_name, bill[i].unit_price, bill[i].qty, bill[i].price);
        total += bill[i].price;
    }
    printf("Total Price:\t%.2f\n", total);

    // update stock file
    f = fopen("stock.dat", "w");
    writeData(f, data, n);
    fclose(f);
}

int fetchData(FILE *f, struct Data data[]) {
    int i = 0;
    char itemcode[6], itemname[30];
    float unitprice, qty;
    
    while (fscanf(f, " %[^,], %[^,], %f, %f", itemcode, itemname, &unitprice, &qty) != EOF) {
        strcpy(data[i].item_code, itemcode);
        strcpy(data[i].item_name, itemname);
        data[i].unit_price = unitprice;
        data[i].qty = qty;
        i++;
    }
    return i;
}

void writeData(FILE *f, struct Data data[], int n) {
    for (int i = 0; i < n; i++) {
        fprintf(f, "%s, %s, %.2f, %.2f\n", data[i].item_code, data[i].item_name, data[i].unit_price, data[i].qty);
    }
}
