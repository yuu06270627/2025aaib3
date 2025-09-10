//Leetcode 28. 學習計畫
class Solution {
public:
    int strStr(string haystack, string needle) {
        //要用迴圈 把所有可能的位置 都找過一次
        //ex.sadbutsad 很難過 要找sad
        //i:0 sad 把haystack剪前面n個字母
        //    sad
        //i:1 sad
        //     abd
        //i:2   sad...
        //      dbu
        int H = haystack.length(),N = needle.length();
        for(int i=0;i<=H-N; i++){ //i試過所有位置
            if(haystack.substr(i,N)==needle) return i;

        }
        return -1;//沒有找到答案 要回傳-1表示失敗
    }

};
