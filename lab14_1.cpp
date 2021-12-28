#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

    void stat(const double a[],int num,double b[]){
    int i;
    double sum=0,sum2=0,sum3=0,sum4=0;
    double max=a[0],min=a[0];
    for(i=0;i<num;i++){
        sum += a[i];
        sum2 += pow(a[i],2);
        sum3 += (1/a[i]);
        sum4 += log(a[i]);

        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    b[0] = sum/num;
    b[1] = sqrt((sum2/num)-pow(b[0],2));
    b[2] = exp(sum4/num);
    b[3] = num/sum3;
    b[4] = max;
    b[5] = min;



}
