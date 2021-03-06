class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word.length() <= 1) return true;
        if (islower(word[0]) || (isupper(word[0]) && islower(word[1]))) {
            for (int i = 1; i < word.length(); i++)
                if (isupper(word[i])) return false;
        } else {
            for (int i = 1; i < word.length(); i++)
                if (islower(word[i])) return false;
        }
        return true;
    }
};
