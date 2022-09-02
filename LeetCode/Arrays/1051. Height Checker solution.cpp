class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        
        int arr[n];
        int c = 0;
        
        for(int i = 0; i<n;i++)
            arr[i] = heights[i];
        
        sort(heights.begin(), heights.end());
        
        for(int i = 0; i<heights.size(); i++)
            if(arr[i]!=heights[i])
                c++;
        
        return c;
    }
};
