#include<iostream>
using namespace std ;
//single inheritance 
class A
{
  	public :
  		void displayA()
  		{
  		 cout<<"UR INSIDE OF CLASS A";	
		}
	
};
class B : public A
{
  	public :
  		void displayB()
  		{
  		 cout<<"UR INSIDE OF CLASS B";	
		}
	
};
class C : public B
{
  	public :
  		void displayC()
  		{
  		 cout<<"UR INSIDE OF CLASS C";	
		}
	
};

main()
{
	A a;
	B b;
	C c;
	a.displayA();
	cout<<"\n\n";
	
	b.displayA();
	cout<<"\n";
	b.displayB();
	cout<<"\n\n";
	
	c.displayA();
	cout<<"\n";
	c.displayB();
	cout<<"\n";
	c.displayC();
	cout<<"\n";
	
}



