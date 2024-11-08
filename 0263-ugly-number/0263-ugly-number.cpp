class Solution {
public:
    bool isUgly(int n) {
        while(1){
            cout<<n<<endl;
            while(n%2==0 && n!=0) n=n/2;
            cout<<n<<endl;
            while(n%3==0 && n!=0) n=n/3;
            while(n%5==0 && n!=0) n=n/5;
            break;
        }
        cout<<n;
        return  n==1;
    }
};