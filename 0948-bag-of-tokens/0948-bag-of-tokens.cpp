class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int pwr) {
        sort(tokens.begin(), tokens.end());
        int n = tokens.size();
        int score = 0;
        int m_score = 0;
        int l= 0;
        int r = n - 1;
        
        while (l <= r) {
            if (pwr >= tokens[l]) {
                pwr -= tokens[l];
                score += 1;
                l += 1;
                m_score = max(m_score, score);
            } 
            
            else if (score > 0) {
                pwr += tokens[r];
                score -= 1;
                r -= 1;
            } 
            
            else 
                break;
    
        }
        return m_score;
    }
};