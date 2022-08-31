class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for (int i = 0; i < arr.size()-1; i++) {
		int x = arr[i];
		for (int j = i + 1; j < arr.size(); j++) {
			if ((arr[j]%2==0&&arr[j] / 2 == x) || arr[j] * 2 == x)
				return true;
		}
	}
	return false;
    }
};
