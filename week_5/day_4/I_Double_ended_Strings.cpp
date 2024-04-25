// #include <bits/stdc++.h>
// using namespace std;
// int ok(string a, string b)
// {
//     int dp[a.size() + 1][b.size() + 1];
//     int res = 0;
//     for (int i = 0; i <= a.size(); i++)
//     {
//         /* code */
//         for (int j = 0; j <= b.size(); j++)
//         {
//             /* code */
//             if (i == 0 or j == 0)
//             {
//                 dp[i][j] = 0;
//             }
//             else
//             {

//                 if (a[i - 1] == b[j - 1])
//                 {
//                     dp[i][j] = 1 + dp[i - 1][j - 1];
//                 }
//                 else
//                 {
//                     dp[i][j];
//                 }
//             }
//             res=max(res,dp[i][j]);
//         }
//     }
// }
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         /* code */
//         string x,y;
//         cin>>x>>y;
//         int ans=ok(x,y);
//         cout<<x.size()+y.size()-(2*ans)<<endl;
//     }
    
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;




int kona(string s, string t){
    int dp[s.size()+1][t.size()+1]; 

    int res = 0; 

    for(int i=0; i<=s.size(); i++){
        for(int j=0; j<=t.size(); j++){
            if(i==0 || j == 0){
                dp[i][j] = 0;
            }
            else{
                if(s[i-1] == t[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1]; 
                }
                else{
                    dp[i][j] = 0; 
                }
            }
            res = max(res, dp[i][j]);
        }
    }

    return res; 
}


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    

    int t; cin>>t; 

    while(t--){
        string a, b; 
        cin>>a>>b; 

        int ans = kona(a, b); 

        cout<<a.size() + b.size() - (2*ans)<<endl;
    }

    return 0; 
}