#include <iostream>
using namespace std;

int main(){

	int rows, cols;

	cout<<"Enter number of rows and columns:\n";
	cin>>rows>>cols;

	while(rows>0 && cols>0)
	{
		for(int r=0;r<rows;)
		{	
			for(int c=0;c<cols;)
			{
				cout<<"X.";
				cols--;
			}
			
			cout<<endl;
			rows--;
		}
	}
	return 0;
}
