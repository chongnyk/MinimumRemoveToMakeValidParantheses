class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int ctr = 0, i = 0;
        while(i < s.size()){
            //cout << s << ' ' << i << '\n';
            if(s[i] == '('){
                ctr++;
                i++;
            }
            else if(s[i] == ')' && ctr == 0){
                s.erase(i, 1);
            }
            else if(s[i] == ')'){
                ctr--;
                i++;
            }
            else {
                i++;
            }
        }

        ctr = 0;
        while(i >= 0){
            //cout << s << ' ' << i << ' ' << s.size() << '\n';
            if(s[i] == ')'){
                ctr++;
            }
            else if(s[i] == '(' && ctr == 0){
                s.erase(i, 1);
            }
            else if(s[i] == '('){
                ctr--;
            }
            i--;
        }
        return s;
    }
};
