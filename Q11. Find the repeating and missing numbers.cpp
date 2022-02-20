

vector<int> Solution::repeatedNumber(const vector<int> &A) {
   vector<int>ans;
    long n=A.size();

    long long sum=(n*(n+1))/2;
    long long sum_sq=(n*(n+1)*((2*n)+1))/6;
    long long S=0;
    long long P=0;

    for(int i=0;i<A.size();i++){
        S+=(long long int)A[i];
        P+=((long long int)A[i]*(long long int)A[i]);
    }

    S = sum-S;      // X - Y   X-missing_no minus Y-repeated_no
    P = sum_sq-P;   // X^2-Y^2
     
    long long missing_no = (S+(P/S))/2;
    long long repeated_no = missing_no-S;

    ans.push_back(repeated_no);
    ans.push_back(missing_no);
    
    return ans;
}
