class Solution {
public:
    int myAtoi(std::string s) {
        int i = 0;

        while (i < s.length() && s[i] == ' ') {
            i++;
        }
        int sign = 1;
        if (i < s.length() && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i++] == '-') ? -1 : 1;
        }
        long long result = 0;
        while (i < s.length() && isdigit(s[i])) {
            result = result * 10 + (s[i++] - '0');


            if (result * sign > INT_MAX) {
                return INT_MAX;
            } else if (result * sign < INT_MIN) {
                return INT_MIN;
            }
        }


        return result * sign;
    }
};
