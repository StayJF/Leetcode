class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0, i=s.size()-1;
        while(i>=0 && s[i]==' ') i--;
        for( ; i>=0; i--){
            if(s[i]==' ') break;
            ans++;
        }
        return ans;
    }
};