/*
Inversion Count
For a given integer array/list of size N, find the total number of 'Inversions' that may exist.
An inversion is defined for a pair of integers in the array/list when the following two conditions are met.
A pair (arr[i], arr[j]) is said to be an inversion when,
1. arr[i] > arr[j] 
2. i < j

Where 'arr' is the input array/list, 'i' and 'j' denote the indices ranging from [0, N).
*/
#include<iostream>
using namespace std;
typedef long long ll;
ll merge(ll A[],int left,int mid,int right){
    int i=left,j=mid,k=0;
     ll temp[right-left+1];
    ll count=0;
    while(i<mid && j<=right){
        if(A[i]<=A[j]){
            temp[k++]=A[i++];
        }
        else{
            temp[k++]=A[j++];
            count+=(mid-i);
        }
    }
    while(i<mid){
        temp[k++]=A[i++];
    }
     while(j<=right){
        temp[k++]=A[j++];
    }
    for(int i=left,k=0;i<=right;i++,k++){
        A[i]=temp[k];
    }
    return count;
}
ll merge_sort(ll A[],int left,int right){
    ll count=0;
    if(right>left){
        int mid=(left+right)/2;
        ll countLeft=merge_sort(A,left,mid);
        ll countRight=merge_sort(A,mid+1,right);
        ll mycount=merge(A,left,mid+1,right);
        return countLeft+countRight+mycount;
    }
    return count;
}
ll getInversions(long long *arr, int n)
{
    ll ans=merge_sort(arr,0,n-1);
    return ans;
}
int main()
{
    int n;
    cin >> n;

    long long* arr = new long long[n];

    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << getInversions(arr, n);

    delete arr;
}
