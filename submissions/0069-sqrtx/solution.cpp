class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x==1)
           return x;
       

       int st=1 , end=x , mid=-1;
       while(st<=end){
        mid = st + (end-st)/2;
        long long square = static_cast<long long>(mid) * mid;
        if(square > x)
        end=mid-1;
        else if(square==x){
            return mid;
        }
        else{
            st=mid+1;
        }
       }
        return static_cast<int>(std::round(end));
       
    }
};
