/* 
Second Largest in array
You have been given a random integer array/list(ARR) of size N. 
You are required to find and return the second largest element present in the array/list.
If N <= 1 or all the elements are same in the array/list then return -2147483648 or -2 ^ 31(It is the smallest value for the range of Integer)
*/
#include<iostream>
using namespace std;
int findSecondLargest(int *input, int n)
{
    int L=-2147483648;
    int S=-2147483648;
        for(int j=0;j<n;j++){
            if(input[j]>L){
                S=L;
                L=input[j];
                
            }
            else if(input[j]>S && input[j]!=L){
                S=input[j];
            }
            
        } 
    
    return S;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}
