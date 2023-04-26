#include<iostream>
#include<conio.h>
using namespace std;
class swapp{
	
	public:
		void getdata(int &c,int &d)
		{
			int temp;
			temp=c;
			c=d ;
			d=temp;
		}
	
};
main()
{
	swapp s;
	int a,b;
	a=2,b=3;
	s.getdata(a,b);
	cout<<"after swapping:"<<"a="<<a<<"\t"<<"b="<<b;
	getch();
}
