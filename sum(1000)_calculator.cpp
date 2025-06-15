#include <iostream>
using namespace std;

int main(){
	
	int i = 0, sum = 0, num;
	
	do{
		cout<<"Insert number ["<<i+1<<"]: ";
		cin>>num;
		i++;
		sum += num;
	}while (sum <= 1000);
	
	cout<<"Sum = "<<sum;	

	return 0;
}
