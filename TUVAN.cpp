#include <bits/stdc++.h>
using namespace std;
int A[1000001];
int n, i;
long long m, dau, giua, cuoi, vt;
long long Tinh(long long h)
{
    long long T, j;
    T=0;
    for (j=1; j<=n; j++) T+=h/A[j];
    return T;
}
int main()
{
    ifstream fin ("TUVAN.INP");
    fin >> n >> m;
    for (i=1; i<=n; i++)
    {
        fin >> A[i];
    }
    fin.close();
    ofstream fout ("TUVAN.OUT");
    dau=1;
    cuoi=1e18;
    do
    {
        giua=(dau+cuoi)/2;
        if (Tinh(giua)>=m)
        {
            vt=giua;
            cuoi=giua-1;
        } else dau=giua+1;
    } while (dau<=cuoi);
    fout << vt;
    fout.close();
    return 0;
}
