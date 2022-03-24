class SubsetSum{
  public:
    void func(int ind, int sum, vector<int> &arr, int n, vector<int> &result){
      if(ind == n){
        result.push_back(sum);
        return;
      }
      func(ind+1, sum+arr[ind], arr, n, result);
      func(ind+1, sum, arr, n, result);
    }
    
    vector<int> subsetSums(vector<int> arr, int N){
      vector<int> result;
      func(0, 0, arr, n, result);
      sort(result.begin(), result.end());
      return result;
    }
}
