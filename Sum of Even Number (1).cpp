//Printing even numbers between 1 and 100 and their sum
#include <iostream>
using namespace std;
int main(){
	int a, sum=0;
	for(a=1; a<=100; a++){
		if(a%2==0){
			cout<<a<<endl;
			sum=sum+a;			
		}
	}
	cout<<"The sum of the numbers is " <<sum<<endl;
	return 0;
}