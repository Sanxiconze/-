#include<iostream>
using namespace std;
int main(){
	int a,b;
	int o=0,max = 0;
	for(int i = 0;i<7;i++){
		cin>>a>>b;
		if (a+b >8 && a+b>max){
			max = a+b;
			o = i;
		}
	}
	cout<<o+1;
	return 0;
}
