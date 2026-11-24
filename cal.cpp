#include <iostream>
using namespace std;
class Calculator
{
public:
	int add(int a,int b)
{
	return a+b;
}
	int add(int a,int b,int c)
{
        return a+b+c;
}
};
	int main()
{
	Calculator c;
	cout << "ADDITION: " << c.add(5, 10)<<endl;
        cout << "ADDITION 2: " << c.add(1,5,2)<<endl;
    
    return 0;
}

