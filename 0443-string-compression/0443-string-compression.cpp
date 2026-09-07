class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;
        int cnt = 1;

        for (int i = 1; i <= n; i++) {
            if (i < n && chars[i] == chars[i - 1]) {
                cnt++;
            } 
            else {
                chars[idx++] = chars[i - 1];
                if (cnt > 1) {
                    string s = to_string(cnt);

                    for (char c : s) {
                        chars[idx++] = c;
                    }
                }
                cnt = 1;
            }
        }
        return idx;
    }
};