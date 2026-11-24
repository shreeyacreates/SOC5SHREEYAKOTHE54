#include <iostream>
using namespace std;
class Animal
{
        public:
        virtual void eat()
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
        Animal *ptr;
        Dog d;
        ptr=&d;
        ptr->eat();
return 0;
}








