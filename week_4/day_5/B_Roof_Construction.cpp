


#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 
        int k = 0;
        while ((1 << k) < n) { 
            k++;
        }
        k--; 
        
        
        for (int i = (1 << k) - 1; i >= 0; --i) {
            cout << i << " ";
        }
        
        for (int i = (1 << k); i < n; i++) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}



