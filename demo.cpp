//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int count = 0; // Declare count inside the function to avoid global scope issues
    int evenlyDivides(int n) {
    while (n != 0) {
        count++;
        n /= 10;
    }
    cout << count << endl; // Using C++'s cout instead of printf
    // while(s!=0){
    //     count++;
    //     s/=10;
    // }
    // printf("%d",count);
    }
};


//{ Driver Code Starts.
int main() {
    cout<<"C++";
    int t;
    cin >> t;
    
    cout<<t;
    // while (t--) {
    //     int N;
    //     cin >> N;
    //     Solution ob;
    //     cout << ob.evenlyDivides(N) << endl;

    //     cout << "~"
    //          << "\n";
    // }
    return 0;
}
// } Driver Code Ends