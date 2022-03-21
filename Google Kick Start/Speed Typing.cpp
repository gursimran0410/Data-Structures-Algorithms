#include <iostream>
using namespace std;

void checkSubSequence(string I, string P){
    int N = I.length(), M = P.length(), ptrI = 0, ptrP = 0;
    while(ptrI < N && ptrP < M){
        if(I[ptrI] == P[ptrP]) ptrI++, ptrP++;
        else ptrP++;
    }
    if(ptrI == N) cout << M-N << endl;
    else cout << "IMPOSSIBLE" << endl;
}
    
int main(){
    int testCases = 0;
    cin >> testCases;
    for(int i=0; i<testCases; i++){
        string I, P;
        cin >> I >> P;
        cout << "CASE #" << i+1 << ": ";
        checkSubSequence(I, P);
    }
    return 0;
}
