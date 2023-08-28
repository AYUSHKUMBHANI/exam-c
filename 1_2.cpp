#include<iostream>
#include<string.h>
using namespace std;

 class Second{
 	public :
 	int ss;
 	int mm;
 	int hh;
 };
  int main()
  {
  	Second s;
  	cout<<"Enter second =";
  	cin>>s.ss;
  	
  	s.ss = s.ss/360;
  	s.mm = (s.ss % 360)/ 60 ;
  	s.ss = (s.ss % 360)/ 60;
  	 
  	  cout<< " "<<s.hh<<":"<<s.mm<<":"<<" "<<s.ss<<endl;
  	 
  	 return 0;
  }
