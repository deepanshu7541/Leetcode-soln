




//                    <<<<<<<<<<---------  ATTEMPTED (73/73 TC PASSED) ----------->>>>>>>>>>>>

class Solution {
public:
    void single(int num, vector<char> & arr){ //This will push num(100) in char array by converting in char
        if(num<=0){
            return ;
        }
        if(num>0 && num<10){
            char c = num+48;
            arr.push_back(c);
            return;
        }
        int n = num%10;
        single(num/10, arr);
        arr.push_back(n+48);
        return;
    }

    int compress(vector<char>& chars) {
        if(chars.size()==1){
            return 1;
        }
        vector<char> arr;
        int count=0;
        char p = chars[0];
        // arr.push_back(p);
        for(int i=0; i<chars.size(); i++){
            if(chars[i] == p){
                count++;
            }
            else{
                arr.push_back(p);
                char c = count+48;
                if(count>9){
                    // int y=count%10;
                    // int z=count/10;
                    // arr.push_back(z+48);
                    // arr.push_back(y+48);
                    single(count, arr);

                }
                else if(count!=1){
                    arr.push_back(c);
                }
                count=1;
                p=chars[i];
            }
        }
        arr.push_back(p);
        char c = count+48;
        if(count>9){
            // int y=count%10;
            // int z=count/10;
            // arr.push_back(z+48);
            // arr.push_back(y+48);
            single(count, arr);
        }
        else if(count!=1){
            arr.push_back(c);
        }
        count=1;
        p=chars[chars.size()-1];
        chars.clear();
        for(int i=0; i<arr.size(); i++){
            chars.push_back(arr[i]);
        }
        return chars.size();
    }
};