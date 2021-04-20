#include <iostream>
using namespace std;

const int MAX = 5000;


int main() {
	int T;
	cin >> T;

	while (T--) {
        char a[MAX + 1], b[MAX + 1];
        
		int n, m;
		cin >> n >> m >> a >> b;

        int TA[MAX + 1][MAX + 1], TB[MAX + 1][MAX + 1];

        // TA[i][j] : answer for merging the i-length prefix of A and j-length prefix of B with the last character coming from A
        // TB[i][j] : answer for merging the i-length prefix of A and j-length prefix of B with the last character coming from B

        // Initialize:

		for (int i = 0; i <= n; i++) {
			fill(TA[i], TA[i] + m + 1, 3 * MAX);
			fill(TB[i], TB[i] + m + 1, 3 * MAX);
		}
		
		TB[0][1] = TA[1][0] = 1;

		for (int i = 0; i <= n; i++)
			for (int j = 0; j <= m; j++) {
		
        		if (i < n) {
					if (i > 0) //  did the second-last character come from A? 
                        TA[i + 1][j] = min(TA[i + 1][j], ***);
					if (j > 0) //  did the second-last character come from B? 
                        TA[i + 1][j] = min(TA[i + 1][j], ***);
				}
				
				if (j < m) {
					if (i > 0)  //  did the second-last character come from A? 
                        TB[i][j + 1] = min(TB[i][j + 1], ***);
					if (j > 0)  //  did the second-last character come from B? 
                        TB[i][j + 1] = min(TB[i][j + 1], ***);
				}
			}

            // watch out for indices while filling out the above.
            // a[i] is the last character of the i+1 length-prefix of a
            // b[i] is the last character of the i+1 length-prefix of b
		
		printf("%d\n", min(TA[n][m], TB[n][m]));
	}
	
	return 0;
}
