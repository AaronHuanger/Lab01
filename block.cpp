#include <iostream>
using namespace std;

int main(){

	int rows(1), cols(1);


	while(rows>0 && cols>0)
	{
	cout<<"Enter number of rows and columns:\n";
	cin>>rows>>cols;
		for(int r=0;r<rows;r++)
		{	
			for(int c=0;c<cols;c++)
			{
				cout<<"X.";
			}
			
			cout<<endl;
		
		}
	}
	return 0;
}
