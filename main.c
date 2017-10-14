#include <stdio.h>
#include "add.c"
#include "sub.c"
#include "mul.c"
#include "power.c"
#include "fact.c"

int main(){
        int a,b;
        scanf("%d%d",&a,&b);
        printf("Addition = %d\n",add(a,b));
        printf("Substraction = %d\n",sub(a,b));
        printf("Multiplication = %d\n",mul(a,b));
        printf("Exponent = %d\n",pow1(a,b));
        printf("Factorial = %d\n",fact(a));
}
