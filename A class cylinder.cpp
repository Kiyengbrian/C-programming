// A program to illustrate the working of a class
// Public in c++ class
#include <iostream>
using namespace std;
//create a class adition
class additional{
	public:
		int a,b,c;
		int product(){
			return (a*b*c);
		}
};
//function declaration
int main(int argc, char** argv)
{
//create an object additional
additional	additional;
	int product;
	additional.a=22;//to store first number
	additional.b=30;//to store second number
	additional.c=50;//to store third number
	cout<<"product is = "<<additional.product()<<endl;
return 0;
}