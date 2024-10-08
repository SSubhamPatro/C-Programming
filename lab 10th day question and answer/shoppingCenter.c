#include<stdio.h>
int main()
{
    int sellingPrice,costPrice,profit,totalProfit,Loss,totalloss;
    printf("Enter Cost Price Per unit:");
    scanf("%d",&costPrice);
    printf("Enter Selling Price Per unit:");
    scanf("%d",&sellingPrice);

    if(sellingPrice>costPrice)
    {
        profit=sellingPrice-costPrice;
        totalProfit=profit*100;
        printf("profit per unit :%d ",profit);
        printf("Total profit on 100 units: %d", totalProfit);

    }
    else if(costPrice>sellingPrice)

    {
        Loss=costPrice-sellingPrice;
        totalloss=Loss*100;
        printf("Loss per unit: %d",Loss);
        printf("Total profit on 100 units:%d",totalloss);
    }
    
    else
    {
       puts("No profit");
    }


}
