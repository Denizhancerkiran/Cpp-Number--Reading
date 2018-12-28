#include <iostream>
#define b break;
using namespace std;
void printhundred (int);
void printten(int a);
void printone(int a);
int main ()
{
int number,one,ten,hundred,thousands,million;
cout<<"Enter a number between zero and hundred million: ";
cin>>number;
if(number<0)
	{
	 cout<<"Nagative ";
	 number=-1*(number);
	 goto go;
	} 
 go:	
 if(number>1000000000)
	{
     cout<<"Enter a number between zero and hundred million.";
    
	}

else if(number<=1000000000 && number>=1000000) 
	{
		
     hundred=(number/100000000); printhundred(hundred);
     ten=(number/10000000)%10; printten(ten);
     million=(number/1000000)%10; printone(million);
     cout<<"million ";
     goto run;
	}
else if(number<1000000 && number>100)
run:
	{
	 hundred=(number/100000)%10; printhundred(hundred);
	 ten=(number/10000)%10; printten(ten);
	 one=(number/1000)%10; if(one!=1){ printone(one); }  
	  if(hundred!=0 || ten!=0 || one!=0)
		{
		 cout<<"thousand ";
		} goto continuation;
	}
else if(number<=100 && number>0)
{ continuation:
	hundred=(number/100)%10; printhundred(hundred);
	 ten=(number/10)%10; printten(ten);
	 one=(number%10); printone(one);
}
cout<<" is read this way.";
return 0 ;
}	
void printhundred(int a)
	{
	 switch(a)
	 {
	  case 1: 
	  cout<<"hundred "; b
	  case 2: 
	  cout<<"two hundred "; b
	  case 3: 
 	  cout<<"three hundred "; b
	  case 4: 
	  cout<<"four hundred "; b
	  case 5: 
	  cout<<"five hundred "; b
	  case 6: 
	  cout<<"six hundred "; b
	  case 7: 
	  cout<<"seven hundred "; b
	  case 8: 
	  cout<<"eight hundred "; b
 	  case 9: 
	  cout<<"nine hundred "; b
	 }
	}	
void printten(int a)
	{
	 switch(a)
	 {
	  case 1: 
	  cout<<"ten "; b
	  case 2: 
	  cout<<"twenty "; b
	  case 3: 
 	  cout<<"thirty "; b
	  case 4: 
	  cout<<"Forty "; b
	  case 5: 
	  cout<<"fifty "; b
	  case 6: 
	  cout<<"sixty "; b
	  case 7: 
	  cout<<"seventy "; b
	  case 8: 
	  cout<<"eighty "; b
 	  case 9: 
	  cout<<"ninety "; b
	 }
	}	
void printone(int a)
	{
	 switch(a)
	 {
	  case 1: 
	  cout<<"one "; b
	  case 2: 
	  cout<<"two "; b
	  case 3: 
 	  cout<<"three "; b
	  case 4: 
	  cout<<"four "; b
	  case 5: 
	  cout<<"five "; b
	  case 6: 
	  cout<<"six"; b
	  case 7: 
	  cout<<"seven "; b
	  case 8: 
	  cout<<"eight "; b
 	  case 9: 
	  cout<<"nine "; b
	 }
	}	
