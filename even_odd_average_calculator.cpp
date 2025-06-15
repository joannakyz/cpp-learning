#include <iostream>
using namespace std;

int main(){
	
	int num, max = 10, sum = 0, count = 0, count_even = 0, count_odd = 0;
	float average;
	
	do{
		cout<<"Insert integer: ";
		cin>>num;
		while(num == 100){
			cout<<"You entered 100. Please insert again.\n";
			cout<<"Insert integer: ";
			cin>>num;
		}
		if (num != 100 and num != 0){
			count++;
			sum += num;
			
			if(num % 2 == 0){
				count_even ++;
			}else{
				count_odd ++;
			}
		}else if(num == 0){
			cout<<"You exited the program.";
		}
		
	}while(num != 0);

	cout<<"\nAverage: "<<1.0 * sum/ count<<endl;
	cout<<"Odd numbers: "<<count_odd<<endl;
	cout<<"Even numbers: "<<count_even<<endl;
	return 0;
}
