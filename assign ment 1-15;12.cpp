#include<iostream>
using namespace std;
 int main()
 {
   int orignum,num,rem,sum=0;
   cout<<"enter a positive integer:";
   cin>>orignum;
   
   num=orignum;
    while(num !=0)
    {
	 
	   rem=num %10;
	   sum+= rem *rem *rem;
	   num/=10;
     
	 }
     if(sum==orignum)
      cout<<orignum<<"is an armstrong number.";
else
      cout<<orignum <<"is not an armstrong number.";
      
      return 0;
}
      

