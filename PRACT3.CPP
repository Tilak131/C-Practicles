#include<iostream.h>
#include<conio.h>
	void main()
	{
	int divided,divisor,quotient,remainder;
	clrscr();
	cout<<"enter divided";
	cin>>divided;
	cout<<"enter divisor";
	cin>>divisor;
	quotient=divided/divisor;
	remainder=divided%divisor;
	cout<<"quotient :"<<quotient<<endl;
	cout<<"remainder :"<<remainder<<endl;
	getch();
	}
