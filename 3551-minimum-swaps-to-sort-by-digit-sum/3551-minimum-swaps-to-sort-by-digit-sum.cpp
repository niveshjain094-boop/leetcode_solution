
class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<tuple<int, int, int>> arr;

        for (int i = 0; i < n; i++) {
            int x = nums[i];
            int sum = 0;

            while (x > 0) {
                sum += x % 10;
                x /= 10;
            }

            arr.push_back({sum, nums[i], i});
        }

        sort(arr.begin(), arr.end());

        vector<int> pos(n);

        for (int i = 0; i < n; i++) {
            pos[get<2>(arr[i])] = i;
        }

        vector<bool> visited(n, false);
        int swaps = 0;

        for (int i = 0; i < n; i++) {
            if (visited[i] || pos[i] == i)
                continue;

            int cycle = 0;
            int j = i;

            while (!visited[j]) {
                visited[j] = true;
                j = pos[j];
                cycle++;
            }

            swaps += cycle - 1;
        }

        return swaps;
    }
};
