#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n1,n2,size,sum,o1,o2;

    cout<<"Size of Signal 1: ";
    cin>>n1;
    cout<<"Size of Signal 2: ";
    cin>>n2;

    size=max(n1,n2);

    int x1[size]={0},x2[size]={0},y[size]={0},temp[size]={0};

    cout<<"Enter Signal 1 : ";
    for(int i=0;i<n1;i++){
        cin>>x1[i];
    }
    cout<<"Enter origin of Signal 1: ";
    cin>>o1;

    cout<<"Enter Signal 2 : ";
    for(int i=0;i<n2;i++){
        cin>>temp[i];
    }
    cout<<"Enter origin of Signal 2: ";
    cin>>o2;

    x2[0]=temp[0];
    for(int i=1;i<size;i++){
        x2[i]=temp[size-i];
    }

    for(int i=0;i<size;i++){

        sum=0;
        for(int j=0,k=i;j<size;j++,k++){
            if(i==0){
                temp[j]=x2[j];
            }
            else{
                temp[k]=x2[j];
                if(k==size-1)
                    k=-1;
            }
        }

        for(int j=0;j<size;j++){
            sum+=x1[j]*temp[j];
        }
        y[i]=sum;
    }

    cout<<"Output Sequences : ";
    for(int i=0;i<size;i++){

        cout<<y[i]<<" ";
    }
    cout<<endl;

    return 0;
}
