#include<stdio.h>
int main ()
{
	int a , b ,kt ;
	char c ;
	
	con : printf("input a ?\n");
	scanf("%d",&a);
	printf("input b ?\n");
	scanf("%d",&b);
	fflush(stdin);
	printf("enter operator either + or - or * or / ?\n");
	scanf("%c",&c);
	switch (c){
		case '+' :
		printf ("%d + %d = %d\n",a , b , a + b );
		break ;
		case '-' :
		printf ("%d - %d = %d\n",a , b , a - b );
		break;
		case '*' :
		printf ("%d * %d = %d\n",a , b , a * b );
		break;
		case '/' :
		printf ("%d / %d = %f\n",a , b , double (a) / b);
		break;
		default :
		printf ("Error! operator is not correct\n");
		break ;	
	}
	printf ("Do you want continute calculator , 1 to continute , 0 to stop ?\n");
	scanf("%d",&kt);
	if (kt) goto con ;
	
}
