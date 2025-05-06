#include<stdio.h>
#include<time.h>
void main()
{
int r=5,b=4,o=5,ch;
printf("Available cycles are\n");
printf("1.red cycle(5)-abc company\n2.blue cycle(4)-def company\n3.orange cycle(5)-asd company\n");
while(1)
{
printf("Enter the cycle you need\n");
scanf("%d",&ch);

switch(ch)
{
case 1:if(r>0)
	{
	printf("You chose red cycle\n");
	r=r-1;
	printf("Available red cycle is %d\n",r);
	}
	else
	printf("Red cycle is not available\n");
	
       break;
case 2:if(b>0)
	{
	printf("You chose blue cycle\n");
	b=b-1;
	printf("Available blue cycles are %d\n",b);
	}
	else
	printf("Blue cycles are not available\n");
	

       break;
case 3:if(o>0)
	{
	printf("You chose orange cycle\n");
	o=o-1;
	printf("Available orange cycles are %d\n",o);
	}
	else
	printf("Orange cycles are not available\n");
	break;
default:printf("There is no such cycle choose either 1,2 or3\n");
}
}
}
       

