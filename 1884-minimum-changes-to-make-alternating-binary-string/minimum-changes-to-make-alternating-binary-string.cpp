class Solution {
public:
    // alternating string can be either of type "010101..." or "10101010..."
    // that is, either (1 at odd indices + 0 at even) or (1 at even + 0 at odd)
    int minOperations(string s) {
        int n = s.size();
        int case1 = 0; // 1 at odd indices + 0 at even
        int case2 = 0;

        for(int i = 0; i < n; i++) {
            if(i % 2 != 0 && s[i] == '0') case1++;
            else if(i % 2 == 0 && s[i] == '1') case1++;
            else if(i % 2 != 0 && s[i] == '1') case2++;
            else if(i % 2 == 0 && s[i] == '0') case2++;
        }

        return min(case1, case2);
    }
};