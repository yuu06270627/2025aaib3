class Solution {
public:
    bool isRobotBounded(string instructions) {
        int d=0;
        int x=0,y=0;
        instructions=instructions+instructions+instructions+instructions;
        for(char c:instructions){
            if(c=='G'){
                if(d==0)y++;
                if(d==1)x++;
                if(d==2)y--;
                if(d==3)x--;
            }else if(c=='R'){
                d=(d+1)%4;
            }else if(c=='L'){
                d=(d+3)%4;
            }
        }
        return x==0 && y==0;
    }
};
