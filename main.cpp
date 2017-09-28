#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

const unsigned int n=60;

void rnd(int *a){
stand ((time(0));
for (int i=0;i<n;i++){
a[i]=0+rand()%10000;
cout<<'b'<<'['<<i<<']'<<'='<<a[i]<<endl;
}
    cout<<endl;
}
void cheth (int *a, int *aa){
    for (int i=0;i<n/2;i++){
        aa[i]=a[2*i];
        cout<<'a'<<'['<<i<<']'<<'='aa[i]<<endl;
    }
    cout<<endl;
}
void check (int aa){
    for(int i=0;i<n/2;i++){
        if ((((aa[i])&88)==)&&(((aa[i])&6)==0)){
            cout<<'b'<<'['<<i<<']'<<'='<<aa[i]<<"true"<<endl;
        }
        else cout<<'b'<<'['<<i<<']'<<'='aa[i]<<"false"<<endl;

    }
    cout<<endl;
}
void div (int *aa){
    for(int i=0;i<n/2;i++){
        int l=0;
        int b=aa[i];
        while(b){
            b/=10;
            l++;
        }
        cout<<'b'<<'['<<i<<']'<<'='<<aa[i]<<"razryadi"<<l<<endl;
    }
    cout<<endl;
}
int div1 (int b){
    int l=0;
    while (b){
        b/=10;
        l++;
    }
    return l;
}
void twodimarr (int *aa, int **p){
    for (int i=0;i<n/2;i++){
        double f=div1(*(aa+i));
        for (int j=0,jj=pow(10,f);j<f;j++, jj/=10){
            p[i][j]=(((aa[i])%jj)/(jj/10));
cout<<p[i][j]<<"";
        }
        cout<<endl;
    }
    cout<<endl;
}
void twodimarr1 (int *aa,int **p){
    for (int i=0;i<n/2;i++){
        double f=div1(*(aa+i));
        for (int j=0;j<f;j++){
            if (p[i][j]==0){
                p[i][j]=9;
            }
            else p[i][j]-=1;
            cout<<p[i][j]<<"";
        }
        cout<<endl;
    }
    cout<<endl;
}
void onedimarr (int *aa,int **p,int *aaa){
    for(int i=0;i<n/2;i++){
        double f=div1(*(aa+i));
    int sum=0;
    for (int j=0,jj=pow(10,f-1);j<f;j++,jj/=10) {
        sum+ =p[i][j]*jj;
    }
        aaa[i]=sum;
        cout<<sum<<"";
    }
    cout<<endl;
}
int main(){
    int *a=new int[n];
    int *aa=new int[n/2];
    int *aaa=new int[n/2];
    rnd (a);
    cheth (a,aa);
    check (aa);
    div (aa);
    int **p=new int *[n/2];
    for (int i=0;i<n/2;i++){
        int f=div1(*(aa+i));
        p[i]=new int[f];
    }
    twodimarr(aa,p);
    twodimarr1(aa,p);
    onedimarr(aa,p,aaa);
    delete[]a;
    delete[]aa;
    delete[]aaa;
    for (int i=0; i<5;i++);
    delete []p[i];
    delete []p;
    return 0;
}