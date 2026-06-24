class Solution {
public:
    bool isPalindrome(string s) {
        string updated = "";
        for(char ch : s){
            if(isalnum(ch)){
                updated += ch;
            }
        }
        
        transform(updated.begin(), updated.end(), updated.begin(), [](unsigned char c){
            return tolower(c);
        });
        int n = updated.length();

        int left = 0;
        int right = n-1;

        while(left < right){
            if(updated[left] == updated[right]){
                left++;
                right--;
            } else{
                return false;
            }
        }

        return true;
    }
};
