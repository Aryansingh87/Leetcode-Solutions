class Solution {
public:
    int countRotations(string s, int k) {
         
        int n = s.length();
        if (n <= 1) {
            return (k == 0) ? 1 : 0; 
        }

        // Duplicate the string to handle cyclic rotations easily
        string doubled = s + s;
        
        // Calculate the score of the initial rotation (shift = 0)
        int current_score = 0;
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == s[i + 1]) {
                current_score++;
            }
        }

        int valid_rotations_count = 0;
        if (current_score == k) {
            valid_rotations_count++;
        }

     
        for (int i = 1; i < n; ++i) {
           
            if (doubled[i - 1] == doubled[i]) {
                current_score--;
            }
       
            if (doubled[i + n - 2] == doubled[i + n - 1]) {
                current_score++;
            }

            if (current_score == k) {
                valid_rotations_count++;
            }
        }

        return valid_rotations_count;
        
    }
};
