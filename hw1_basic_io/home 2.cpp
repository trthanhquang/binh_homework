#include<stdio.h>
int main ()
{
	int a , b ;
	char c ;
	printf("input a ?\n");
	scanf("%d",&a);
	printf("input b ?\n");
	scanf("%d",&b);
	fflush(stdin);
	printf("enter operator either + or - or * or / ?\n");
	scanf("%c",&c);
	switch (c){
		case '+' :
		printf ("%d + %d = %d",a , b , a + b );
		break ;
		case '-' :
		printf ("%d - %d = %d",a , b , a - b );
		break;
		case '*' :
		printf ("%d * %d = %d",a , b , a * b );
		break;
		case '/' :
		printf ("%d / %d = %f",a , b , double (a) / b);
		break;
		default :
		printf ("Error! operator is not correct");
		break ;
		
		
	}
}
