#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int e;
	float h=0;
	float d1=0;
	float d2=0;
	float d3=0;
	float d4=0;
	
	printf("輸入用電度數:");
	scanf("%d",&e);
	printf("\n");
	if(e<=110){
	  d1=e*2.1;
	  }else{
	  d1=110*2.1;
	  }
	  
    if(e>=111&&e<=330){
	  d2=(e-110+1)*3.02;
      }else{
      d2=(330-111+1)*3.02;
	  }
    
    if(e>=331&&e<=500){
      d3=(e-330)*4.05;
      }else{
      d3=(500-331+1)*4.05;
	  }
    
    if(e>=501){
	  d4=(e-501+1)*4.51;
      }
	  
/*printf("應繳電費為:%.1f",d1);
printf("應繳電費為:%.1f",d2);
printf("應繳電費為:%.1f",d3);
printf("應繳電費為:%.1f",d4);*/
printf("\n");
h=d1+d2+d3+d4;
printf("應繳電費為:%.1f",h);
	return 0; 
}
