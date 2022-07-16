#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a,b,c,x;
	int i=1,l=2,k=3,j=4;
	printf("請輸入兩個整數(用空格隔開,第二位數不可為 0):");
	scanf("%d %d",&a,&b);
	printf("***** 加法運算 *****\n");
    printf("   1. 加法運算\n");
    printf("   2. 減法運算\n");
    printf("   3. 乘法運算\n");
    printf("   4. 除法運算\n");
    printf("   0. 離開運算\n");
    while(i!=0){
    printf("%d, %d兩數要進行何項運算(0~4):",a,b);
    scanf("%d",&i);
    switch(i){
    case 1:
    	    c=a+b;
    	    printf("%d + %d =%d\n",a,b,c);
            break;
    case 2:
    	    c=a-b;
    	    printf("%d - %d =%d\n",a,b,c);
            break;
    case 3:
    	    c=a*b;
    	    printf("%d * %d =%d\n",a,b,c);
            break;
    case 4:
    	    c=a/b;
    	    printf("%d / %d =%d\n",a,b,c);
            break;
    case 0:
    	    printf("離開本程式...\n");
            break;
    default:
    	    printf("按鍵錯誤,請選0~4\n");
}
}
		
	return 0;                       
}     
