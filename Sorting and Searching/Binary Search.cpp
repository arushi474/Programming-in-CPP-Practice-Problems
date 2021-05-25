int binarySearch(int *input, int n, int val)
{
    int start=0,end=(n-1);
    int mid=n/2;
    while(start<=end){
        if(val==input[mid]){
            return mid;
        }
        else if(val>input[mid]){
            start=(mid+1);
        }
        else {
            end=(mid-1);
        }
        mid=(start+end)/2;
    }
    return -1;
    
}
