class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hashSet;
        for(int num:nums){
            hashSet.insert(num);
        }
        int longestStreak = 0;
        
        unordered_set<int> :: iterator num;
        for(num = hashSet.begin(); num != hashSet.end(); num++){
            if(!hashSet.count(*num-1)){
                int currentNum = *num;
                int currentStreak = 1;
                while(hashSet.count(currentNum+1)){
                    currentNum++;
                    currentStreak++;
                }
                longestStreak = max(longestStreak, currentStreak);
            }
        }
        return longestStreak;
    }
};
