#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void generateBillHeader(char name[50],char date[30]){
    printf("\n\n");
        printf("\t    rest. Restaurant");
        printf("\n\t   -----------------");
        printf("\nDate:%s",date);
        printf("\nInvoice To: %s",name);
        printf("\n");
        printf("---------------------------------------\n");
        printf("Items\t\t");
        printf("Qty\t\t");
        printf("Total\t\t");
        printf("\n---------------------------------------");
        printf("\n\n");
}


void generateBillBody(char item[30],int qty, float price){
        
        printf("%s\t\t",item);
        printf("%d\t\t",qty);
        printf("%.2f\t\t",qty * price);
        printf("\n");
}

void generateBillFooter(float total){
    printf("\n");
    float discount = 0.1*total;
    float netTotal=total-discount;
    float cgst=0.14*netTotal,grandTotal=netTotal + 2*cgst;//netTotal + cgst + sgst {== vat}
    printf("---------------------------------------\n");
    printf("Sub Total\t\t\t%.2f",total);
    printf("\nDiscount @10%s\t\t\t%.2f","%",discount);
    printf("\n\t\t\t\t-------");
    printf("\nNet Total\t\t\t%.2f",netTotal);
    printf("\nCGST @14%s\t\t\t%.2f","%",cgst);
    printf("\nSGST @14%s\t\t\t%.2f","%",cgst);
    printf("\n---------------------------------------");
    printf("\nGrand Total\t\t\t%.2f",grandTotal);
    printf("\n---------------------------------------\n");
}

int main(){

    printf("\t============rest. RESTAURANT============");
    printf("\n\nPlease select your prefered operation");
    printf("\n\n1.Generate Invoice");
    printf("\n2.Show all Invoices");
    printf("\n3.Search Invoice");
    printf("\n4.Exit");


    printf("\n\nYour choice:\t");



    return 0;
}


