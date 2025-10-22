class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for (string op : operations) {
            if (op[0] == 'C') {
                a.pop_back();
            } else if (op[0] == 'D') {
                a.push_back(a.back() * 2);
            } else if (op[0] == '+') {
                int temp = a.back();
                a.pop_back();
                int temp2 = a.back();
                a.push_back(temp);
                a.push_back(temp + temp2);
            } else {
                a.push_back(stoi(op));
            }
        }

        int ans = 0;
        for (int now : a) {
            ans += now;
        }

        return ans;
    }
};
