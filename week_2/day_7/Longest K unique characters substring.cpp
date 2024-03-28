//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        unordered_map<char,int> freq;
        int i = 0, j = 0, n = s.size() , maxLen = 0;
        
        while(j < n) {
            freq[s[j]]++;
            while(freq.size() > k) {
                freq[s[i]]--;
                if(freq[s[i]] == 0) {
                    freq.erase(s[i]);
                }
                i++;
            }
            maxLen = max(maxLen, j-i+1);
            j++;
        }
        if(freq.size() < k) {
            return -1;
        }
        return maxLen;
    
    }
};