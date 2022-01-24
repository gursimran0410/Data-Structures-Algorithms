class Solution {
public:
    bool detectCapitalUse(string word) {
        int flag = 0, FLAG = 0;
        
        for(int i = 1; i < word.size(); i++)
        {
            if(word[i] >= 'A' && word[i] <= 'Z')
                FLAG = 1;
            else if(word[i] >= 'a' && word[i] <= 'z')
                flag = 1;
            
            if(FLAG == 2 && flag == 1 )
                return 0;
        }
        
        if(flag && FLAG)
            return 0;
        if(FLAG && word[0] >= 'a' && word[0] <= 'z')
            return 0;
        return 1;
    }
};
