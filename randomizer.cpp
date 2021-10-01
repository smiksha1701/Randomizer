#include  <iostream>
#include  <math.h>
#include "PRNG.cpp"
#include <algorithm>
using namespace std;
int main()
{
    double *pointer;
    double data[100];
    int Method = 0;
    double *exparrpntr = ExpDist();
    cout<<"CHOOSE YOUR FIGHTER!!!"<<endl<<"ENTER YOUR METHOD (1..10)"<<endl;
    cin>>Method;
    double n = 0;
    long long constanta;
    cout<<"Choose constanta:"<<endl;
    cin>>constanta;
    switch (Method){
        case 1:{
            cout<<"1. Liniar congruential method"<<endl;
            pointer = RANDGEN1(constanta, data);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"1. Liniar congruential method (sorted)"<<endl;
            sort(pointer, pointer+100);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"Rectangular distribution"<<endl;
            pointer = RectDist(pointer);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"Expected distribution"<<endl;
            for(int i = 1; i < 101; i++){
                cout<< exparrpntr[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            pointer = AbsDistDiff(pointer, exparrpntr);
            cout<<"Absolute difference "<<endl;
            for(int i = 1; i < 101; i++){
                cout<<pointer[i-1]<<" ";
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            double maxdiff=FindMax(pointer);
            cout<<"Max absolute difference is "<<maxdiff<<endl;
            if(maxdiff < 0.136){
                cout<<"Null hypothesis is not rejected";
            }
            else{
                cout<<"Null hypothesis is rejected";
            }
            break;

        }
        case 2:{
            cout<<"2. Quadratic congruential method"<<endl;
            pointer = RANDGEN2(constanta, data);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"3. Fibonacci sequence (sorted)"<<endl;
            sort(pointer, pointer+100);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"Rectangular distribution"<<endl;
            pointer = RectDist(pointer);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"Expected distribution"<<endl;
            for(int i = 1; i < 101; i++){
                cout<< exparrpntr[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            pointer = AbsDistDiff(pointer, exparrpntr);
            cout<<"Absolute difference "<<endl;
            for(int i = 1; i < 101; i++){
                cout<<pointer[i-1]<<" ";
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            double maxdiff=FindMax(pointer);
            cout<<"Max absolute difference is "<<maxdiff<<endl;
            if(maxdiff < 0.136){
                cout<<"Null hypothesis is not rejected";
            }
            else{
                cout<<"Null hypothesis is rejected";
            }
            break;

        }
        case 3:
        {
            cout<<"3. Fibonacci sequence"<<endl;
            pointer = RANDGEN3(constanta, data);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"3. Fibonacci sequence (sorted)"<<endl;
            sort(pointer, pointer+100);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"Rectangular distribution"<<endl;
            pointer = RectDist(pointer);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"Expected distribution"<<endl;
            for(int i = 1; i < 101; i++){
                cout<< exparrpntr[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            pointer = AbsDistDiff(pointer, exparrpntr);
            cout<<"Absolute difference "<<endl;
            for(int i = 1; i < 101; i++){
                cout<<pointer[i-1]<<" ";
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            double maxdiff=FindMax(pointer);
            cout<<"Max absolute difference is "<<maxdiff<<endl;
            if(maxdiff < 0.136){
                cout<<"Null hypothesis is not rejected";
            }
            else{
                cout<<"Null hypothesis is rejected";
            }
            break;
        }
        case 4:
        {
            cout<<"4. Inversive congruential sequences"<<endl;
            pointer = RANDGEN4(constanta, data);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"4. Inversive congruential sequences (sorted)"<<endl;
            sort(pointer, pointer+100);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"Rectangular distribution"<<endl;
            pointer = RectDist(pointer);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"Expected distribution"<<endl;
            for(int i = 1; i < 101; i++){
                cout<< exparrpntr[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            pointer = AbsDistDiff(pointer, exparrpntr);
            cout<<"Absolute difference "<<endl;
            for(int i = 1; i < 101; i++){
                cout<<pointer[i-1]<<" ";
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            double maxdiff=FindMax(pointer);
            cout<<"Max absolute difference is "<<maxdiff<<endl;
            if(maxdiff < 0.136){
                cout<<"Null hypothesis is not rejected";
            }
            else{
                cout<<"Null hypothesis is rejected";
            }
            break;
        }
        case 5:
        {
            cout<<"5. Combining method"<<endl;
            pointer = RANDGEN5(constanta, data);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"5. Combining method (sorted)"<<endl;
            sort(pointer, pointer+100);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"Rectangle distribution"<<endl;
            pointer = RectDist(pointer);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"Expected distribution"<<endl;
            for(int i = 1; i < 101; i++){
                cout<< exparrpntr[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            pointer = AbsDistDiff(pointer, exparrpntr);
            cout<<"Absolute difference "<<endl;
            for(int i = 1; i < 101; i++){
                cout<<pointer[i-1]<<" ";
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            double maxdiff=FindMax(pointer);
            cout<<"Max absolute difference is "<<maxdiff<<endl;
            if(maxdiff < 0.136){
                cout<<"Null hypothesis is not rejected";
            }
            else{
                cout<<"Null hypothesis is rejected";
            }
            break;
        }
        case 6:{
            cout<<"6. Empirical rule"<<endl;
            pointer = RANDGEN6(constanta, data);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"6. Empirical rule (sorted)"<<endl;
            sort(pointer, pointer+100);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"Normal distribution"<<endl;
            pointer = NormalDist(pointer);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"Expected distribution"<<endl;
            for(int i = 1; i < 101; i++){
                cout<< exparrpntr[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            pointer = AbsDistDiff(pointer, exparrpntr);
            cout<<"Absolute difference "<<endl;
            for(int i = 1; i < 101; i++){
                cout<<pointer[i-1]<<" ";
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            double maxdiff=FindMax(pointer);
            cout<<"Max absolute difference is "<<maxdiff<<endl;
            if(maxdiff < 0.136){
                cout<<"Null hypothesis is not rejected";
            }
            else{
                cout<<"Null hypothesis is rejected";
            }
            break;
        }
        case 7:{
            cout<<"7. Marsaglia polar method "<<endl;
            pointer = RANDGEN7(constanta, data);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"7. Marsaglia polar method (sorted)"<<endl;
            sort(pointer, pointer+100);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"Normal distribution"<<endl;
            pointer = NormalDist(pointer);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"Expected distribution"<<endl;
            for(int i = 1; i < 101; i++){
                cout<< exparrpntr[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            pointer = AbsDistDiff(pointer, exparrpntr);
            cout<<"Absolute difference "<<endl;
            for(int i = 1; i < 101; i++){
                cout<<pointer[i-1]<<" ";
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            double maxdiff=FindMax(pointer);
            cout<<"Max absolute difference is "<<maxdiff<<endl;
            if(maxdiff < 0.136){
                cout<<"Null hypothesis is not rejected";
            }
            else{
                cout<<"Null hypothesis is rejected";
            }
            break;
        }
        case 8:{
            cout<<"8. Ratio method for normal deviates "<<endl;
            pointer = RANDGEN8(constanta, data);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"8. Ratio method for normal deviates (sorted)"<<endl;
            sort(pointer, pointer+100);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"Normal distribution"<<endl;
            pointer = NormalDist(pointer);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"Expected distribution"<<endl;
            for(int i = 1; i < 101; i++){
                cout<< exparrpntr[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            pointer = AbsDistDiff(pointer, exparrpntr);
            cout<<"Absolute difference "<<endl;
            for(int i = 1; i < 101; i++){
                cout<<pointer[i-1]<<" ";
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            double maxdiff=FindMax(pointer);
            cout<<"Max absolute difference is "<<maxdiff<<endl;
            if(maxdiff < 0.136){
                cout<<"Null hypothesis is not rejected";
            }
            else{
                cout<<"Null hypothesis is rejected";
            }
            break;
        }
        case 9:{
            cout<<"9. Logarithm method of generating exponential distribution"<<endl;
            pointer = RANDGEN9(constanta, data);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"9. Logarithm method of generating exponential distribution (sorted)"<<endl;
            sort(pointer, pointer+100);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"Exponential distribution"<<endl;
            pointer = ExpoDist(pointer);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            cout<<"Expected distribution"<<endl;
            for(int i = 1; i < 101; i++){
                cout<< exparrpntr[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            pointer = AbsDistDiff(pointer, exparrpntr);
            cout<<"Absolute difference "<<endl;
            for(int i = 1; i < 101; i++){
                cout<<pointer[i-1]<<" ";
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            double maxdiff=FindMax(pointer);
            cout<<"Max absolute difference is "<<maxdiff<<endl;
            if(maxdiff < 0.136){
                cout<<"Null hypothesis is not rejected";
            }
            else{
                cout<<"Null hypothesis is rejected";
            }
            break;
        }
        case 10:{
            cout<<"10. Метод Аренса для генерування гамма - розподілу порядку a > 1 "<<endl;
            pointer = RANDGEN10(constanta, data);
            sort(pointer, pointer+100);
            for(int i = 1; i < 101; i++){
                cout<< pointer[i-1]<<' ';
                if(i%10 == 0){
                    cout<< endl;
                }
            }
            break;
        }
    }
    return 0;
}
