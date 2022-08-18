class Solution {
public:
    bool is_open(char ch){
        return ch=='('||ch=='{'||ch=='[';
    }
    bool is_close(char ch){
        return ch==')'||ch==']'||ch=='}';
    }
    bool isValid(string s) {
    if(is_close(s[0])){
        return false;
    }
    stack<char>st;
	int i = 0;
	while (s[i] != '\0') {
        if(st.empty()&&is_close(s[i])){
            return false;
        }
		else if (is_open(s[i]))
			st.push(s[i]);
		else if (is_close(s[i])) {
			if (st.top() == '('&&s[i]==')') {
				st.pop();
			}
			else if (st.top() == '[' && s[i] == ']') {
				st.pop();
			}
			else if (st.top() == '{' && s[i] == '}') {
				st.pop();
			}
			else
				return false;
		}
		i++;
	}
	return st.empty();
    }
};
