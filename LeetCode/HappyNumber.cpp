#include<bits/stdc++.h>
#include <string>
#include <map>

using namespace std;

int calString(int n){
    int aux = 0;
    string newNumber = to_string(n);

    for(int i=0; i < newNumber.size(); i++){
        int sum = (int)newNumber[i]-48;
        aux = (sum * sum) + aux;
    }
    return aux;
}

int main ()
{
    map<int, bool> loop;

    int n;cin >> n;
    while(true){
        int newN = 0;
        newN = calString(n);
        if(newN == 1){
            return true;
        }else{
            if(loop[newN] == 0){
                loop[newN] = true;
            }else{
                return false;
            }
        }
        n = newN;
    }
	return 0;
}
