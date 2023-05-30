class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.size();
        for (int i = 0; i < len; ++i) {
            if (ispunct(s.at(i)) || s.at(i) == ' ') {
                s.erase(i--, 1);
                len = s.size();
            } else {
                s.at(i) = tolower(s.at(i));
            }
        }
        string copy(s);
        reverse(copy.begin(), copy.end());
        return (s == copy) ? true : false;
    }
};
