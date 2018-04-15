
int n, dollar, pwr, hk, hk_1;
int main() {
    sfi1(n);
    while(n--){
        sfi1(hk);
        pwr += hk_1 - hk;
        hk_1 = hk;
        if(pwr < 0){
            dollar += pwr*-1;
            pwr = 0;
        }
    }
    pf("%d", dollar);
    return 0;
}


