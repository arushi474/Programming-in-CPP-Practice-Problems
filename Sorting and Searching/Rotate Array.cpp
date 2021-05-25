/* 
Rotate array
Send Feedback
You have been given a random integer array/list(ARR) of size N. 
Write a function that rotates the given array/list by D elements(towards the left).
*/
#include <iostream>
using namespace std;
void rotate(int *input, int d, int n)
{
int temp[n];
    int a=0;
    for(int i=(n-1);i>=0;i--){
        temp[a]=input[i];
        a++;
    }
 a=0;
    for(int i=(n-d-1);i>=0;i--){
        input[a]=temp[i];
        a++;
    }
    a=(n-d);
    for(int i=(n-1);i>=(n-d);i--){
        input[a]=temp[i];
        a++;
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

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}
