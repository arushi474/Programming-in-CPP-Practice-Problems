void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
     int n= size1+size2;
    int one=0;
    int two=0;
    for(int i=0;i<n;i++){
        if(one<size1 && arr1[one]<=arr2[two]){
       ans[i]=arr1[one];
            one++;
        }
       else if(two<size2 && arr1[one]>arr2[two]){
           ans[i]=arr2[two];
            two++;
        
        }
         else if(one<size1 && two==size2){
           ans[i]=arr1[one];
             one++;
        
        }
        else if(one==size1 && two<size2){
            ans[i]=arr2[two];
             two++;
            
        }
    }
   
}
