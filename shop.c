#include <stdio.h>

int main(){
    //item names and prices 
    int price1 = 1500; //Apples
    int price2 = 3000; //Bread
    int price3 = 4500; //sugar
    int price4 = 5500; //soap
    int price5 = 2000; //flour
    
    //logo and welcome
    printf("===================================================\n");
    printf("|                                                 |\n");
    printf("|        _____                           _____     |\n");
    printf("|       / ____|                         / ____|    |\n");
    printf("|      | |  __  ___ _ __   ___ _ __    | (___   ___  _ __ __ _ _ __   ___ _ __   |\n");
    printf("|      | | |_ |/ _ \\\\ '_ \\\\ / _ \\\\ '__|    \\\\___ \\\\ / _ \\\\ '__/ _` | '_ \\\\ / _ \\\\ '__|  |\n");
    printf("|      | |__| |  __/ | | |  __/ |       ____) | (_) | | | (_| | |_) |  __/ |     |\n");
    printf("|       \\\\_____|\\\\___|_| |_|\\\\___|_|      |_____/ \\\\___/|_|  \\\\__,_| .__/ \\\\___|_|     |\n");
    printf("|                                                            | |                 |\n");
    printf("|                                                            |_|                 |\n");
    printf("|                                                                               |\n");
    printf("|                    Fresh Goods, Great Prices                                   |\n");
    printf("===================================================\n");
    
    //Item list 

    //quantities and costs
    int qty1,qty2,qty3,qty4,qty5;
    int Cost_1, Cost_2, Cost_3, Cost_4, Cost_5;
    //Apples
    printf("How many apples do you want to buy?\n Quantity : " );
    scanf("%d", &qty1);
    Cost_1 = qty1 * price1;
    printf("you bought %d apples \nthe cost = %d\n " , qty1, Cost_1);
    
    //Bread
    printf("\nHow many loaves of bread are you going to buy\n Quantity :");
    scanf("%d", &qty2);
    Cost_2 = qty2 * price2;
    printf("you bought %d loaves of bread \nthe cost = %d Ush \n" , qty2, Cost_2);

    //Sugar
    printf("\nHow many kilos of sugar are you buying\n Quantity :");
    scanf("%d", &qty3);
    Cost_3 = qty3 * price3;
    printf("you bought %d kilos of sugar \nthe cost = %d Ush\n" , qty3, Cost_3);

    //Soap
    printf("\nHow many bars of soap are you buying\n Quantity :");
    scanf("%d", &qty4);
    Cost_4 = qty4 * price4;
    printf("you bought %d bars of soap \nthe cost = %d Ush\n" , qty4, Cost_4);

    //Flour
    printf("\nHow many kilos of flour are you buying\n Quantity :");
    scanf("%d", &qty5);
    Cost_5 = qty5 * price5;
    printf("you bought %d kilos of flour \nthe cost = %d Ush\n" , qty5, Cost_5);

    //Total cost
    int totalCost = Cost_1 + Cost_2 + Cost_3 + Cost_4 + Cost_5; 
    printf("\nThe total cost for all items = %d/=\n" , totalCost);
    
    // Payment and change
    int payment, change;

    printf("\nPlease enter the payment bill\n", payment);
    scanf("%d",&payment);
        if (payment >= totalCost){
            change = payment - totalCost;
            
            printf("Payment Accepted. Here's your change : %d \n" ,change);
        }
        else {
            printf("Insufficient payment. Please pay atleast USH%d\n", totalCost);
        }
    printf("\nThank you for shopping with us. COME AGAIN !!!\n");


return 0;
}