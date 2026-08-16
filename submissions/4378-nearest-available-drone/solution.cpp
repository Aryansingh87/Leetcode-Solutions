class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
         int best_index = -1;
        int min_dist = INT_MAX;
        
        for (int i = 0; i < drones.size(); ++i) {
            int x = drones[i][0];
            int y = drones[i][1];
            int range = drones[i][2];
            
            int dist = abs(x - target[0]) + std::abs(y - target[1]);
            
            if (dist <= range) {
                if (dist < min_dist) {
                    min_dist = dist;
                    best_index = i;
                }
            }
        }
        
        return best_index;
    }
};
