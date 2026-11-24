#include <iostream>
using namespace std;
class Animal
{
	public:
	void eat()
{
	cout<<"ANIMAL EATS!!"<<endl;
}
};
class Dog:public Animal
{
	public:
	void eat()
{
	cout<<"DOG EATS!!"<<endl;
}
};
	int main()
{
	Animal a;
	Dog d;
	a.eat();
	d.eat();
return 0;
}
