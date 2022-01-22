class Solution {
public:
    int minimumCost(vector<int>& a) {
        int cost = 0;
        if(a.size() == 1){
            cost = a[0];
        }
        else{
            sort(a.begin(), a.end(), greater<int>());
            for( int i=0; i<a.size(); i+=3 ){
                if(i+1 >= a.size()){
                    cost += a[i];
                }
                else{
                    cost += a[i] + a[i+1];
                }
            }
        }
        return cost;
    }
};
