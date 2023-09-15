class Solution {
public:
// tc is O(logn) as this is binary search, sc is constant
    int mySqrt(int x) {
        if(x == 0) return 0;
        int l = 1;
        int r = x;
        int mid;
        while(l <= r){
            mid = l + (r - l) / 2;
            if(mid == x / mid) return mid;
            else if(mid > x / mid) r = mid - 1;
            else l = mid + 1;
        }
        return r;
    }
};
