class Solution {
public:
    string makeGood(string s) {
        string sb = s;
        int flag = 0;
        while (flag == 0 && sb.length() > 0) {
            flag = 1;
            for (int i = 0; i < sb.length() - 1; i++) {
                if (isGreat(sb, i)) {
                    sb.erase(i, 2);
                    flag = 0;
                    break; 
                }
            }
        }
        return sb;
    }

    bool isGreat(string& sb, int i) {
        if ((sb[i] >= 'a' && sb[i] <= 'z' && sb[i + 1] == sb[i] - 32) ||
            (sb[i] >= 'A' && sb[i] <= 'Z' && sb[i + 1] == sb[i] + 32)) {
            return true;
        }
        return false;
    }
};
