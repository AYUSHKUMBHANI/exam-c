
#include<iostream>
#include<string.h>
using namespace std;


 class ayush{
 	public :
 	int a=30;
 	void print(int a)
   {
   	  cout<<"Member function"<<endl;
   }
    void print(int a,int b)
    {
    	cout<<"A + B"<<a+b<<endl;
	}
	 void print(int a,int b,int c)
	 {
	 	cout<<"A + B + c" <<a+b+c<<endl;
	 }
 };
   int main()
   {
   	 ayush a;
   	 a.print(30);
   	 a.print(30,40);
   	 a.print(30,40,50);
   	
   	
   	
   }
