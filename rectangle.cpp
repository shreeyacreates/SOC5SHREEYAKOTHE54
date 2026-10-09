#include <iostream>
using namespace std;
class Recatngle1
{
	private:
	float l;
	float b;

	public:
	void Accept()
{
	cout<<"Enter length plizz :";
	cin>>l;
	cout<<"Enter breadth plizz :";
        cin>>b;
}
	float area();
	float perimeter();

	void display()
{
	cout<<"YOUR AREA IS:"<<area();
	cout<<"YOUR PERIMETER IS:"<<perimeter();
}
};
	float Recatngle1::area()
	{
	return l*b;
	}
	float Recatngle1::perimeter()
	{
	return 2*(l+b);
	}

int main()
	{
	Recatngle1 r;
	r.Accept();
	r.display();
return 0;
}
