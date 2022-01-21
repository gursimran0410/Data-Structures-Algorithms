class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end());
        deque<int> result;
        for(int i=deck.size()-1; i>=0; i--){
            if(result.empty()){
                result.push_front(deck[i]);
            }
            else{
                int back = result.back();
                result.pop_back();
                result.push_front(back);
                result.push_front(deck[i]);
            }
        }
        for(int i=0; i<deck.size(); i++){
            deck[i]=result.front();
            result.pop_front();
        }
        return deck;
    }
};
