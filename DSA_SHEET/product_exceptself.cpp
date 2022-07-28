vector<int> productExceptSelf(vector<int>& nums) {
     int n=nums.size();
     vector<int>ans(n);
     ans[0]=1;
     for(int i=1;i<n;i++)
     {
         ans[i]=ans[i-1]*nums[i-1];
     }
     int right=1;
     for(int i=n-1;i>=0;i--)
     {
         ans[i]=ans[i]*right;
         right=nums[i]*right;
     }
        return ans;
    }


    // 
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size(),1);
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(i==j)
                    continue;
                else
                    ans[i]*=nums[j];
            }
        }
        return ans;
    }