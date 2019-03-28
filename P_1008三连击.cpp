#include<iostream>
#include<string.h>
using namespace std;


//打表判断是否重复 
bool isRepeat(int a,int b,int c){
	int n[9];
	memset(n,-1,sizeof(n));
	for(int i = 1;i<=3;i++){
		if (n[a%10 -1] == -1) 
			{
				n[a%10 -1] = a%10-1; 
				a/=10;
			}
		else
			return true;
	}
	for(int i = 1;i<=3;i++){
		if (n[b%10 -1] == -1) 
			{
				n[b%10 -1] = b%10-1; 
				b/=10;
			}
		else
			return true;
	}
	for(int i = 1;i<=3;i++){
		if (n[c%10 -1] == -1) 
			{
				n[c%10 -1] = c%10-1; 
				c/=10;
			}
		else
			return true;
	}
	return false;
}


int main(){
	//循环判断并输出三个数 
	for(int i = 1;i<= 333;i++){
		int j = i * 2;
		int k = i * 3;
		if(!isRepeat(i,j,k)){
			cout<<i<<" "<<j<<" "<<k<<endl;
		}
	}
	
	return 0; 
}
