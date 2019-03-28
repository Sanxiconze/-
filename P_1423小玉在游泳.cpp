#include<iostream>
using namespace std;

int getStep(double x){ //ำฮxรื 
	int step = 0;
	double m = 2.0;
	double mTotal = 0;
	while(mTotal < x){
		step ++;
		mTotal += m;
		m*=0.98;
	}
	return step;
}
int main(){
	double x;
	int step;
	cin>> x;
	step = getStep(x);
	cout<<step;
	
	return 0;
}
