#include <iostream>
using namespace std;

void func();

int main(){
	
	func();
	func();
	return 0;
}

void func(){
	
	static int x = 0;
	x++;
	cout<<"x = "<<x<<endl;
}
