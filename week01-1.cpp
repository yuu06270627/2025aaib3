//Leetcode 28. �ǲ߭p�e
class Solution {
public:
    int strStr(string haystack, string needle) {
        //�n�ΰj�� ��Ҧ��i�઺��m ����L�@��
        //ex.sadbutsad �����L �n��sad
        //i:0 sad ��haystack�ūe��n�Ӧr��
        //    sad
        //i:1 sad
        //     abd
        //i:2   sad...
        //      dbu
        int H = haystack.length(),N = needle.length();
        for(int i=0;i<=H-N; i++){ //i�չL�Ҧ���m
            if(haystack.substr(i,N)==needle) return i;

        }
        return -1;//�S����쵪�� �n�^��-1��ܥ���
    }

};
