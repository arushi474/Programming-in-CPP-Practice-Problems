/* 
Arrange Numbers in Array
You have been given an empty array(ARR) and its size N. 
The only input taken from the user will be N and you need not worry about the array.
Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,.......4,2.
*/
#include<iostream.h>
using namespace std;
void arrange(int *arr, int n)
{ int a=1;
 int b=0;
    for(int i=0;i<n;i++){
        
    if(a<n)
    {
        arr[i]=a;
        a+=2;
    }
        else
        {   
           if(arr[i-1]==n && n%2!=0){
            b=1; }
            
        
            arr[i]=(n-b);
            b+=2;
            
        }
       
    }
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}

	
}
