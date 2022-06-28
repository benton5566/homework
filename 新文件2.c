#include<stdlib.h>

int main()
{
	
	int s;
	s=sizeof("123");
	printf("123常值占用的記憶體大小:%d\n",s);
	
	int d;
	d=sizeof("123");
	printf("123L常值占用記憶體大小:%d\n",d);
	
	int f;
	f=sizeof("123.45");
	printf("123.45常值占用記憶體大小:%d\n",f);
	
	int g;
	g=sizeof("123.45F");
	printf("123.45F常值占用記憶體大小:%d\n",g);
	
	return 0;
}
