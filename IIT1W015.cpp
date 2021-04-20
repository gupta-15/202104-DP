#include <iostream>
using namespace std;

#define MAXN 100000


int main()
{
    int T;
    cin >> T;
    
    while(T--){
        int n;
        cin >> n;
        
        long int answer = 0, count = 0;
        int arr[n];
        long int ans[n];
        // Let ans[i] denote the number of non-decreasing arrays
        // in the arr[0...i].

        for(int i=0; i<n; i++){
            cin >> arr[i];
            ans[i] = 1;
            // Initializing ans[i] to 1
            // since the subarray with the singleton element ans[i] is non-decreasing
            // so ans[i] is at least 1 always.
        }

        for(int i=1; i<n; i++){
          // Determine the correct value of ans[i] here.
          // HINT: Use ans[i-1] and a check based on how ans[i] compares with ans[i-1]
        }
        
        // Calcuate the final answer as the sum of all numbers
        // in the ans array.
      
        for(int i=0; i<n; i++){
        // Add the computation of 'answer' here. 
        }
      
      
        cout << answer << endl;
    }
    return 0;
}

