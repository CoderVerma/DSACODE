 int maxProfit(vector<int>& prices) {
        int minv=INT_MAX;
        int maxp=0;
        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            minv=min(minv,prices[i]);
            maxp=max(maxp,prices[i]-minv);
        }
        return maxp;
    }