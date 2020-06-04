class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int flag = 0; //n is odd
        if(n%2==0)
            flag = 1; //n is even
        for(int i=0,j=n-1;i<n && j >=0;i++,j--){
            int a = s[i];
            int b = s[j];
            s[i] = b;
            s[j] = a;
            if(flag==1 && ((j-i)==1)){
                break;
            }
            if(flag == 0 && i==j){
                break;
            }
        }
        return;
    }
};