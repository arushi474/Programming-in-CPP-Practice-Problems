/*
Pair sum to 0
Given a random integer array A of size N. 
Find and print the count of pair of elements in the array which sum up to 0.
Note: Array A can contain duplicate elements as well.
*/
using namespace std;
#include<bits/stdc++.h>
int pairSum(int *arr, int n) {
    int count=0;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        if(m.find(-arr[i])!=m.end()){
            count+=m[-arr[i]];
        }
          m[arr[i]]++;
    }
    return count;
}
int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << pairSum(arr, n);

    delete[] arr;
}
