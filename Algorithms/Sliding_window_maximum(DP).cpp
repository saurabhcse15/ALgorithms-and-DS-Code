
int slide_window(int arr[],int n,int window_size,int maxval[]){

    int i,lr[n+10],rl[n+10];
    for(i=0;i<=n;i++)
    {   lr[i]=0;
         rl[i]=0;
    }
    for(i = 1; i <= n; i++){  // for maximum Left to Right
        if(i % window_size == 1)        // that means START of a block
            lr[i] = arr[i];
        else
            lr[i] = max(lr[i - 1], arr[i]);
    }
    for(i = n; i >= 1; i--){  // for maximum Right to Left
        if(i == n)            // Maybe the last block is not of size 'W'.
            rl[i] = arr[i];
        else if(i % window_size == 0)   // that means END of a block
            rl[i] = arr[i];
        else
            rl[i] = max(rl[i+1], arr[i]);
    }

    int k=n-window_size+1;    //total no of windows
    int maxans=0;
    for(i = 1; i <= k; i++)
    {   maxval[i] = max(rl[i], lr[i + window_size - 1]);    //maxval will store the val for each of the window 
        maxans=(maxans,maxval[i]);
    }
     return maxnas;
}
