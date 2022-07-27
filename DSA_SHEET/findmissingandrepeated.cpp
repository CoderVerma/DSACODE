int *findTwoElement(int *arr, int n) {
        // code here
       
        // code here
         int *ans = new int[2];
   int count[n + 1] = {0};
   
   for (int i = 0; i < n; i++)
       count[arr[i]]++;

   for (int i = 1; i < n + 1; i++)
       if (count[i] == 0)
           ans[1] = i;
       else if(count[i] > 1)
           ans[0] = i;
           
   return ans;



//    abs method
int *findTwoElement(int *arr, int n) {
        // code here
        int i;
        int size=n;
        int *a=new int[2];
    // cout << "The repeating element is ";

    for (i = 0; i < size; i++) {
        if (arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        else
            a[0]=abs(arr[i]);
    }

    // cout << "and the missing element is ";
    for (i = 0; i < size; i++) {
        if (arr[i] > 0)
            a[1]=(i + 1);
    }
    return a;