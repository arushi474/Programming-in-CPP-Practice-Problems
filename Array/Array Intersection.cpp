/*
Array Intersection
You have been given two integer arrays/list(ARR1 and ARR2) of size M and N, respectively.
You need to print their intersection; An intersection for this problem can be defined when both the arrays/lists contain a particular value or to put it in other words, when there is a common value that exists in both the arrays/lists.
Note :
Input arrays/lists can contain duplicate elements.

The intersection elements printed would be in the order they appear in the first array/list(ARR1)
*/
#include<iostream.h>
using namespace std;
const int N=1e5+10;
int hsh[N];
void intersection(int *input1, int *input2, int size1, int size2)
{
    for(int i=0;i<=1e5;i++){
        hsh[i]=0;
    }
    
    for(int i=0;i<size2;i++){
        hsh[input2[i]]++;
     }
    for(int i=0;i<size1;i++){
      if(hsh[input1[i]]>0){
          cout<<input1[i]<<" ";
          hsh[input1[i]]--;
      }
    }
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size1, size2;

		cin >> size1;
		int *input1 = new int[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> input1[i];
		}

		cin >> size2;
		int *input2 = new int[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> input2[i];
		}

		intersection(input1, input2, size1, size2);
		
		delete[] input1;
		delete[] input2;
		
		cout << endl;
	}

	return 0;
}
