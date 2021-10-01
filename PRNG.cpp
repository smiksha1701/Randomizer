#include <iostream>
#include <cmath>
using namespace std;

double *RANDGEN1(long long m, double *data)
{
    long long a = 113, c = 257, X0 = 3, Xi;
    for (int i = 0; i < 100; i++)
    {
        Xi = (X0 * a + c) % m;
        X0 = Xi;
        data[i] = double(Xi) / (m - 1);
    }
    return data;
}
double *RANDGEN2(long long m, double *data)
{
    long long a = 2, c = 4, d = 1, X0 = 1, Xi;
    for (int i = 0; i < 100; i++)
    {

        Xi = (d * X0 * X0 + X0 * a + c) % m;
        X0 = Xi;
        data[i] = double(Xi) / (m - 1);
    }
    return data;
}
double *RANDGEN3(long long m, double *data)
{
    long long X0 = 1, Xi, X1 = 1;
    for (int i = 0; i < 100; i++)
    {
        Xi = (X0 + X1) % m;
        X0 = X1;
        X1 = Xi;
        data[i] = double(Xi) / (m - 1);
    }
    return data;
}
double *RANDGEN4(long long p, double *data)
{
    long long X0 = 1, Xo, Xi, a = 113, c = 434;
    int j;
    for (int i = 0; i < 100; i++)
    {
        j = 0;
        while ((X0 * j) % p != 1)
        {
            j++;
        }
        Xo = j;
        Xi = (a * Xo + c) % p;
        X0 = Xi;
        data[i] = double(Xi) / (p - 1);
    }
    return data;
}
double *RANDGEN5(long long m, double *data)
{
    long long m1 = 16843, a1 = 283, c1 = 359, X1 = 1, Xi1, m2 = 719;
    long long a2 = 284, c2 = 137, X2 = 3, Xi2, Xi3;
    for (int i = 0; i < 100; i++)
    {
        Xi2 = (X2 * a2 + c2) % m2;
        X2 = Xi2;
        Xi1 = (X1 * a1 + c1) % m1;
        X1 = Xi1;
        Xi3 = (abs(Xi1 - Xi2) % m);
        data[i] = double(Xi3) / (m - 1);
    }
    return data;
}
double *RANDGEN6(long long m1, double *data)
{
    long long m = 0, sigma = 1, a = 307, c = 373, X0 = 1, Xi1;
    for (int i = 0; i < 100; i++)
    {
        double sum = 0;
        for (int j = 0; j < 12; j++)
        {
            Xi1 = (X0 * a + c) % m1;
            X0 = Xi1;
            sum += (double)Xi1 / (m1 - 1);
        }
        data[i] = m + (sum - 6) * sigma;
    }
    return data;
}
double *RANDGEN7(long long m, double *data)
{
    long long m1 = 1687, m2 = 1479, c1 = 373;
    long long c2 = 771, a = 551, c = 1117, a1 = 307, a2 = 447;
    long long X01 = 4, X02 = 1, X03 = 3, Xi1, Xi2, Xi3;
    double U1, U2, R1, R2;
    double ara[100];
    for (int i = 0; i < 100; i++)
    {
        Xi1 = (X01 * a + c) % m;
        X01 = Xi1;
        ara[i] = (double)Xi1 / (m - 1);
    }
    double S;
    for (int i = 0; i < 49; i++)
    {
        Xi3 = (X02 * a1 + c1) % m1;
        X02 = Xi3;
        Xi2 = (X03 * a2 + c2) % m2;
        X03 = Xi2;
        U1 = 2 * ara[Xi3] - 1;
        U2 = 2 * ara[Xi2] - 1;
        S = U1 * U1 + U2 * U2;
        if (S <= 1)
        {
            data[i] = U1 * (sqrt((-2 * log(S)) / S));
            data[i + 1] = U2 * (sqrt((-2 * log(S)) / S));
        }
        else
        {
            i--;
        }
    }
    return data;
}
double *RANDGEN8(long long m1, double *data)
{
    long long a1 = 283, c1 = 359, X01 = 1, Xi1;
    long long m2 = 997, a2 = 337, c2 = 371, X02 = 6, Xi2;
    double u, v, X;
    for (int i = 0; i < 100; i++)
    {
        Xi1 = (X01 * a1 + c1) % m1;
        X01 = Xi1;
        u = (double)Xi1 / (m1 - 1);
        Xi2 = (X02 * a2 + c2) % m2;
        X02 = Xi2;
        v = (double)Xi2 / (m2 - 1);
        X = sqrt(8 / M_E) * ((v - 0.5) / u);
        if ((X * X <= 5 - 4 * exp(0.25) * u) && (X * X <= -4 * log(u)) && (X * X < ((4 * exp(-1.35)) / u) + 1.4)) {
            data[i] = X;
        }
        else
        {
            i--;
        }
    }
    return data;
}
double *RANDGEN9(long long m, double *data)
{
    long long a = 257, c = 237, X0 = 1, Xi;
    double X, u;
    for (int i = 0; i < 100; i++)
    {
        Xi = (X0 * a + c) % m;
        X0 = Xi;
        u = double(Xi) / (m - 1);
        X = -40 * log(u);
        if (X >= 0) {
            data[i] = X;
        }
        else
        {
            i--;
        }
    }
    return data;
}
double *RANDGEN10(long long m2, double *data)
{
    long long m1 = 16843, a1 = 283, c1 = 359, X01 = 1, Xi1, a = 10;
    long long a2 = 561, c2 = 111, X02 = 2, Xi2;
    double v, u, y, x;
    for (int i = 0; i < 100; i++)
    {
        Xi1 = (X01 * a1 + c1) % m1;
        X01 = Xi1;
        u = (double)Xi1 / (m1 - 1);
        y = tan(M_PI * u);
        x = sqrt(2 * a - 1) * y + a - 1;
        if (x > 0)
        {
            Xi2 = (X02 * a2 + c2) % m2;
            X02 = Xi2;
            v = (double)Xi2 / (m2 - 1);
            if (v <= (1 + y * y) * exp((a - 1) * log(x / (a - 1)) - sqrt(2 * a - 1) * y))
            {
                data[i] = x;
            }
            else
            {
                i--;
            }
        }
        else
        {
            i--;
        }
    }
    return data;
}

double *RectDist(double * data)
{
    static double recdata[100]; 
    for(int i = 0; i < 100; i++){
        recdata[i] = data[i];
    }
    return recdata;
}

double *NormalDist(double * data)
{
    static double normaldata[100]; 
    for(int i = 0; i < 100; i++){
        normaldata[i] = erfc(- data[i] / sqrt(2))/2;
    }
    return normaldata;
}

double *ExpoDist(double * data)
{
    static double expdata[100]; 
    for(int i = 0; i < 100; i++){
        expdata[i] = 1.0 - exp(data[i] * -(1.0/40)) ;
    }
    return expdata;
}

double *ExpDist()
{
    static double expdata[100]; 
    for(int i = 0; i < 100; i++){
        expdata[i] = (i+1) / 100.0;
    }
    return expdata;
}
double *AbsDistDiff(double *data1, double *data2)
{
    for(int i = 0; i < 100; i++){
        data1[i] = abs(data1[i] - data2[i]);
    }
    return data1;
}
double FindMax(double *data)
{
    double max = 0.0;
    for(int i = 0; i < 100; i++){
        if (data[i] > max){
            max = data[i];
        }
    }
    return max;
}