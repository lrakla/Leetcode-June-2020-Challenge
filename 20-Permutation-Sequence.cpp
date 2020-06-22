class Solution {
public:
   string getPermutation(int n, int k) {
       string s(n,'0');
       int j, f=1;
        for(int i =1;i<=n;i++){
            f*=i; //f is n!
            s[i-1]+=i;
        }
       for(int i=0,k--;i<n;i++){
           f/=(n-i); //f is(n-1)!
           j = i + k/f;
           char c = s[j];
            for(;j>i;j--)
                s[j]=s[j-1];
           k%=f;
           s[i] = c;
       }
       return s;
    }
};