vector <pair<int,int> > primefactor;  //it will store prime factors and their count
                                      //primefactors can be generated using fast_factorization and other known algo
void setDivisors(int n, int i) {      // default value of n and i are 1 and 0
    int j, x, k;
    for (j = i; j<primefactor.size(); j++) 
    {   x = primefactor[j].first * n;
        for (k = 0; k<primefactor[j].second; k++) 
        {   divisors.push_back(x);
            setDivisors(x, j + 1);
            x *= primefactor[j].first;
        }
    }
}
