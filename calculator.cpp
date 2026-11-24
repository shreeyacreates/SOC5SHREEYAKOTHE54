#include <iostream>
using namespace std;
class Calculator
{
public:
	int a=5;
	int b=1;

	int add()
{
	return a+b;
}
};
class Calculation : public Calculator
{
public:

       int subtract()
{
        return a-b;
}
};
int main()
{
	Calculation cal;
	cout<<"ADDITION:"<<endl<<cal.add();
	cout<<"SUBTRACTION:"<<endl<<cal.subtract();
return 0;
}


