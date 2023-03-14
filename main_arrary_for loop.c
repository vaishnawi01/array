#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 
{
	int x[5],i,a;
    printf("Enter the value of array\n");
	for( a= 0; a<=5 ; a++ )
	{
	scanf("%d" , &x[a]);
    }
     printf("%d\n", x[a]);
    scanf("%d", &i);
    if(i>=0 && i<=4)
	{
		printf("the number is betwwen 0 and 4\n");
    printf("%d",x[i]);
	}
	else 
	{
    printf("enter value between 0 to 4");
	}
	return 0;
}

