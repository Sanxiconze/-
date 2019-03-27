#include<stdlib.h>
#include<iostream>
using namespace std;
int main(){
	int a=0;//µ±Ç° 
	int b=0;//´æ 
	int out = 0;
	
	for(int i = 0; i < 12;i++){
		cin>>out;
		a+=300;
		if (out > a){
			cout<<"-"<<i+1;
			return 0; 
		}
		while(a-out >= 100){
			a-=100;
			b+=100;
		}
		a-=out;
	}
	cout<<b*1.2+a;
	return 0;
}
