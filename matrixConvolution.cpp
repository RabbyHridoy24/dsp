#include<bits/stdc++.h>
using namespace std;

int X1[100],X2[100],X3[100],mat[100][100],a_size,b_size,m_size,id;

void init(){
    m_size=max(a_size,b_size);
    for(int i=a_size;i<m_size;i++)X1[i]=0;
    for(int i=b_size;i<m_size;i++)X2[i]=0;
}

void matrixMul(){
    for(int i=0;i<m_size;i++){
        X3[i]=0;
        for(int j=0;j<m_size;j++){
            X3[i]=(X3[i] + (mat[i][j] * X2[j]));
        }
    }
}
void matrixConvolution(){

    for(int i=0;i<m_size;i++)
        mat[i][0]=X1[i];
    for(int i=1;i<m_size;i++){
        for(int j=0;j<m_size;j++){
            if(j==0)
            mat[j][i]=mat[m_size-1][i-1];
            else mat[j][i]=mat[j-1][i-1];
        }
    }

    matrixMul();

    for(int i=0;i<m_size;i++)cout<<X3[i]<<" ";printf("\n");
}
int main()
{
    printf("Enter The length of first Secuence : ");
    cin>>a_size;
    printf("Enter First Secuence : ");
    for(int i=0;i<a_size;i++)cin>>X1[i];

    printf("Enter The length of second Secuence : ");
    cin>>b_size;
    printf("Enter Second Secuence :  ");
    for(int i=0;i<b_size; i++)cin>>X2[i];

    init();

    matrixConvolution();
    return 0;
}
/// I64d push_back() top() pop() insert() upper_bound() lower_bound() memset() max() min()
