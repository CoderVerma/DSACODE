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