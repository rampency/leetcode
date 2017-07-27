class Solution {
public:
    int reverse(int x) {
        bool negative;
        int digit,reverse;
            if(x > 0){
                negative = false;
            }else{
                negative = true;
                x = abs(x);
            }
        
         while(x > 0){
         digit = x%10; 
         reverse = reverse*10 + digit;
         x = x/10;
         }
        
        if(negative){
            reverse *= -1;
        }
        return reverse;
  }
        
};