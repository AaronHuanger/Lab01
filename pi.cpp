#include <iostream>
#include <math.h>
using namespace std;

double Leibniz(int para);

int main()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);

	int n(0);

	while(n!=-1)
	{
		cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):"
			<<endl;
		cin>>n;
		cout<<"The approximate value of pi using "<<(n+1)<<" terms is: "<<Leibniz(n)<<endl;
	}
	return 0;
}

double Leibniz(int para)
{
	double pi;

	for(int n=0;n<=para;n++)
	{
		pi+=(pow(-1.0,n)/(2*n+1));
	}
	pi*=4;

	return pi;
}
