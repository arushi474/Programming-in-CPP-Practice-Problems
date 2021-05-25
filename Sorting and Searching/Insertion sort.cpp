void insertionSort(int *input, int size)
{
    int temp;
    int pos=1;
    for(int i=1;i<size;i++){
    
        for(int j=(i-1);j>=0;j--){
           if(input[i]>input[j]){
             pos=j+1;
               break;
            }
            if(j==0 && input[i]<=input[j]){
                pos=j;
            }
             
        }
        
        for(int j=i;j>pos;j--){
            temp=input[j];
            input[j]=input[j-1];
            input[j-1]=temp;
            
        }
       
    }
}
