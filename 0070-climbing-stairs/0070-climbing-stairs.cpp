class Solution {
public:
    int climbStairs(int n) {
        if( n < 0) return 0;
        int d[n + 1]; fill_n(d,n+1,1);
        cout<<d[0]<<endl;
        for(int i = 2; i <= n; i++){
            d[i] = d[i-1] + d[i-2];
        }

        return d[n];
    }
};