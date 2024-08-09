#include<iostream>
using namespace std;
class baseClass{
	public:
		int varBase;
		void display()
		{
			cout<<"Displaying Base Class variable varBase "<<varBase<<endl;
		}
};

class derivedClass : public baseClass{
    public:
		int varDerived;
		void display()
		{
			cout<<"Displaying Base Class variable varBase "<<varBase<<endl;
			cout<<"Displaying Base Class variable varDerived"<<varDerived<<endl;
		}
};


int main()
{
	baseClass * baseClassPointer;
	baseClass objBase;
	derivedClass objDerived;
	baseClassPointer = &objDerived;          // Pointing base class pointer to derived class
	baseClassPointer->varBase = 34;
//	baseClassPointer->varDerived =  77;      // Will throw an error
	baseClassPointer->display();
	
	derivedClass * derivedClassPointer;
	derivedClassPointer = &objDerived;
	derivedClassPointer->varBase = 54;
	derivedClassPointer->varDerived = 94;
	derivedClassPointer->display();
	return 0;
}