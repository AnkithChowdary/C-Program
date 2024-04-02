#include<stdio.h>
//Merge Sort
//Forgot 😒 Go and watch 'Take you forward' video 😊
int merge(int arr[],int low,int mid,int high){
    /* The code snippet is performing the merging step of the merge sort algorithm. */
    int i=low,j=mid+1,temp[high-low+1],k=0;
    while(i<=mid&&j<=high){
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            k++,i++;
        }else
        {
            temp[k]=arr[j];
            k++,j++;
        }
        
    }
    //For remaining elements
    while(i<=mid){
        temp[k]=arr[i];
        k++,i++;
    }
    
    while(j<=high){
        temp[k]=arr[j];
        k++,j++;
    }
    for(int i=low,k=0;i<=high;i++,k++){
        arr[i]=temp[k];
    }
    
}
void mergeSort(int arr[],int low,int high){
    if(low>=high)
    return;
    int mid=low+(high-low)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
void main(){
    int arr[]={7,4,9,0,4,5,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    for(int i=0; i<n;i++)
    printf("%d ",arr[i]);
}