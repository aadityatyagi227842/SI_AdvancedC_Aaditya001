#include<stdio.h>
int main()
{
int id[10]={101,102,103,104,105,106,107,108,109,110};
char product[10][30]={"Samsung Mobile","iPhone 17","HP Laptop","Dell Laptop","Bluetooth Speaker","Boat HeadPhones","Smart Watches","LED TV","Keyboard","Mouse"};
float price[10]={15000,70000,45000,52000,2500,1750,6500,39800,1800,700};
int quantity[10]={26,15,45,32,26,15,20,21,43,36};
float discount[10]={8,4,15,6,3,26,9,19,3,4};
int choice;
float total=0;
do
    {
        printf("\n=============CROMA INVOICE===========\n");
        printf("\n1.View inventory stock\n");
        printf("\n2.Purchase items\n");
        printf("\n3.Checkout and exit \n");
        printf("Enter your choice :  \n");
        scanf("%d",&choice);
        while(choice<1 || choice>3)
        {
            printf("  You have entered Invalid choice  \n");
            printf("\n1.View inventory stock\n");
            printf("\n2.Purchase items\n");
            printf("\n3.Checkout and exit \n");
            printf("Invalid choice\n");
            printf("Enter correct choice :  \n");
            scanf("%d",&choice);
            if(choice>1 || choice>3)
                break;
        }
        if(choice==1)

           {
              printf("\nid\t\tProduct Name\t\tprice\tQty\tDiscount\n");
              for(int i=0;i<sizeof(id)/sizeof(id[0]);i++)
                  {
                      printf("%d\t%-20s\t%.0f\t%d\t%.0f%%\n",id[i],product[i],price[i],quantity[i],discount[i]);
                  }
           }
           else if(choice==2)
                {
        int pid,pqty;
        printf("Enter Product id \n");
        scanf("%d",&pid);
        printf("Enter quantity \n");
        scanf("%d",&pqty);
        int found=0;
        for(int i=0;i<10;i++)
        {
            if(id[i]==pid)
            {
                found=1;
                if(quantity[i]>=pqty)
                {
                    float amount,dis,FinalAmount;
                    amount=price[i]*pqty;;
                    dis=amount*discount[i]/100;
                    FinalAmount=amount-dis;
                    quantity[i]=quantity[i]-pqty;
                    total=total+FinalAmount;
                    printf("Items Purchased successfully \n");
                    printf("Product  : %s\n",product[i]);
                    printf("Price    : %.0f\n",price[i]);
                    printf("Quantity : %d\n",pqty);
                    printf("Discount : %.0f%%\n",discount[i]);
                    printf("Amount   : %.2f\n",FinalAmount);
                }
                else
                {
                    printf("Sorry! Only %d items available \n",quantity[i]);
                }
                break;
            }
        }
        if(found==0)
        {
            printf("Invalid Product id\n");
        }
                }
    else if(choice==3)
    {
        printf("\n====== FINAL INVOICE =======\n");
        printf("Total Bill = %.2f\n",total);
        printf("Thank You for shopping\n");
        break;
    }
    }
    while(choice!=3);
        return 0;
}
