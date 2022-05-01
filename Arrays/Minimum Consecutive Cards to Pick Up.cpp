class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int, int> index;
        int minDist = cards.size()+1;
        for(int i=0; i<cards.size(); i++){
            if(index.find(cards[i]) != index.end()){
                minDist = min(minDist, i-index[cards[i]]+1);
            }
            index[cards[i]] = i;      
        }
        return minDist > cards.size() ? -1 : minDist;
    }
};
