class Solution {
public:
    bool isNumber(string s) {
        int n = s.length();
    int i = 0;

    // Helper lambdas
    auto isDigit = [](char c) { return c >= '0' && c <= '9'; };

    // Skip optional sign
    if (i < n && (s[i] == '+' || s[i] == '-')) i++;

    bool isNumeric = false, hasDot = false, hasExp = false;

    while (i < n) {
        if (isDigit(s[i])) {
            isNumeric = true;
        } else if (s[i] == '.') {
            if (hasDot || hasExp) return false;
            hasDot = true;
        } else if (s[i] == 'e' || s[i] == 'E') {
            if (hasExp || !isNumeric) return false;
            hasExp = true;
            isNumeric = false; // Reset for exponent part
            if (i + 1 < n && (s[i + 1] == '+' || s[i + 1] == '-')) i++;
            if (i + 1 >= n) return false;
        } else {
            return false;
        }
        i++;
    }

    return isNumeric;
        
    }
};