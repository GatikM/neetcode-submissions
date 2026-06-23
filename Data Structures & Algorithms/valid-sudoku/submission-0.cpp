class Solution {
public:
    bool checkDuplicate(vector<char> &arr){
        map<char, int> mp;
        for(char ch : arr){
            if(ch == '.') continue;
            mp[ch]++;

            if(mp[ch] > 1) return false;
        }

        return true;
    }
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row = board.size();
        int col = board[0].size();

        // check columns
        for(int i=0; i<col; i++){
            vector<char> col_arr;
            for(int j=0; j<row; j++){
                col_arr.push_back(board[j][i]);
            }
            if(!checkDuplicate(col_arr)){
                return false;
            }
        }

        // check rows
        for(int i=0; i<row; i++){
            vector<char> row_arr;
            for(int j=0; j<col; j++){
                row_arr.push_back(board[i][j]);
            }
            if(!checkDuplicate(row_arr)){
                return false;
            }
        }

        // check 3x3
        for(int row = 0; row < 9; row += 3) {
            for(int col = 0; col < 9; col += 3) {
                vector<char> box;

                for(int i = row; i < row + 3; i++) {
                    for(int j = col; j < col + 3; j++) {
                        box.push_back(board[i][j]);
                    }
                }

                if(!checkDuplicate(box))
                    return false;
            }
        }

        return true;
    }
};
