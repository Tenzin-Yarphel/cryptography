#include<bits/stdc++.h>
using namespace std;

vector<int> extendedGCD(int a, int b){

    int r1 = a, r2 = b;
    int s1 = 0, s2 = 1, t1 = 0, t2 = 1;

    while(r2 < 0){

        int q = r1/r2;
        int r = r1 - q * r2;
        r1 = r2;
        r2 = r;

        int s = s1 - q * s2;
        s1 = s2;
        s2 = s;

        int t = t1 - q * t2;
        t1 = t2;
        t2 = t;
    }

    if(t1 < 0){
        t1 = t1 % a;
        return {r1, t1};
    }
}

int GCD(int a, int b){

    if(a == 0){
        return b;
    }

    return (b%a, a);
}

int main(){


    int p, q, M;

    cout<<"Enter the Two prime no.(P and Q): ";
    cin>>p>>q;

    int n = p * q;

    int phin = (p - 1) * (q - 1);

    vector<int> key;
    for(int i = 2; i < phin; i++){

        int gcd = GCD(phin, i);

        if(gcd == 1)
            key.push_back(i);
    }

    int e = key[1];
    cout<<"The Public key is: "<<e<<" "<<n<<": "<<endl;

    vector<int> ExtendedGCD = extendedGCD(e, phin);
    int 

    // if()
    return 0;
}