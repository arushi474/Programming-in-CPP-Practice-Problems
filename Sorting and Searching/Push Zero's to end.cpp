/*Push Zeros to end
You have been given a random integer array/list(ARR) of size N. 
You have been required to push all the zeros that are present in the array/list to the end of it.
Also, make sure to maintain the relative order of the non-zero elements.*/
#include <iostream>
using namespace std;
void pushZeroesEnd(int *input, int size)
{
    
    int arr[size];
    int index=0;
    for(int i=0;i<size;i++){
        arr[i]=0;
    }
    for(int i=0;i<size;i++){
        if(input[i]!=0){
            arr[index]=input[i];
            index++;
        }
    }
    for(int i=0;i<size;i++){
        input[i]=arr[i];
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

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		pushZeroesEnd(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}
