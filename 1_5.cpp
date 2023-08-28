#include<iostream>
#include<string.h>
using namespace std;
class A{
	public :
	 int id;
	 char name[100];	
	 char roll[100];
	 char salary[10];
	 int exp;
	 char cmp_name[50];
	 char add[100];
	 char email[50];
	 char contact[10];
	  void setter()
	  {
	  	cout<<"Enter Employe Id = ";
	  	cin>>id;
	  	cout<<"Enter Employe Name = ";
	  	cin>>name;
	  	cout<<"Enter Employe Post = ";
	  	cin>>roll;
	  }
};
class B : public A{
	   public :
	   	void setter()
	   	{
	   		cout<<"Enter Employe Salary = ";
	  		cin>>salary;
	  		cout<<"Enter Employe Experience = ";
	  		cin>>exp;
		}
};	
class C : public B{
	   public :
	   	void setter()
	   	{
	   		cout<<"Enter Employe Compny name = ";
	  		cin>>cmp_name;
	  		cout<<"Enter Employe Address = ";
	  		cin>>add;
		}
		void getter()
		{
			cout<<"Employe Name = "<<name<<endl
			    <<"Employe Post = "<<roll<<endl
			    <<"Employe Salary = "<<salary<<endl;
		}		
};
class D : public C{
	   public :
	   	void setter()
	   	{
	   		cout<<"Enter Employe Email = ";
	  		cin>>email;
	  		cout<<"Enter Employe Contact = ";
	  		cin>>contact;		
		}
		void getter()
		{
			cout<<"Employe ID = "<<id<<endl
				<<"Employe Name = "<<name<<endl
			    <<"Employe Post = "<<roll<<endl
			    <<"Employe Salary = "<<salary<<endl
				<<"Employe Experince = "<<exp<<endl
				<<"Employe Compny Name = "<<cmp_name<<endl
				<<"Employe Address = "<<add<<endl
				<<"Employe Email Id = "<<email<<endl
				<<"Employe Contact no. = "<<contact<<endl;
		}	
};
int main()
{
	D p;
	p.A::setter();
	p.B::setter();
	p.C::setter();
	p.D::setter();
	p.D::getter();


}
