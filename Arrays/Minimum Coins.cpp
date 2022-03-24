int minimumCoins(int arr, int v, int n){
  vector<int> res;
  for(int i=n-1; i>=0; i--){
    while(v >= arr[i]){
      v -= arr[i];
      res.push_back(arr[i]);
    }
  }
  return res.size();
}
