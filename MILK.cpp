#include <bits/stdc++.h>
using namespace std;
int A[1000001];
int n, k, i, dau, cuoi, giua, vt;
int Tinh(int h)
{
    int T, dem, ngay, j;
    ngay=1;
    dem=0;
    T=0;
    for (i=1; i<=n; i++)
        if (A[i]<ngay) T++;
    else
    {
        dem++;
        if (dem==h)
        {
            dem=0;
            ngay++;
        }
    }
    return T;
}
int main()
{
    ifstream fin ("MILK.INP");
    fin >> n >> k;
    for (i=1; i<=n; i++) fin >> A[i];
    sort(A+1,A+1+n);
    fin.close();
    ofstream fout ("MILK.OUT");
    fout << Tinh(k) << endl;
    dau=1;
    cuoi=n;
    do
    {
        giua=(dau+cuoi)/2;
        if (Tinh(giua)==0)
        {
            vt=giua;
            cuoi=giua-1;
        }
        else dau=giua+1;
    } while (dau<=cuoi);
    fout << vt;
    fout.close();
    return 0;
}
