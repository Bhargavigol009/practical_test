#include<stdio.h>

void main(){
	
	int  year;
	
	printf("enter a any year: ");
	scanf("%d",&year);
	
	 if(year%4==0){
	 	printf("%d is a leap year ",&year);
	 }
	 
	 else{
	 	printf("%d is not leap year: ",&year );
	 }
	 
	 getch();
}
