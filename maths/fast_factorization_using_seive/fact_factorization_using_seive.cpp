
#define num 1000000         //depends on array limit
int minPrime[num + 1];      //global
void seive(){
    for (int i = 2; i * i <= num; ++i) {
        if (minPrime[i] == 0) { //if i is prime
            for (int j = i * i; j <= num; j += i) {
                if (minPrime[j] == 0) {
                    minPrime[j] = i;
                }
            }
        }
    }
    for (int i = 2; i <= num; ++i) {
        if (minPrime[i] == 0) {
            minPrime[i] = i;
        }
    }
}
void primefactor(int n) {
    while (n != 1) {
        //res.push_back(minPrime[n]);       //can store the result or print it
        cout<<minPrime[n]<<endl;
        n /= minPrime[n];
    }
}
