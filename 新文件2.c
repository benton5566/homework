#include<stdlib.h>

int main()
{
	
	int s;
	s=sizeof("123");
	printf("123�`�ȥe�Ϊ��O����j�p:%d\n",s);
	
	int d;
	d=sizeof("123");
	printf("123L�`�ȥe�ΰO����j�p:%d\n",d);
	
	int f;
	f=sizeof("123.45");
	printf("123.45�`�ȥe�ΰO����j�p:%d\n",f);
	
	int g;
	g=sizeof("123.45F");
	printf("123.45F�`�ȥe�ΰO����j�p:%d\n",g);
	
	return 0;
}
