class Solution {
public:
    bool isSubsequence(string s, string t) {
     int m = s.length();
     int n = t.length();
     int i = 0 ;
     for(int j=0; i<m && j<n;j++)
         if(s[i]==t[j])
             i++;
     return (m==i)?true:false;
    }
};