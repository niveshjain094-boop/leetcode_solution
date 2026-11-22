class Solution {
public:
    int minRange(int a, int b, int c) {
        int arr[] = {a,b,c};
       sort(arr,arr+3);
       if(arr[0]+arr[1] < arr[2]){
            arr[2] = arr[0]+arr[1];
        }
        return arr[2] - arr[0];

    }
};