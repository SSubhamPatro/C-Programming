#include<stdio.h>
int main()
{
	int costPrice,repairCost,coloringCost,acessoriesCost,TotalCost,SellingPrice;
	int desiredCost;
	printf("Enter the costPrice: ");
	scanf("%d",&costPrice);
	printf("Enter the reapirCost: ");
	scanf("%d",&repairCost);
	printf("Enter the coloringCost: ");
	scanf("%d",&coloringCost);
	printf("Enter the acessoriesCost: ");
	scanf("%d",&acessoriesCost);
	printf("Enter the desiredCost: ");
	scanf("%d",&desiredCost);
	TotalCost=costPrice+repairCost+coloringCost+acessoriesCost;
	SellingPrice=TotalCost+desiredCost;
	printf("totalCost= %d\nsellingPrice= %d",TotalCost,SellingPrice);
	return 0;
	
}
