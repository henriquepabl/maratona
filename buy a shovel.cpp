#include <iostream>
using namespace std;

int main(){
    int vshovel,r;
    int aux = 1;
    int n = 0;
    cin >> vshovel >> r;
    int flag = vshovel;
    while(aux){
        if((vshovel%10) == 0){
            n++;
            break;
        }
        else if((vshovel-r)%10 == 0){
            n++;
            break;
        }
        else{
            vshovel += flag;
            n++;
        } 
    }
    cout << n << endl;

    return(0);
}