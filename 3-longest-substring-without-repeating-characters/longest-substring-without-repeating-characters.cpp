class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0;
        for (int i = 0; i < s.length(); i++) {
            set<char> hash;
            int tempCount = 0;
            for (int j = i; j < s.length(); j++) {
                if (hash.find(s[j]) == hash.end()) {
                    hash.insert(s[j]);
                    tempCount++;
                } else {
                    break;
                }
            }
            maxLength = max(maxLength, tempCount);
        }
        return maxLength;
    }
};
