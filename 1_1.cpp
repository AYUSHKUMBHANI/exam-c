#include<iostream>
#include<string.h>
using namespace std;

 class Distance{
 
         public:
         int feet;
         int inch;
         int tf;
         int ti;
};
 int main()
 {
 
 	 
 	 Distance d,d1,total;
 	 cout<<"Enter feet";
 	 cin>>d.feet;
 	 cout<<"Enter inch";
 	 cin>>d.inch;
 	 cout<<"Enter feet";
 	 cin>>d1.feet;
 	 cout<<"Enter inch";
 	 cin>>d1.inch;
 	 
 	  total.tf =d.feet + d1.feet;
 	  total.ti =d.feet + d1.inch;
 	   
 	while(total.ti>=12)
 	{
	 
	 
 	 
	   total.tf++;
	   total.ti-=12;
}

 	 cout<<"total feet ="<<total.tf<<endl
 	 <<"total inch ="<<total.ti<<endl;
 	 
 	 return 0;
 }
 
 
        
