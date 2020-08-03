// https://www.cnblogs.com/grandyang/p/4030114.html
// two pointers

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        while(left < right) {
            while(left < right && !isalnum(s[left])) {
                left++;
            }
            while(left < right && !isalnum(s[right])) {
                right--;
            }
            if(tolower(s[left++]) != tolower(s[right--])) {
                return false;
            }
        }
        
        return true;
    }
};
