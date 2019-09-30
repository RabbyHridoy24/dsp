#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int ir,os,is,out_or,in_or,imp_or,sum;

    cout<<"Size of Output Sequence: ";
    cin>>os;
    cout<<"Size of Impulse Response: ";
    cin>>ir;
    is=os+1-ir;

    float out_sec[os],imp_res[os]={0},in_sec[is]={0};

    cout<<"Enter Output Sequence \n";
    for(int i=0;i<os;i++){
        cin>>out_sec[i];
    }
    cout<<"Enter origin of Output Sequence: ";
    cin>>out_or;

    cout<<"Enter Impulse Response\n";
    for(int i=0;i<ir;i++){
        cin>>imp_res[i];
    }
    cout<<"Enter origin of Impulse Response: ";
    cin>>imp_or;


    for(int i=0;i<is;i++){

        sum=0;
        for(int j=0,k=i;j<i;j++,k--){
            sum+=in_sec[j]*imp_res[k];
        }
        in_sec[i]=(out_sec[i]-sum)/imp_res[0];
    }



    cout<<"\n\nInput Sequence\n";
    for(int i=0;i<is;i++){
        cout<<in_sec[i]<<" ";
    }
    cout<<endl;


    return 0;
}
