class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string newS = s;
        int aux = 0;
        for(int i: indices){
            newS[i] = s[aux];
            aux++;
        }
        return newS;
    }
};
