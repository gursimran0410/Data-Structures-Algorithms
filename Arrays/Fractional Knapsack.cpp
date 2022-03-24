class Solution{
  public:
    static bool comparator(Item a, Item b){
      double r1 = (double)a.value/a.weight;
      double r2 = (double)b.value/b.weight;
      return r1 > r2;
    }
  
    double fractionalKnapsack(int n, Item arr[], int W){
      sort(arr, arr+n, comparator);
      
      int currWeight = 0;
      double maxValue = 0.0;
      
      for(int i=0; i<n; i++){
        if(arr[i].weight + currWeight <= W){
          currWeight += arr[i].weight;
          maxValue += arr[i].value;
        }
        else{
          int remain = W - currWeight;
          maxValue += (arr[i].value/(double)arr[i].weight)*{double)remain;
          break;
        }
      }
      return maxValue;
    }
}
