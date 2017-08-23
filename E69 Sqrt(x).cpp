class Solution {
public:
    int mySqrt(int x) {
        double begin = 0;
        double end = x;
        double result = 1;
        double mid = 1;
        while(abs(result-x) > 0.000001){
            mid = (begin+end)/2;
            result = mid*mid;
            if(result > x)
                end = mid;
            else begin = mid;
        }
        return (int)mid;
    }
};
