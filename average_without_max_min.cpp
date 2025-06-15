#include <iostream>
using namespace std;

int main(){
	
	int num, count = 0, count1 = 0, max, min, sum = 0, tot_sum = 0;
	num = 0;
	max = -1000;
	min = 1000;
	do{
		cout<<"Insert number: ";
		cin>>num;
		
		if (num > max){
			max = num;
		}else if(num < min){
			min = num;
		}
		count++;
		sum += num;
	}while(count < 30);
	
	tot_sum = sum - max - min;
	cout<<"Average: "<<1.0*tot_sum/28;
	cout<<"\nMax: "<<max<<endl;
	cout<<"Min: "<<min;
	return 0;
}
