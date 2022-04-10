class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int>result;
        int sum = 0;
        for(auto it: ops){
            if(it == "C"){
                sum -= result.back();
                result.pop_back();
            }
            
            else if(it == "D"){
                sum += result.back()*2;
                result.push_back(result.back()*2);
            }
            
            else if(it == "+"){
                sum = sum + result[result.size()-1] + result[result.size()-2];
                result.push_back(result[result.size()-1] + result[result.size()-2]);
            }
            
            else{
                sum += stoi(it);
                result.push_back(stoi(it));
            }
        }
        
        return sum;
    }
};
