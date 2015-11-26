//Comment: Good! Please make sure input/output format match with sameple input output!
//Question: what is fflush(stdin) for?

#include<stdio.h>
int main ()
{
	int a , b , c, d ;
	char o;
    /*
	printf("input a?\n");
	scanf("%d",&a);
	printf("input b?\n");
	scanf("%d",&b);
	fflush(stdin);
	printf("a+b=%d , a-b=%d ,a*b=%d , a/b=%f\n",a+b ,a-b , a*b , double (a)/b);
    */
    //printf("enter operator either + or - or * or / :");
	scanf("%c",&o);
    //printf("enter one of result of a+b or a-b or a*b or a/b and input c?");
	scanf("%d%d",&c,&d);
	switch (o){
		case '+' :
            //printf("%d + %d = %d",c, d, c+d);
            printf("%d",c+d);
            break;
        case '-':
            //printf("%d - %d = %d",c, d, c-d);
            printf("%d",c-d);
            break;
        case '*':
            //printf("%d * %d = %d",c, d, c*d);
            printf("%d",c*d);
            break;
        case '/':
            //printf("%d / %d = %d",c, d, c/d);
            printf("%d",c/d);
            break;
        default:
            printf("Error! operator is not correct");
            break;
	}
	

}

