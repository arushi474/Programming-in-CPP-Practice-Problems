/*
Longest Consecutive Sequence
Send Feedback
You are given an array of unique integers that contain numbers in random order. 
You have to find the longest possible sequence of consecutive numbers using the numbers from given array.
You need to return the output array which contains starting and ending element. 
If the length of the longest possible sequence is one, then the output array must contain only single element.
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> longestConsecutiveIncreasingSequence(int *arr, int n) {
     map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]=i;     
    }
    vector<int> v;
    sort(arr,arr+n);
   int max_length=0;
    int curr_length=1;
    for(int i=1;i<n;i++){
        if(arr[i]==(arr[i-1]+1)){
            curr_length++;
        }
          else{
              int a=i-curr_length;
              if(max_length<curr_length){
                  v.clear();
                  v.push_back(arr[a]);
                  v.push_back(arr[i-1]);             
                  
              }
              else if(max_length==curr_length && m[arr[a]]<m[v[0]]){
                      v.clear();
                     v.push_back(arr[a]);
                      v.push_back(arr[i-1]);
              }
              max_length=max(max_length, curr_length);
                  curr_length=1;
              
          }
    }
    return v;
}
int main() {
    int size;
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    vector<int> ans = longestConsecutiveIncreasingSequence(arr, size);

    cout << ans[0];
    if (ans.size() > 1) {
        cout << " " << ans[ans.size() - 1];
    }

    delete[] arr;
}
