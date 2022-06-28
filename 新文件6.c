#include <stdio.h>

const double p=3.15/100;

int main(){
   
    double s;
    double n=1000000;
    double y=3;
    s=n+(n*p*y);
    printf("%f\n",s);
    double d;
    d=n*(1+p)*(1+p)*(1+p);
    printf("%f",d);
                                    
   
    return 0;                       
}                                    
