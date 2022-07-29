// brute
int maxArea(vector<int>& A) {
        int area = 0;
        int len=A.size();
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            // Calculating the max area
            area = max(area, min(A[j], A[i]) * (j - i));
        }
    }
    return area;
    }

    // optimal
int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1;
        int ans=0;
        while(l<r)
        {
            ans=max(ans,min(height[l],height[r])*(r-l));
            if(height[l]>height[r])
                r--;
            else l++;
        }
        return ans;
    }