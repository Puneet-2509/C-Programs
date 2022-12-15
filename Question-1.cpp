#include <iostream>
using namespace std;
int main()
{
	double sum,res1,res2;
	int i=1;
	int lim;
	cout<<"Enter the limit"<<endl;
	cin>>lim;
	int n;
	while(i<=lim)
	{
		int pow=1;
		for(n=1;n<=i;n++)
			{
				pow=pow*i;
			}
		if(i%2==1)
		{
			res1=(double)1/pow;
			sum=sum+res1;
		}
		else
		{
			res2=(double)1/pow;
			sum=sum-res2;
		}
		i=i+1;
	}
	
	cout<<"Sum of series is "<<sum<<endl;
	return 0;
}

 

