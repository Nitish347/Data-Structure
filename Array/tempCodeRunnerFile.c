void find2(int* arr,int n){
    int diff = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-i!=diff){
            printf("%d",diff+1)
        }
    }
}