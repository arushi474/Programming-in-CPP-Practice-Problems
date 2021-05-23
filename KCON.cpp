/*You are given an array A with size N (indexed from 0) and an integer K. Let's define another array B with size N · K as the array that's formed by concatenating K copies of array A.

For example, if A = {1, 2} and K = 3, then B = {1, 2, 1, 2, 1, 2}.

You have to find the maximum subarray sum of the array B. Fomally, you should compute the maximum value of Bi + Bi+1 + Bi+2 + ... + Bj, where 0 = i = j < N · K.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and K.
The second line contains N space-separated integers A0, A1, ..., AN-1.
Output
For each test case, print a single line containing the maximum subarray sum of B.

Constraints
1 = T = 10
1 = N = 105
1 = K = 105
-106 = Ai = 106 for each valid i
Subtasks
Subtask #1 (18 points): N · K = 105

Subtask #2 (82 points): original constraints

Example
Input:

2
2 3
1 2
3 2
1 -2 1

Output:

9
2
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>>t;
	while(t--){
	int n,k;
	cin>>n>>k;
	ll *ar=new ll[n];
	ll ts=0,mss=INT_MIN;
	for(int i=0;i<n;i++){
		cin>>ar[i];
		ts=ts+ar[i];
	}
	ll ps=0;
	ll bps=LLONG_MIN;
	for(int i=0;i<n;i++){
		ps=ps+ar[i];
		if(bps<ps){
			bps=ps;
		}
	}
	ll ss=0;
    ll bss=LLONG_MIN;
	for(int i=(n-1);i>=0;i--){
		ss=ss+ar[i];
		if(bss<ss){
			bss=ss;
		}
	}
	int curr=0;
	for(int i=0;i<n;i++){
		curr=curr+ar[i];
		if(curr<ar[i]){
			curr=ar[i];
		}
		if(mss<curr){
		mss=curr;
		}
		
	}
	if(k==1){
		cout<<mss<<endl;
	}
	else{
		if(ts<0){
			cout<<max(bps+bss,mss)<<endl;
		}
		else
		{
			cout<<max(bps+bss+(ts*(k-2)),mss)<<endl;
		}
	}
	delete [] ar;
}
}
