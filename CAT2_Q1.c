//C Progrm structure
/*
Author: paul mungai Njoroge
ADM    :CT1O1/G/23420/24
*/
#include<stdio.h>
#include<string.h>
struct employee{
   char name[25];
   int id;
   char department[20];
   float salary;
   char email[50];};
   
   int main(){ 
	   struct employee ye;
	   strcpy (ye.name,"John Doe");
	   ye.id=12345;
	   strcpy(ye.department ,"Human Resources");
	   ye.salary=55000.50;
	   strcpy(ye.email,"john.doe@company.com");
   
   printf("name:      %s\n",ye.name);
   printf("id:        %d\n",ye.id);
   printf("department:%s\n",ye.department);
   printf("salary:    %.2f\n",ye.salary);
   printf("email:     %s\n",ye.email);
   return 0;
   }