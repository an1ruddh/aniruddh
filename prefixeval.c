#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void reverse(char *s, int begin, int end){
    char temp ;
    if(begin>=end) return ;
    while(begin<end){
        temp = *(s+begin) ;
        *(s+begin) = *(s+end) ;
        *(s+end) = temp ;
        ++begin ; --end;
    }
}

double compute(char symbol, double op1,double op2)
{
    switch(symbol)
    {
        case'+':return op1+op2;
        case'-':return op2-op1;
        case'*':return op1*op2;
        case'/':return op2/op1;
        case'$':
        case'^':return pow(op2,op1);
    }
}
void main()
{
    double s[20],res,op1,op2;
    int top,i;
    char postfix[20],symbol;
    printf("enter the prefix expression\n");
    scanf("%s",postfix);
    reverse(postfix,0, strlen(postfix)-1)  ;
    printf("Postfix Representation of prefix:%s",postfix) ;
    top=-1;
    for(i=0;i<strlen(postfix);i++)
    {
        symbol=postfix[i];
        if(isdigit(symbol))
            s[++top]=symbol-'0';
        else
        {
            op2=s[top--];
            op1=s[top--];
            res=compute(symbol,op1,op2);
            s[++top]=res;
        }
    }
    res=s[top--];
    printf("the result is %f\n",res);
}
