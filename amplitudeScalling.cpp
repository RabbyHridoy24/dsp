#include<bits/stdc++.h>
using namespace std;

double X[100],x;
int a_size;


void amplitudeScalling(){
    if(abs(x)<1){
        x=.5;
    }
    else x=2;
    for(int i=0;i<a_size;i++){
        X[i]=X[i]*x;
    }
    for(int i=0;i<a_size;i++)cout<<X[i]<<" ";printf("\n");
}
int main()
{
    printf("Enter The Number of Amplitude point: ");
    cin>>a_size;
    printf("Enter points : ");
    for(int i=0;i<a_size;i++)cin>>X[i];
    cout<<"Enter Alpha value : ";
    cin>>x;
    amplitudeScalling();
    return 0;
}
/// I64d push_back() top() pop() insert() upper_bound() lower_bound() memset() max() min()
