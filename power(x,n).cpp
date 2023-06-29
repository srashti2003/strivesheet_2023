class Solution {
public:
    double myPow(double x, int n) {
        double res;
        long long N = n;
        if(N<0) N = -1*N;
        if(N==0){
            return 1;
        }
        while(N>0){
            if(N%2==0){
                x=x*x;
                N=N/2;
            }
            else{
                res = res*x;
                N--;
            }
        }
        if(n<0){
            res = double(1)/double(res);
        }
        return res;

        //~~~~~~Using pow() function~~~~~~~~
        // if(n==0){
        //     return 1;
        // }
        // if(n<0){
        //     long long nn = n;
        //     if(nn<0){
        //         nn = -1*nn;
        //         return double(double(1)/double(pow(x,nn)));
        //     }
        // }
        // return double(pow(x,n));
    }
};
