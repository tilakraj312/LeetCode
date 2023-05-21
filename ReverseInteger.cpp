class Solution {
public:
    int reverse(int x) {
        int a =0;
        while(x !=0){
            int p =x%10;
            x /= 10;
            a =a*10+p;
        }
     return a;
    }
};