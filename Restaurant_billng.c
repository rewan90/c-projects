#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void generateBillHeader(char name[50], char date[30])
{
    printf("\n\n");
    printf("\t    rest. Restaurant");
    printf("\n\t   -----------------");
    printf("\nDate:%s", date);
    printf("\nInvoice To: %s", name);
    printf("\n");
    printf("---------------------------------------\n");
    printf("Items\t\t");
    printf("Qty\t\t");
    printf("Total\t\t");
    printf("\n---------------------------------------");
    printf("\n\n");
}

void generateBillBody(char item[30], int qty, float price)
{

    printf("%s\t\t", item);
    printf("%d\t\t", qty);
    printf("%.2f\t\t", qty * price);
    printf("\n");
}

struct items
{
    char item[20];
    float price;
    int qty;
};
struct orders
{
    char customer[50];
    char date[50];
    int numOfItems;
    struct items item[50];
};

void generateBillFooter(float total)
{
    printf("\n");
    float discount = 0.1 * total;
    float netTotal = total - discount;
    float cgst = 0.14 * netTotal, grandTotal = netTotal + 2 * cgst; // netTotal + cgst + sgst {== vat}
    printf("---------------------------------------\n");
    printf("Sub Total\t\t\t%.2f", total);
    printf("\nDiscount @10%s\t\t\t%.2f", "%", discount);
    printf("\n\t\t\t\t-------");
    printf("\nNet Total\t\t\t%.2f", netTotal);
    printf("\nCGST @14%s\t\t\t%.2f", "%", cgst);
    printf("\nSGST @14%s\t\t\t%.2f", "%", cgst);
    printf("\n---------------------------------------");
    printf("\nGrand Total\t\t\t%.2f", grandTotal);
    printf("\n---------------------------------------\n");
}

int main()
{

    int opt, n;
    struct orders order;

    printf("\t============ rest. RESTAURANT ============");
    printf("\n\nPlease select your prefered operation");
    printf("\n\n1.Generate Invoice");
    printf("\n2.Show all Invoices");
    printf("\n3.Search Invoice");
    printf("\n4.Exit");

    printf("\n\nYour choice:\t");
    scanf("%d", &opt);
    fgetc(stdin);

    switch (opt)
    {
    case 1:
        printf("\n please enter the name of the customer:\t");
        fgets(order.customer, 50, stdin);
        order.customer[strlen(order.customer) - 1] = 0; // use it to remove \n new line that fgets add
        strcpy(order.date, __DATE__);
        printf("\nplease enter the number of the items:\t");
        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            fgetc(stdin);
            printf("\n\n");
            printf("please enter the item %d", i + 1);
            fgets(order.item[i].item, 20, stdin);
            order.item[i].item[strlen(order.item[i].item) - 1] = 0;
            printf("Please enter the quantity:\t");
            scanf("%d", &order.item[i].qty);
            printf("Please enter the unit price:\t");
            scanf("%f", &order.item[i].price);
            // total += order.item[i].qty * order.item[i].price;    }
        };
    };

    return 0;
}