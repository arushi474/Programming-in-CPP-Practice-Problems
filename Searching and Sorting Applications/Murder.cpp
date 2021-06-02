/*
Once detective Saikat was solving a murder case.
While going to the crime scene he took the stairs and saw that a number is written on every stair. 
He found it suspicious and decides to remember all the numbers that he has seen till now. 
While remembering the numbers he found that he can find some pattern in those numbers.
So he decides that for each number on the stairs he will note down the sum of all the numbers 
previously seen on the stairs which are smaller than the present number.
Calculate the sum of all the numbers written on his notes diary.
Answer may not fit in integer . You have to take long.
Input Format:
First line of input contains an integer T, representing number of test case.
For each test case, first line of input contains integer N, representing the number of stairs.
For each test case, second line of input contains N space separated integers, representing numbers written on the stairs.
Constraints
T<=10^5
1<=N<=10^5
All numbers will be between 0 and 10^9
Sum of N over all test cases doesn't exceed 5*10^5
Output Format
For each test case output one line giving the final sum for each test case.
Sample Input 1:
1
5
1 5 3 6 4
Sample Output 1:
15
*/
# include<iostream>
using namespace std;
typedef long long ll;
ll merge(ll A[],ll left,ll mid,ll right){
    ll i=left,j=mid,k=0;
     ll temp[right-left+1];
    ll count=0;
    while(i<mid && j<=right){
        if(A[i]<A[j]){
            count+=(A[i]*(right-j+1));
            temp[k++]=A[i++];
        }
         
        else{
            temp[k++]=A[j++];
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
ll merge_sort(ll A[],ll left,ll right){
    ll count=0;
    if(right>left){
        ll mid=(left+right)/2;
        ll countLeft=merge_sort(A,left,mid);
        ll countRight=merge_sort(A,mid+1,right);
        ll mycount=merge(A,left,mid+1,right);
        return countLeft+countRight+mycount;
    }
    return count;
}
ll getInversions(ll *arr, ll n)
{
    ll ans=merge_sort(arr,0,n-1);
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    ll n;
    cin >> n;
ll arr[n];
    for(ll i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << getInversions(arr, n)<<endl;

    }
}
