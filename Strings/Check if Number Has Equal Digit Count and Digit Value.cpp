class Solution {
public:
    bool digitCount(string num) {
        int n = num.size();
        int ans = 0;
        
        for(int i = 0; i < n; i++) {
            int count = 0;
            for(int j = 0; j < n; j++) {
                if(i + '0' == num[j])
                    count++;
            }
            if(count == num[i] - '0')
                ans++;
        }
        
        return ans == n;
    }
};
