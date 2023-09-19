class Solution {
public:
// tc is O(logn) where n in the number. the sc is also O(logn) for the hash set
    int sos(int n){
        int sum = 0;
        int temp;
        while(n != 0){
            temp = n % 10;
            sum += temp * temp;
            n = n / 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        unordered_set<int> ns;
        while(!ns.count(n)){
            ns.insert(n);
            n = sos(n);
            if(n == 1) return true;
        }
        return false;
    }
};
