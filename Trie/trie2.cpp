class Solution {
public:
    bool cheker(int a, int b) {
        return __builtin_popcount(a) == __builtin_popcount(b);
    }

    bool canSortArray(std::vector<int>& arr) {
        vector<int> v(arr);
        sort(arr.begin(), arr.end());
        if (v == arr)
            return true;

        for (int i = 0; i < arr.size() - 1; i++) {
            for (int j = 0; j < arr.size() - 1 - i; j++) {
                if ((arr[j] < arr[j + 1]) && cheker(arr[j], arr[j + 1])) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
        if(arr==v)
                return true;
        else
            return false;
    }
}; 


2