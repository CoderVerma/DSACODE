int findMin(vector<int>& nums) {
        int minv=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            minv=min(minv,nums[i]);
        }
        return minv;
        
    }

    // log n solution

        int findMin(vector<int>& nums) {
        int n=nums.size();
        if(nums[0]<=nums[n-1])
            return nums[0];
        
        int l=0,r=n-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            
            if(mid-1>=0 && nums[mid]<nums[mid-1])
                return nums[mid];
            else if(nums[mid]>nums[n-1])
            {
                l=mid+1;
            }
            else r=mid-1;
        }
            return -1;
    }