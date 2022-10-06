//Printing even numbers between 1 and 100
#include <iostream>
using namespace std;
int main(){
	int firstNum;
	cout<<"Input first number"<<endl;
	cin>>firstNum;
	
		if(firstNum%2==0){
			cout<<"Number is even"<<endl;
		}
		else
		{
			cout<<"Number is odd"<<endl;
		}
	return 0;
}