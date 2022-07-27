int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()-k];
    }

**
int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>p;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(cnt<k)
            {
                p.push(nums[i]);
                cnt++;
            }
            else
            {
                if(nums[i]>p.top())
                {
                    p.pop();
                    p.push(nums[i]);
                }
            }
        }
        return p.top();
    }