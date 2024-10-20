#include<iostream>
using namespace std;

int main()
{
	int arr[6]={1,2,3,1,4,5},k=3,n=6;
	cout<<"Maximum of each and every contigous subarray of size "<<k<<" is :  ";
	for(int i=0;i<=n-k;i++)
	{
		int max=arr[i];
		for(int j=1;j<k;j++)
		{
			if(max<arr[i+j])
			{
				max=arr[i+j];
			}
		}
		cout<<max<<" ";
	}
	return 0;
}