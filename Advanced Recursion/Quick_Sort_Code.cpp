#include<bits/stdc++.h>
using namespace std;
int partition(int ar[],int left,int right){
    int countsmall=0;
    int x=ar[left];
    for(int i=left+1;i<=right;i++){
        if(ar[i]<=x){
            countsmall++;
        }
    }
    int index=left+countsmall;
    int temp=ar[left];
    ar[left]=ar[index];
    ar[index]=temp;
    int i=left;
    int j=right;
    while(i<=index && j>=index){
        while(ar[i]<=x){
            i++;
        }
        while(ar[j]>x){
            j--;
        }
        if(i<index && j>index){
          int t=ar[i];
            ar[i]=ar[j];
            ar[j]=t;
            i++;
            j--;
        }
    }
    return index;
    
}
void quick_sort(int ar[],int left, int right){
    if(left>=right){
        return;
    }
    else{
       int c=partition(ar,left,right);
        quick_sort(ar,left,c-1);
        quick_sort(ar,c+1,right);
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
        quick_sort(ar,0,n-1);
         for(int i=0;i<n;i++){
            cout<<ar[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
