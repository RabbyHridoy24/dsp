#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int ir,os,is,out_or,in_or,imp_or,sum;

    cout<<"Size of Input Sequence: ";
    cin>>is;
    cout<<"Size of Impulse Response: ";
    cin>>ir;

    os=is+ir-1;

    int out_sec[os]={0},imp_res[ir]={0},in_sec[is]={0};

    cout<<"Enter Input Sequence \n";
    for(int i=0;i<is;i++){
        cin>>in_sec[i];
    }
    cout<<"Enter origin of Input Sequence: ";
    cin>>in_or;

    cout<<"Enter Impulse Response\n";
    for(int i=0;i<ir;i++){
        cin>>imp_res[i];
    }
    cout<<"Enter origin of Impulse Response: ";
    cin>>imp_or;


    reverse(imp_res,imp_res+ir);

    int size=(ir+os-1);
    int imp[size]={0},in[size]={0};

    for(int i=ir-1,j=0;j<is;j++,i++){
        in[i]=in_sec[j];
    }


    for(int i=0;i<os;i++){


        for(int m=0,k=i,l=0;m<size;m++){

            if(m==k){
                imp[k]=imp_res[l];
                k++;l++;
                if(l==ir)
                    break;
            }
            else{
                imp[m]=0;
            }
        }

        sum=0;
        for(int j=0;j<size;j++){
            sum+=in[j]*imp[j];
        }
        out_sec[i]=sum;
    }

    cout<<"Output Sequences : ";
    for(int i=0;i<os;i++){

        cout<<out_sec[i]<<" ";
    }
    cout<<endl;

    return 0;
}
