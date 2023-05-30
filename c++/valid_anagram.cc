class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        vector<int> h(26);
        for (int i = 0; i < s.length(); ++i) {
            h.at(s.at(i) - 'a') += 1;
            h.at(t.at(i) - 'a') -= 1;
        }
        for (int i = 0; i < 26; ++i) {
            if (h.at(i) != 0) {
                return false;
            }
        }
        return true;
    }
};
