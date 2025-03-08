    for(int i= n-1; i>0 ; i--){
        swap(arr[0], arr[i]);
        heapify(arr, i , 0);
    }
