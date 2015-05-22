//NAME: Andong David Efefiong
//FACULTY: SCIENCE
//DEPT: COMPUTER SCIENCE
//REG: 47288828JA
//COURSE: CSC TUTORIAL
//LECTURER: Mr. EKABA
//ASSIGNMENT(1)
//DATE: 18 MAY 2015


#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int fivedigit;
	int first,second,third,fourth,fifth;
	
	cout<<"please enter the five digit integer:";
	cin>>fivedigit;
	
	if(fivedigit<10000)
	{
	cout<<"incorrect digit try again!";
}

if(fivedigit>99999)
{
	cout<<"incorrect digit try again!";	
}
first=fivedigit/10000;
second =(fivedigit/1000)%10;
third =(fivedigit/100)%10;
fourth =(fivedigit/10)%10;
fifth =fivedigit%10;

cout<<first;
cout<<" "<<second;
cout<<" "<<third;
cout<<" "<<fourth;
cout<<" "<<fifth;

return 0;
}

