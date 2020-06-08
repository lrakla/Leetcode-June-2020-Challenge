class Solution {
public:
    bool isPowerOfTwo(long long int n) {
        if (n%2 != 0 & n!=1) return false;
        while(true){
        if(n==1)  return true;
        
        if(n%2 !=0 || n<1) return false;
        n = n/2;
        }  
    }
};