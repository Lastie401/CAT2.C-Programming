//scores array
/*
Author: paul mungai Njoroge
ADM    :CT1O1/G/23420/24
*/
#include<stdio.h>
int main(){
	int i,j;
	int scores[2][4]={
	{65,92,35,70},
	{84,72,59,67}
	};
	
	for(i=0;i<2;i++){
    for(j=0;j<4;j++){
		printf("scores[%d][%d]=%d\n",i,j,scores[i][j]);}}
		
	return 0;
}
