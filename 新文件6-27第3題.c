#include <stdio.h>

int main() {
    int a,b,c,d;
    printf("***―ㄢ俱计程そ计(GCD)㎝程そ计(LCM)***\n");
    printf("叫块ㄢタ俱计(ノ筳秨):");
    scanf("%d %d",&a,&b);
    int num=a*b;
    c=a;
    d=b;
    while(a>0&&b>0){
    if(a>b)
        a=a%b;
    else
        b=b%a;
}   
    if(a==0) {
    printf("璸衡挡狦\n");
    printf("%d , %d程そ计(GCD):%d\n",c,d,b);
    printf("%d , %d程そ计(LCM):%d\n",c,d,num/b);
    }else{
    printf("璸衡挡狦\n");
    printf("%d , %d程そ计(GCD):%d\n",c,d,a);
    printf("%d , %d程そ计(LCM):%d\n",c,d,num/a);
}
    
    return 0;
}


