/*
Shaky has N (1<=N<=50000) candy boxes each of them contains a non-zero number of candies (between 1 and 1000000000). 
Shaky want to distribute these candies among his K (1<=K<=1000000000) IIIT-Delhi students.
He wants to distribute them in a way such that:
1. All students get an equal number of candies.
2. All the candies which a student gets must be from a single box only.
As he wants to make all of them happy so he wants to give as many candies as possible. Help Shaky in finding out what is the maximum number of candies which a student can get.
Input
First-line contains T the number of test cases. 
The first line of each test case contains N and K.
Next line contains N space-separated integers, ith of which is the number of candies in the ith box.
Output
For each test case print the required answer in a separate line.
Constraints
1<= T <= 10^5
1 <= N <= 10^5
1 <= K <= 10^9
0 <= A[i] <= 10^9
Sum of N over all test cases doesn't exceed 10^6
Sample Input:
2
3 2 
3 1 4
4 1
3 2 3 9
Sample Output:
3
9
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        sort(ar,ar+n);
        int start=0;
        int end=ar[n-1];
        int count=0;
        int mid;
         mid=(start+end)/2;
        while(start<=end){
           
            count=0;
            for(int i=0;i<n;i++){
                count+=(ar[i]/mid);
            }
            if(count<k){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
             mid=(start+end)/2;
        }
        cout<<mid<<endl;
    }
    return 0;
}
