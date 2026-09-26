class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
       if (source.size() != target.size()) return false;
        long long sumsource = 0;
        long long sumtarget = 0;
        for(int x : source) sumsource += x;
        for(int x : target) sumtarget += x;
        sort(source.begin(), source.end());
        sort(target.begin(), target.end());
        
        return sumsource == sumtarget;
    }
};
