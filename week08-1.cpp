class Solution {
public:
    int smallestNumber(int n) {
        int N=0;
        while (n>0){
            n=n/2;
            N++;
        }
        cout <<"�{�b�o�{N�O(_�i�쪺)�X��ƩO?"<<N<<"���\n";
        int ans=0;
        for(int i=0;i<N;i++){
            ans=ans*2+1;
        }
        return ans;
    }
};
