class Solution {
public:
    int commonFactors(int a, int b) {
        int n = __gcd(a, b);
        int ans = 0;
        for (int i = 1; i <= sqrt(n); i++) {
            if (n % i == 0) {
                if (n / i == i)
                    ans += 1;
                else
                    ans += 2;
            }
        }
        return ans;
    }
};