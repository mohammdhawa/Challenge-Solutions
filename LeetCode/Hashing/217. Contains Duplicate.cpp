class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		unordered_set<int>hm;
		for (auto i : nums) {
			if (hm.find(i) == hm.end())
				hm.insert(i);
			else
				return true;
		}
		return false;

	}
};
