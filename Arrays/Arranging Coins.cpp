class Solution {
public:
    int arrangeCoins(int n) {
        int row = 0;
        for(int i=1;i<=n;i++){
            if(n-i >= 0){
                row++;
                n -= i;
            }
        }
        return row;
    }
};
