#include <stdio.h>

int main() {
    int a,b,c,d;
    printf("***�D���ƪ��̤j���]��(GCD)�M�̤p������(LCM)***\n");
    printf("�п�J��ӥ����(�ΪŮ�j�}):");
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
    printf("�p�⵲�G\n");
    printf("%d , %d�̤j���]��(GCD)��:%d\n",c,d,b);
    printf("%d , %d�̤p������(LCM)��:%d\n",c,d,num/b);
    }else{
    printf("�p�⵲�G\n");
    printf("%d , %d�̤j���]��(GCD)��:%d\n",c,d,a);
    printf("%d , %d�̤p������(LCM)��:%d\n",c,d,num/a);
}
    
    return 0;
}


