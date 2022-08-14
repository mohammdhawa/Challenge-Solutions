class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int>nums3;
        int n = nums1.size();
        int m = nums2.size();
	    std::sort(nums1.begin(), nums1.end());
	    std::sort(nums2.begin(), nums2.end());
        
	    int i = 0, j = 0;
	    while (i < n && j < m) {
		    if (nums1[i] < nums2[j])
			    i++;
		    else if (nums2[j] < nums1[i])
			    j++;
		    else {
			    nums3.push_back(nums1[i++]);
			    j++;
		    }
	    }
	    return nums3;
    }
};
