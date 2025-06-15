#include <iostream>
using namespace std;

int main(){
	int i, max = 10;
	cout<<"~~Multiplication Table~~\n";
	for (i = 0; i <= max ; i++){
		for (int j=0; j <= max; j++){
			if (i == 0 && j == 0){
				cout<<"Multiplication of number 0: \n";
			}else if (i ==1 && j == 0){
				cout<<"Multiplication of number 1: \n";
			}else if (i == 2 && j == 0){
				cout<<"Multiplication of number 2: \n";
			}else if (i == 3 && j == 0){
				cout<<"Multiplication of number 3: \n";
			}else if (i == 4 && j == 0){
				cout<<"Multiplication of number 4: \n";
			}else if (i == 5 && j == 0){
				cout<<"Multiplication of number 5: \n";
			}else if (i == 6 && j == 0){
				cout<<"Multiplication of number 6: \n";
			}else if (i == 7 && j == 0){
				cout<<"Multiplication of number 7: \n";
			}else if (i == 8 && j == 0){
				cout<<"Multiplication of number 8: \n";
			}else if (i == 9 && j == 0){
				cout<<"Multiplication of number 9: \n";
			}else if (i == 10 && j == 0){
				cout<<"Multiplication of number 10: \n";
			}
			cout<<i<<" * "<<j<<" = "<<i*j<<endl;
		}
	}
	

	return 0;
}
