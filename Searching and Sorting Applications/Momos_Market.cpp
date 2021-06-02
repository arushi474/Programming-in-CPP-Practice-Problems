/*
Momos Market
Shreya loves to eat momos. Her mother gives her money to buy vegetables but she manages to save some money out of it daily. 
After buying vegetables, she goes to "Momos Market", where there are ‘n’ number of shops of momos.
Each of the shops of momos has a rate per momo. She visits the market and starts buying momos (one from each shop) starting from the first shop. 
She will visit the market for ‘q’ days. You have to tell that how many momos she can buy each day if she starts buying from the first shop daily. 
She cannot use the remaining money of one day on some other day. But she will save them for other expenses in the future, 
so, you also need to tell the sum of money left with her at the end of each day.
Input Format:
First-line will have an integer ‘n’ denoting the number of shops in the market.
The next line will have ‘n’ numbers denoting the price of one momo of each shop.
The next line will have an integer ‘q’ denoting the number of days she will visit the market.
Next ‘q’ lines will have one integer ‘X’ denoting the money she saved after buying vegetables.
Constraints:
1 <= n <= 10^5
1 <= q <= 10^4
1 <= X <= 10^9
1 <= rate per momo <=10^9 (for each shop)
Output:
There will be ‘q’ lines of output each having two space separated integers denoting number of momos she can buy and amount of money she saved each day.
Sample Input:
4
2 1 6 3
1
11
Sample Output:
3 2
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin>>n;
    ll ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=1;i<n;i++){
        ar[i]=ar[i]+ar[i-1];
    }
    int q;
    cin>>q;
    ll x[q];
    for(int i=0;i<q;i++){
        cin>>x[i];
    }
    int ind=0;
    while(ind<q){
        
        int start=0;
        int end=n-1;
        int mid=(start+end)/2;
        while(start<=end){
            if(ar[mid]>x[ind]){
                end=mid-1;
            }
            else{
               start=mid+1;
                }
             mid=(start+end)/2;
        }
        ll val=x[ind]-ar[mid];
        cout<<mid+1<<" "<<val<<endl;
        ind++;
    }
    return 0;
}
