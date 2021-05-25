void bubbleSort(int *input, int size)
{
    int temp;
    for(int i=0;i<(size-1);i++){
        for(int j=0;j<(size-1);j++){
            if(input[j]>input[j+1]){
                temp=input[j];
                input[j]=input[j+1];
                input[j+1]=temp;
            }
        }
    }
}
