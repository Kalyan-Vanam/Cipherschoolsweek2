#include<bits/stdc++.h>
using namespace std;
int main(){  
    vector<string> solar_sys = {"mer","venus","earth","mars","jupitor","satrun","uranus","naptune"};
    vector<string>::iterator shivam = solar_sys.begin();
    vector<string>::iterator champa = solar_sys.begin();
    advance(shivam,3);
    cout<<"Distance from shivam "<<distance(champa,shivam)<<endl;
    return 0;
}