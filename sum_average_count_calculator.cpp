#include <iostream>
using namespace std;

int main(){
	
	int num, count = 0, sum = 0;
	
	do{
		cout<<"Insert number. Press <= 0 to exit program: ";
		cin>>num;
		if (num > 0){
			count++;
			sum += num;
		}else{
			cout<<"You exited the program."<<endl;
		}
	}while(num > 0);
	
	cout<<"Count: "<<count<<endl;
	cout<<"Sum: "<<sum<<endl;
	cout<<"Average: "<<1.0 * sum/ count<<endl;

	return 0;
}
