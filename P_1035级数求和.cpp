#include<iostream>
using namespace std;

int getN(int k){
	int n = 0;
	double sn = 0.0;
	while(sn<=k){
		n++;
		sn += 1.0/n;
	}

	
	return n;
}

int main(){
	int k,n;
	cin>>k;
	n = getN(k);
	cout<<n;
	return 0;
}
