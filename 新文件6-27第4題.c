#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a,b,c,x;
	int i=1,l=2,k=3,j=4;
	printf("�п�J��Ӿ��(�ΪŮ�j�},�ĤG��Ƥ��i�� 0):");
	scanf("%d %d",&a,&b);
	printf("***** �[�k�B�� *****\n");
    printf("   1. �[�k�B��\n");
    printf("   2. ��k�B��\n");
    printf("   3. ���k�B��\n");
    printf("   4. ���k�B��\n");
    printf("   0. ���}�B��\n");
    while(i!=0){
    printf("%d, %d��ƭn�i��󶵹B��(0~4):",a,b);
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
    	    printf("���}���{��...\n");
            break;
    default:
    	    printf("������~,�п�0~4\n");
}
}
		
	return 0;                       
}     
