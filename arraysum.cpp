#include<iostream>
using namespace std;
int arraysum(int arr[] , int n)
{
	int sum = 0;
	
	for(int i = 1 ; i<n ; i++)
		sum += arr[i];
	    return sum;
		
}

int main()
{
int arr[] = {10,20,30};
int N = sizeof(arr)/sizeof(arr[1]);

arraysum(arr , N);
cout<<"sum of the array = "<<arraysum(arr,N)<<endl;
return 0;
}
	