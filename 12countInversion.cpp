https://www.codingninjas.com/codestudio/problems/count-inversions_615

long long merge(long long *b,long long *temp, int si, int midI, int ei)
{
    
    long long count=0;
    //int midI = si - (si - ei) / 2;
    //int *temp = new int[si - ei +1];
    int i = si;
    int j = midI +1;
    int k = 0;
    while (i <= midI and j <= ei)
    {
        if (b[i] <= b[j])
            temp[k++] = b[i++];

        else{
            temp[k++] = b[j++];
            count += midI-i +1;
        }
        
    }
    
    while (i <= midI)
    {
        temp[k++] = b[i++];
    }

    while (j <= ei)
    {
        temp[k++] = b[j++];
    }
    
    for (int i = si; i <= ei; i++)
    {
        b[i] = temp[i-si];
    }
    //delete [] temp;
    return count;
}

long long inversion(long long *arr,long long *temp, int s, int e){
   // int count = 0;
    if(s>=e){
        return 0;
    }
    int mid = s - (s-e)/2;
    int count = inversion(arr,temp,s,mid);
    count += inversion(arr,temp,mid+1,e);
    
    count += merge(arr,temp, s,mid,e);
    
    return count;
}

long long getInversions(long long *arr, int n){
    // Write your code here.
    long long *temp = new long long[n];
    return inversion(arr,temp,0,n-1);
}