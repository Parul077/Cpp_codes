#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;

    void speak(){
        cout<<"Speaking "<<endl;
    }

};
class Dog: public Animal{

};
class GermanShephherd: public Dog{

};
int main()
{
    GermanShephherd g;
    g.speak();
    cout<<g.age<<endl;
    return 0;
}