/*
Swap Alternate
You have been given an array/list(ARR) of size N. 
You need to swap every pair of alternate elements in the array/list.
You don't need to print or return anything, just change in the input array itself.
*/
#include<iostream>
using namespace std;
void swapAlternate(int *arr, int size)
{
int c;
    for(int i=0;(i+1)<size;i=i+2){
        c=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=c;
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;
		cin >> size;
		int *arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		swapAlternate(arr, size);
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}
}
