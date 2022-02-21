https://leetcode.com/problems/powx-n/

Day3: 
Q14. Implement Pow(x,n) | X raised to the power N.cpp

class Solution {
public:
    double myPow(double x, int n) {

        //example of binary exponentiation....
        
        double ans = 1.0;
        long long power = n;
        
        if(power<0){power*=-1;}
        
        while(power>0){
            if(power%2==0){
                x=(x*x);                  // reduce problem stmt like 2^10 = 4^5
                power=power/2;
            }
            else{
                ans*=x;                    // update result ans = 4 and then find 4^4 nxt                                                   //  iterartion and so on...
                power-=1;
            }
        }
        
        if(n<0){ ans = double(1.0)/double(ans);}
        
        return ans;
        
        
        
        //TC :  O(logn)
        //SC :  O(1)
    }
};
