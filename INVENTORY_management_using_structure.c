// Created by Aaditya Tyagi
#include <stdio.h>
struct Product
{
    int id;
    char product[30];
    float price;
    int quantity;
    float discount;
};
int main()
{
    struct Product p[10] = {
        {101,"Samsung Mobile",15000,26,8},
        {102,"iPhone 17",70000,15,4},
        {103,"HP Laptop",45000,45,15},
        {104,"Dell Laptop",52000,32,6},
        {105,"Bluetooth Speaker",2500,26,3},
        {106,"Boat HeadPhones",1750,15,26},
        {107,"Smart Watches",6500,20,9},
        {108,"LED TV",39800,21,19},
        {109,"Keyboard",1800,43,3},
        {110,"Mouse",700,36,4}
    };
    int choice;
    float total = 0;
    do
    {
        printf("\n============= CROMA INVOICE =============\n");
        printf("1. View Inventory Stock\n");
        printf("2. Purchase Items\n");
        printf("3. Checkout and Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        while(choice<1 || choice>3)
        {
            printf("\nInvalid Choice!\n");
            printf("Enter correct choice : ");
            scanf("%d",&choice);
        }
        if(choice==1)
        {
            printf("\nID\tProduct Name\t\tPrice\tQty\tDiscount\n");
            for(int i=0;i<10;i++)
            {
                printf("%d\t%-20s\t%.0f\t%d\t%.0f%%\n",
                       p[i].id,
                       p[i].product,
                       p[i].price,
                       p[i].quantity,
                       p[i].discount);
            }
        }
        else if(choice==2)
        {
            int pid,pqty;
            int found=0;
            printf("Enter Product ID : ");
            scanf("%d",&pid);
            printf("Enter Quantity : ");
            scanf("%d",&pqty);
            for(int i=0;i<10;i++)
            {
                if(p[i].id==pid)
                {
                    found=1;
                    if(p[i].quantity>=pqty)
                    {
                        float amount,dis,FinalAmount;
                        amount = p[i].price*pqty;
                        dis = amount*p[i].discount/100;
                        FinalAmount = amount-dis;
                        p[i].quantity -= pqty;
                        total += FinalAmount;
                        printf("\nItem Purchased Successfully!\n");
                        printf("Product  : %s\n",p[i].product);
                        printf("Price    : %.0f\n",p[i].price);
                        printf("Quantity : %d\n",pqty);
                        printf("Discount : %.0f%%\n",p[i].discount);
                        printf("Final Amount : %.2f\n",FinalAmount);
                    }
                    else
                    {
                        printf("Sorry! Only %d items available.\n",p[i].quantity);
                    }
                    break;
                }
            }
            if(found==0)
            {
                printf("Invalid Product ID!\n");
            }
        }
        else if(choice==3)
        {
            printf("\n========== FINAL INVOICE ==========\n");
            printf("Total Bill = %.2f\n",total);
            printf("Thank You For Shopping!\n");
        }
    }
    while(choice!=3);
    return 0;
}
