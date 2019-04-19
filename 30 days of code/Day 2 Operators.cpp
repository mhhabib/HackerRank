#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    double n,tip,tax,total;
    int m,p,round1;
    scanf("%lf",&n);
    scanf("%d %d",&m,&p);
    tip = n*m/100;
    tax = n*p/100;

    total= n+ tip+tax;
    round1= round(total);
    printf("The total meal cost is %d dollars.",round1);   
    return 0;
}
