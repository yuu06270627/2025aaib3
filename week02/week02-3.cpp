//week02-3.cpp
//LeetCode 1768
class Solution {
public:
    string mergeAlternately(string word1, string
word2) {
        int N1 = word1.length();//�r�����
        int N2 = word2.length();
        string ans;//���ת��r�� �@�}�l�S���F��
        for(int i=0; i<max(N1,N2); i++){
            if(i<N1) ans += word1[i];//��r����J����
            if(i<N2) ans += word2[i];
        }
        return ans;//���׶ǥX�h
    }
};
