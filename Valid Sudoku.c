bool isValidSudoku(char** board, int boardSize, int* boardColSize){
    
    for(int i = 0;i<9;i++)
    {
        bool rows[10] = {false};
        bool cols[10] = {false};
        bool blocks[10] = {false};
        for(int j = 0;j<9;j++)
        {
            if(board[i][j]!='.')  
            {
                if(rows[board[i][j]-'0']==true) 
                {
                    return false;   
                }
                else
                {
                    rows[board[i][j]-'0'] = true; 
                }                
            }
            
            if(board[j][i]!='.')  
            {
                if(cols[board[j][i]-'0'] == true) 
                {
                    return false;   
                }
                else
                {
                   cols[board[j][i]-'0'] = true; 
                }                
            }
            
            int blockcol = (i/3)*3+j/3;
            int blockrow = (i%3)*3+j%3;
            if(board[blockcol][blockrow]!='.')
            {
                if(blocks[board[blockcol][blockrow]-'0'] == true) return false;
                blocks[board[blockcol][blockrow]-'0'] = true;     
            }
        }     
        
    }
    return true;
}