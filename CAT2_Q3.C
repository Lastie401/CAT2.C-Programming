// C Program
/*
Author: paul mungai Njoroge
ADM    :CT1O1/G/23420/24
*/
#include<stdio.h>
int main(){
	float hours,hourly_wage,gross,tax,net_pay;
	printf("Enter hours worked in a week:");
	scanf("%f",&hours);
	printf("Enter hourly wedge:");
	scanf("%f",&hourly_wage);
	//calculate gross pay
	if (hours>40) {
		gross=hours*hourly_wage)+((hours-40)*hourly_wage*1.5);
	}else{
	gross=hours*hourly_wage;}
	//calculate tax
	if (gross<=600){taxe=gross*0.15;
	}else { taxes =(600*0.15)}+((gross-600*0.20);}
//calculate net pay
net_pay=gross-taxe;

printf("Gross pay:$%.2f\n",gross);
printf("Taxes: $%.2f\n",taxe);
printf("Net pay:$%.2f\n",net_pay);
return 0;
}
