#include<stdio.h>
int main()
{
	int cp,sp,profit,loss,pp,lp,pl;//cp=cost price,sp=selling price,pp=profit percentage,lp=loss percentege,pl=profitLoss
	printf("Enter the cost price: ");
	scanf("%d",&cp);
	printf("Enter the selling price: ");
	scanf("%d",&sp);
	profit =sp-cp;
	loss=cp-sp;
	pl=profit/loss;
	pp=profit*100/cp;
	lp=loss*100/cp;
	printf("pl=%d,pp=%d,lp=%d",pl,pp,lp);
}
