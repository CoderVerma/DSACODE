bool containsDuplicate(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // for(int i=1;i<nums.size();i++)
        // {
        //     if(nums[i]==nums[i-1])
        //     {
        //         return true;
        //     }
        // }
        // return false;
        
//         unordered_map<int,int>m;
//         for(auto a:nums) m[a]++;
//         for(auto a:m) 
//         {
//             if(a.second>1) return 1;
//         }
        
//         return false;
        
        unordered_set<int>m;
        for(auto a:nums) m.insert(a);
        if(nums.size()>m.size())
            return true;
        return false;
    }