/*
Name: MARY WANJIRU KARIUKI
Reg No:CT100/G/25276/24
Description: cat 2 question 1 2d array
*/
#include<stdio.h>
int main(){
	
	int i,j;
	int scores[2][4]={
	{65,92, 35,70},
	{84,72,59,67},
	};
	
	
for  (i=0;i<2;i++)
{
	for ( j=0; j<4; j++)
	{
		printf("%d", scores[i][j]);
		printf("\t");
	}
	printf("\n");
}
return 0;

}