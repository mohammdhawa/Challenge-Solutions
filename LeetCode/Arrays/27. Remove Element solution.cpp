class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = std::count(nums.begin(), nums.end(), val);
	while (n) {
		std::vector<int>::iterator it = nums.begin();
		while (it != nums.end()) {
			if (*it == val) {
				nums.erase(it);
				break;
			}
			it++;
		}
		n--;
	}

	return nums.size();
    }
};
