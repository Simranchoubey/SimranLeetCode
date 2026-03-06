class Solution {
public:
    bool checkOnesSegment(string s) {
        bool flag = false;

        for(char ch:s){
            if(!flag){
                if(ch == '0')
                    flag = true;
            }
            else{
                if(ch == '1')
                    return 0;
            }
        }

        return 1;
    }
};