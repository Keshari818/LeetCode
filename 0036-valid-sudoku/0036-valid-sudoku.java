 
 
class Solution {
 
    public boolean isValidSudoku(char[][] board) {
        HashSet<Character> hs = new HashSet<>(); 
        for(int i = 0 ;i < 9 ; i++){
            for(int j = 0 ; j < 9 ; j++){
                    if(board[i][j] == '.')
                    continue;
                    if(hs.contains(board[i][j]))
                    return false;
                    hs.add(board[i][j]); 
            }
             
            
            hs.clear(); 
            
        }
         for(int i = 0 ;i < 9 ; i++){
            for(int j = 0 ; j < 9 ; j++){
                  if(board[j][i] == '.')
                    continue;
                    if(hs.contains(board[j][i]))
                    return false;
                    hs.add(board[j][i]); 
            }
            
            hs.clear(); 
        }
        

            for(int i = 0 ;i < 9 ; i++){
            for(int j = 0 ; j < 9 ; j++){
            for(int k = 0 ; k < 9 ; k++){
                char c = board[3*(i/3) + k/3] [3*(j/3) + k%3] ;
                if(board[3*(i/3) + k/3] [3*(j/3) + k%3]  == '.')
                continue;

                if(hs.contains(c))
                return false;

                hs.add(c);
                    }
                     hs.clear(); 
                 }  
                
                  
        }
         
            return true;
    }
}