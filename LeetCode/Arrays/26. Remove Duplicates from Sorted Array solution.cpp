class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int j = 0; 
	int n = nums.size();
	for (int i = 1; i < n; i++) {
		if (nums[j] == nums[i]) {
			continue;
		}
		else {
			nums[++j] = nums[i];
		}
	}
	nums.erase(nums.begin() + j+1, nums.end());
    n = nums.size();
	return n;
    }
};
