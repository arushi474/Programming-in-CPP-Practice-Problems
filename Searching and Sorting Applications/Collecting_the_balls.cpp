/*
Collecting the balls
There are ‘n’ number of balls in a container. Mr. Sharma and Singh want to take balls out from the container.
At each step, Mr. Sharma took ‘k’ balls out of the box and Mr. Singh took one-tenth of the remaining balls.
Suppose there are 29 balls at the moment and k=4. Then, Mr. Sharma will take 4 balls and Mr. Singh will take 2 balls (29-4 = 25; 25/10 = 2).
If there are less than ‘k’ balls remaining at some moment, then Mr. Sharma will take all the balls which will get the container empty. 
The process will last until the container becomes empty. Your task is to choose minimal ‘k’ for Mr. Sharma such that 
Mr. Sharma will take at least half of the balls from the container.
Input Format:
The first line of input will contain T (number of test cases).
The next n lines of input contain a single integer ‘n’.
Output Format:
For every test case print a single integer denoting the minimal value of ‘k’ in a newline.
Constraints:
1 <= T <= 10^4
1 <= n <= 10^18
Time Limit: 1 second
Sample Input:
1
68
Sample Output:
3
*/
#include<bits/stdc++.h>
using namespace std;
typedef  unsigned long long ll;
int main(){
    
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll start=1;
        ll end=n;
         ll k=(start+end)/2;
        ll curr;
        ll ans;
        while(start<=end){
            ll sum=0;
            curr=n;
            while(curr>0){
               ll o=min(curr,k);
                sum+=o;
                curr-=o;
                curr-=curr/10;      
        }
         
            if((sum*2)>=n){
                ans=k;
                end=k-1;
            }
            else{
                start=k+1;
            }
             k=(start+end)/2;
            
           
    }
        cout<<ans<<endl;
    }
    return 0;
}
