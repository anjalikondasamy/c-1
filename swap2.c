#include<stdio.h>
#include<conio.h>
voidmain()

{
	int a,b,t;
  clrscr();
  
	printf("ENTER THE INPUT INTEGERS:\n");
	scanf("%d%d",&a,&b);
	printf("BEFORE SWAPPING:\n");
	printf("a=%d\nb=%d",a,b);
	t=a;
	a=b;
	b=t;
	printf("\nAFTER SWAPPING:\n");
	printf("a=%d\nb=%d",a,b);		
	}
	
