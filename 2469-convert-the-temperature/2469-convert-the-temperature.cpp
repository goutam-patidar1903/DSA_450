class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> temp;
        double k,f;
        k=celsius+273.15;
        f=(celsius*9/5)+32;
        temp.push_back(k);
        temp.push_back(f);
        return temp;
        }
};