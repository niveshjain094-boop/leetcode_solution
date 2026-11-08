class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int bitA = (i >= 0) ? a[i--] - '0' : 0;
            int bitB = (j >= 0) ? b[j--] - '0' : 0;

            int sumBit = bitA ^ bitB ^ carry;
            ans.push_back(sumBit + '0');

            carry = (bitA & bitB) | (carry & (bitA ^ bitB));
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
