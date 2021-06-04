#include<bits/stdc++.h>
using namespace std;
void merge(int ar[],int left,int mid,int right){
    int temp[right-left+1];
    int i=left;
    int j=mid+1;
    int k=0;
    while(i<=mid && j<=right){
        if(ar[i]<=ar[j]){
            temp[k++]=ar[i++];
        }
        else{
            temp[k++]=ar[j++];
        }
    }
    while(i<=mid){
        temp[k++]=ar[i++];
    }
     while(j<=right){
        temp[k++]=ar[j++];
    }
    for(int i=left,k=0;i<=right;i++){
        ar[i]=temp[k++];
    }
    
}
void merge_sort(int ar[],int left,int right){
    int mid=(right+left)/2;
    if(left>=right){
        return;
    }
    else{
        merge_sort(ar,left,mid);
        merge_sort(ar,mid+1,right);
        merge(ar,left,mid,right);
    }
}
int main(){
    
  int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        merge_sort(ar,0,n-1);
         for(int i=0;i<n;i++){
            cout<<ar[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
