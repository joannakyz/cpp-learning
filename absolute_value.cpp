#include <iostream>
using namespace std;

int main(){
	int x;
	cout<<"Insert x to calculate the absolute value: ";
	cin>>x;
	if (x>=0){
		cout<<"|x| = "<<x;
	}else{
		cout<<"|-x| = "<<-x;
	}
	return 0;
}
