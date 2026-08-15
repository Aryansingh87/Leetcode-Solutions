class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int time = 0;
        int currfloor=0;
        for(int floor : requests){
        time += abs(floor - currfloor);
            currfloor = floor;
            }
        return time;
        
            
            
        
    }
};
