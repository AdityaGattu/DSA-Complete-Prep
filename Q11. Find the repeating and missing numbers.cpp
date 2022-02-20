https://www.interviewbit.com/problems/repeat-and-missing-number-array/

Sol1 : Using simple Maths:

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

Same in case of both solns
TC: O(N);
SC : O(1);     

 
Sol2 : Diving into 2 sets: 

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    
    vector<int>ans;
    int S=0;

    for(int i=1;i<=A.size();i++){
        S ^= i^A[i-1];       //s =X^Y   X-missing_no minus Y-repeated_no
    }

    //find the right most max bit
    int max_bit_no = S & ~(S-1);  //max_bit_no nothing but set_bit_no;

    int x=0;
    int y=0;

    for(int i=0;i<A.size();i++){
        if(A[i]&max_bit_no){
            x^=A[i];
        }
        else{
            y^=A[i];
        }
        if((i+1)&max_bit_no){
            x^=i+1;
        }
        else{
            y^=i+1;
        }
    } 

    int x_cnt=0;
    for(int i=0;i<A.size();i++){
        if(x==A[i])
        {
            x_cnt++;
        }
    }
    int missing_no;
    int repeated_no;

    if(x_cnt==0){
        missing_no=x;
        repeated_no=y;
    }
    else{
        missing_no=y;
        repeated_no=x;
    }


    ans.push_back(repeated_no);
    ans.push_back(missing_no);
    
    return ans;
}

Same in case of both solns
TC: O(5N);
SC : O(1);    

