https://www.codingninjas.com/codestudio/problems/count-inversions_615?leftPanelTab=0

12. Count inversions in an array


long merge(long long arr[],long long temp[],long low,long mid,long high){

    long i = low;
    long j = mid;
    long k = low;
    long cnt_inv=0;

    while((i<= mid-1)&&(j<=high)){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
            cnt_inv += (mid-i);
        }
    }

    while(i<=mid-1){
        temp[k++]=arr[i++];
    }
    while(j<=high){
        temp[k++]=arr[j++];
    }

    for(long i=low;i<=high;i++){
        arr[i]=temp[i];
    }
    return cnt_inv;
}

long merge_sort(long long arr[],long long temp[],long low,long high)
    {
        long total_cnt_inv = 0;
    	if(low<high){
            long mid = (low+high)/2;
            total_cnt_inv += merge_sort(arr,temp,low,mid);
            total_cnt_inv += merge_sort(arr,temp,mid+1,high);
            
            total_cnt_inv += merge(arr,temp,low,mid+1,high);
        }    
        
        return total_cnt_inv;
    }
    


long long getInversions(long long *arr, int n){
    // Write your code here.
    long low = 0;
    long high = n-1;
    long long temp[n];
    return merge_sort(arr,temp,low,high);
}


TC: O(nlogn)
SC: O(n)

