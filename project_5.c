#include<stdio.h>

void main(){
	 
	 int a,b,c,mini;
	  
	printf("enter the 3 numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	
	if( (a<b) && (a<c) )
	
   {
      mini = a;
   }
   
   
   
   else if(b<c)
   
   {
      mini = b;
   }
   	
	   
   	else
   	
   {
     mini = c;
   }
     printf("mini of %d %d and %d is : %d\n",a,b,c,mini);

}
