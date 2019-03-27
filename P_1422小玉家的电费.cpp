#include<stdio.h>

int main(){
	int a;
	double o;
	scanf("%d",&a);
	if(a>=401){
		o = 150*0.4463+(400-150)*0.4663+(a-400)*0.5663;
	}else if (a>=151){
		o = 150*0.4463+(a-150)*0.4663;
	}else{
		o = a*0.4463;
	}
	printf("%.1f",o);
	
	return 0;
}
