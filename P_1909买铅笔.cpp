#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int price;
	int number;
	int min;
	for(int i = 0 ; i < 3;i++)	{
		cin>>number>>price;
		if (i == 0 ){
			min = n%number==0?(n/number)*price:((n/number)+1)*price;
		}else{
			
			if(min >(n%number==0?(n/number)*price:((n/number)+1)*price) )
				min = (n%number==0?(n/number)*price:((n/number)+1)*price) ;
		}
	}
	cout<< min;
	return 0;
}
