#include <iostream>
using namespace std;

int main(){
	
	double grade1, grade2, grade3, max_1, max_2, average;
	
	max_1 = -10;
	max_2 = -10;
	
	cout<<"Enter grade_1: ";
	cin>>grade1;
	cout<<"Enter grade_2: ";
	cin>>grade2;
	cout<<"Enter grade_3: ";
	cin>>grade3;
	
	if (grade1 >= grade3 && grade2 >= grade3){
		max_1 = grade1;
		max_2 = grade2;
	}else if(grade1 >= grade2 && grade3 >= grade2){
		max_1 = grade1;
		max_2 = grade3;
	}else{
		max_1 = grade2;
		max_2 = grade3;
	}
	
	average = (max_1 + max_2) / 2;
	
	cout<<"Average grade = "<<average;
	return 0;
}
