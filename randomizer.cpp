#include  <iostream>
#include  <math.h>

using namespace std;
int Quarter[10];
int loops = 10000;

void Quarters10(double gen){
    for (int i = 0;  i < 10; i++){
        if(((gen >= (double)i / 10)&& (gen < (double)(i + 1) / 10))||(gen == 1&&i == 9)){
            Quarter[i]++;
        }
    }
}

void Quarters33(double gen){
    for (int i =  - 5; i < 5; i++){
        if(((gen >= (i * (0.6)))&& (gen < ((i + 1) * (0.6))))||(gen == 3&&i == 4)){
            Quarter[i + 5]++;
        }
    }
}

void Quarters100(double gen){
    for (int i = 0; i < 10; i++){
        if((gen >= (i * 10)&& (gen < ((i + 1) * 10)))||(gen == 100&&i == 9)){
            Quarter[i]++;
        }
    }
}

void RANDGEN1(long long m)
{
    long long a = 113, c = 257, X0 = 3, Xi;
    for(int i = 0; i < loops; i++){
        Xi = (X0 * a + c) %  m;
        X0 = Xi;
        double Ui = double(Xi) / (m - 1);
        Quarters10(Ui);
    }
}

void RANDGEN2(long long m){
{
        long long a = 2, c = 4, d = 1, X0 = 1, Xi;
        for(int i = 0; i < loops; i++){
            Xi = (d * X0 * X0 + X0 * a + c) %  m;
            X0 = Xi;
            double Ui = double(Xi) / (m - 1);
            Quarters10(Ui);
        }
    }
}
void RANDGEN3(long long m){
    long long X0 = 1, Xi, X1 = 1;
        for(int i = 0; i < loops; i++){
            Xi = (X0 + X1) %  m;
            X0 = X1;
            X1 = Xi;
            double Ui = double(Xi) / (m - 1);
            Quarters10(Ui);
        }
}
void RANDGEN4(long long p){
    long long X0 = 1, Xo, Xi, a = 113, c = 433;
    int j;
    for (int i = 0; i < loops; i++){
        j = 0;
        while((X0 * j) % p != 1){
            j++;
        }
        Xo = j;
        Xi = (a * Xo + c) % p;
        X0 = Xi;
        double Ui = double(Xi) / (p - 1);
        Quarters10(Ui);
    }
}
void RANDGEN5(long long m){
    long long m1 = 16843, a1 = 283, c1 = 359, X1 = 1, Xi1, m2 = 719;
    long long a2 = 284, c2 = 137, X2 = 3, Xi2, Xi3;
        for(int i = 0; i < loops; i++){
            Xi2 = (X2 * a2 + c2) %  m2;
            X2 = Xi2;
            Xi1 = (X1 * a1 + c1) %  m1;
            X1 = Xi1;
            Xi3 = (abs(Xi1 - Xi2) % m);
            double Ui = double(Xi3) / (m - 1);
            Quarters10(Ui);
        }
}
void RANDGEN6 (long long m1)
{
    long long m = 0, sigma = 1, a = 307, c = 373, X0 = 1, Xi1;
    double Xi2;
    for(int i = 0; i < loops; i++){
        double sum = 0;
        for(int j = 0; j < 12; j++){
            Xi1 = (X0 * a + c) %  m1;
            X0 = Xi1;
            sum += (double)Xi1 / (m1 - 1);
        }
        Xi2 = m + (sum - 6) * sigma;
        Quarters33(Xi2);
        
    }
}
void RANDGEN7 (long long m){
    long long m1 = 1687, m2 = 1479, c1 = 373;
    long long c2 = 771, a = 551, c = 1117, a1 = 307, a2 = 447;
    long long X01 = 4, X02 = 1, X03 = 3, Xi1, Xi2, Xi3;
    double U1, U2, R1, R2;
    double ara[loops];
    for(int i = 0; i < loops; i++){
            Xi1 = (X01 * a + c) %  m;
            X01 = Xi1;
            ara[i] = (double)Xi1 / (m - 1);
        }
    double S;
    for(int i = 0; i < (loops / 2); i++){
            Xi3 = (X02 * a1 + c1) %  m1;
            X02 = Xi3;
            Xi2 = (X03 * a2 + c2) %  m2;
            X03 = Xi2;
            U1 = 2 * ara[Xi3] - 1;
            U2 = 2 * ara[Xi2] - 1;
            S = U1 * U1 + U2 * U2;
            if(S>1){
                i -- ;
            }
            else{
                R1 = U1 * (sqrt(( - 2 * log(S)) / S));
                R2 = U2 * (sqrt(( - 2 * log(S)) / S));
                Quarters33(R1);
                Quarters33(R2);
            }
    }

}
void RANDGEN8(long long m1){
    double ara[2][loops];
    long long a1 = 283, c1 = 359, X01 = 1, Xi1;
    long long m2 = 997, a2 = 337, c2 = 371, X02 = 6, Xi2;
    double u, v, X;
    for(int i = 0; i < loops; i++){
        Xi1 = (X01 * a1 + c1) %  m1;
        X01 = Xi1;
        u = (double)Xi1 / (m1 - 1);
        Xi2 = (X02 * a2 + c2) %  m2;
        X02 = Xi2;
        v = (double)Xi2 / (m2 - 1);
        X = sqrt(8 / M_E) * ((v - 0.5) / u);
        if((X * X <= 5 - 4 * exp(0.25) * u)&&(X * X <=  - 4 * log(u))&&(X * X < ((4 * exp( - 1.35)) / u) + 1.4)){
            Quarters33(X);
        }
        else{
            i -- ;
        }
    }
    
}
void RANDGEN9(long long m){
    long long a = 257, c = 221, X0 = 1, Xi;
    double X, u;
    for(int i = 0; i < loops; i++){
        Xi = (X0 * a + c) %  m;
        X0 = Xi;
        u = double(Xi) / (m - 1);
        X =  - 40 * log(u);
        if(X >= 0){
            Quarters100(X);
        }
        else{
            i -- ;
        }
    }
}
void RANDGEN10(long long m2){
    long long m1 = 16843, a1 = 283, c1 = 359, X01 = 1, Xi1, a = 10;
    long long a2 = 561, c2 = 111, X02 = 2, Xi2;
    double v, u, y, x;
    for(int i = 0; i < loops; i++){
            Xi1 = (X01 * a1 + c1) %  m1;
            X01 = Xi1;
            u = (double)Xi1 / (m1 - 1);
            y = tan(M_PI * u);
            x = sqrt(2 * a - 1) * y + a - 1;
            if(x>0){
                Xi2 = (X02 * a2 + c2) %  m2;
                X02 = Xi2;
                v = (double)Xi2 / (m2 - 1);
                if(v <= (1 + y * y) * exp((a - 1) * log(x / (a - 1)) - sqrt(2 * a - 1) * y)){
                    Quarters100(x);
                }
                else{
                    i -- ;
                }
            }
            else{
                i -- ;
            }
    }

}
int main()
{
    int Method = 0;
    cout<<"CHOOSE YOUR FIGHTER!!!"<<endl<<"ENTER YOUR METHOD (1..10)"<<endl;
    cin>>Method;
    double n = 0;
    long long constanta;
    cout<<"Choose constanta:"<<endl;
    cin>>constanta;
    switch (Method){
        case 1:{
            cout<<"1. Лінійний конгруентний метод"<<endl;
            RANDGEN1(constanta);
            for(int i = 0; i < 10; i++){
                cout<<(double)i / 10<<" to "<<(double)(i + 1) / 10<<' '<<(double)Quarter[i] / 10000<<endl;
                n += (double)Quarter[i] / 10000;
            }
            break;
        }
        case 2:{
            cout<<"2. Квадратичний конгруентний метод"<<endl;
            RANDGEN2(constanta);
            for(int i = 0; i < 10; i++){
                cout<<(double)i / 10<<" to "<<(double)(i + 1) / 10<<' '<<(double)Quarter[i] / 10000<<endl;
                n += (double)Quarter[i] / 10000;
            }
            break;
        }
        case 3:
        {
            cout<<"3. Числа Фібоначчі"<<endl;
            RANDGEN3(constanta);
            for(int i = 0; i < 10; i++){
                cout<<(double)i / 10<<" to "<<(double)(i + 1) / 10<<' '<<(double)Quarter[i] / 10000<<endl;
                n += (double)Quarter[i] / 10000;
            }
            break;
        }
        case 4:{
            cout<<"4. Обернена конгруентна послідовність"<<endl;
            RANDGEN4(constanta);
            for(int i = 0; i < 10; i++){
                cout<<(double)i / 10<<" to "<<(double)(i + 1) / 10<<' '<<(double)Quarter[i] / 10000<<endl;
                n += (double)Quarter[i] / 10000;
            }
            break;
        }
        case 5:
        {
            cout<<"5. Метод об’єднання"<<endl;
            RANDGEN5(constanta);
            for(int i = 0; i < 10; i++){
                cout<<(double)i / 10<<" to "<<(double)(i + 1) / 10<<' '<<(double)Quarter[i] / 10000<<endl;
                n += (double)Quarter[i] / 10000;
            }
            break;
        }
        case 6:{
            cout<<"6. Правило “3 сігма”"<<endl;
            RANDGEN6(constanta);
            for(int i =  - 5; i < 5; i++){
                cout<<(double)i * 0.6<<" to "<<(double)(i + 1) * 0.6<<' '<<(double)Quarter[i + 5] / 10000<<endl;
                n += (double)Quarter[i + 5] / 10000;
            }
            break;
        }
        case 7:{
            cout<<"7. Метод полярних координат"<<endl;
            RANDGEN7(constanta);
            for(int i =  - 5; i < 5; i++){
                cout<<(double)i * 0.6<<" to "<<(double)(i + 1) * 0.6<<' '<<(double)Quarter[i + 5] / 10000<<endl;
                n += (double)Quarter[i + 5] / 10000;
            }
            break;
        }
        case 8:{
            cout<<"8. Метод співвідношень"<<endl;
            RANDGEN8(constanta);
            for(int i =  - 5; i < 5; i++){
                cout<<(double)i * 0.6<<" to "<<(double)(i + 1) * 0.6<<' '<<(double)Quarter[i + 5] / 10000<<endl;
                n += (double)Quarter[i + 5] / 10000;
            }
            break;
        }
        case 9:{
            cout<<"9. Метод логарифму для генерування показового розподілу"<<endl;
            RANDGEN9(constanta);
            for(int i = 0; i < 10; i++){
                cout<<(double)i * 10<<" to "<<(double)(i + 1) * 10<<' '<<(double)Quarter[i] / 10000<<endl;
                n += (double)Quarter[i] / 10000;
            }
            break;
        }
        case 10:{
            cout<<"10. Метод Аренса для генерування гамма - розподілу порядку a > 1"<<endl;
            RANDGEN10(constanta);
            for(int i = 0; i < 10; i++){
                cout<<(double)i * 10<<" to "<<(double)(i + 1) * 10<<' '<<(double)Quarter[i] / 10000<<endl;
                n += (double)Quarter[i] / 10000;
            }
            break;
        }
    }
    cout<<"CHECKER = "<<n<<endl;
    return 0;
}
