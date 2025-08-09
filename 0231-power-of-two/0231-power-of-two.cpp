class Solution {
public:
     bool isPowerOfTwo(int n) {
        if (n == 1 || n==2)
            return true;
        for (int i = 0; i < sqrt(n)+1; i++) {
            if (pow(2, i) == n) {
                return true;
            }
        }
        return false;
    }
};