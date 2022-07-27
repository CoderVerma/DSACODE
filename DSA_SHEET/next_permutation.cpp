void nextPermutation(vector<int>& nums) {
        if(nums.size()==1){
            return;
        }
        
        //to find index 1 2 3 like we want to find the first index less than i+1
        int idx1=-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx1=i;
                break;
            }
        }
        //if no such index just reverse the array
        if(idx1<0){
            reverse(nums.begin(),nums.end());
        }else{
            //index with whom we want to swap
            int idx2=0;
            for(int i=nums.size()-1;i>=0;i--){
                if(nums[i]>nums[idx1]){
                    idx2=i;
                    break;
                }
            }
        
            swap(nums[idx1],nums[idx2]);
            //then after swapping i will reverse the array from idx1+1 to end
            
            reverse(nums.begin()+idx1+1,nums.end());
            
            
        }
    }