#include <iostream>
using namespace std;

int main()
{
    cout<<"Matrix A"<<endl;
    int a,b,c,d,sum=0;
    cout<<"Enter Number of Rows of Matrix A = ";
    cin>>a;
    cout<<"Enter Number of Columns of Matrix A = ";
    cin>>b;
    int matA[a][b];
    for(int r=0; r<a; r++)
    {
        for(int c=0; c<b; c++)
        {
            cout<<"Enter Element "<<c+1<<" of Row "<<r+1<<" = ";
            cin>>matA[r][c];
        }
    }
    cout<<"\nMatrix A:"<<endl<<endl;
    for(int r=0; r<a; r++)
    {
        for(int c=0; c<b; c++)
        {
            cout<<matA[r][c]<<"    ";
        }
        cout<<endl;
    }
     cout<<"\nMatrix B"<<endl;
    cout<<"Enter Number of Rows of Matrix B = ";
    cin>>c;
    cout<<"Enter Number of Columns of Matrix B = ";
    cin>>d;
    int matB[c][d];
    for(int r=0; r<c; r++)
    {
        for(int c=0; c<d; c++)
        {
            cout<<"Enter Element "<<c+1<<" of Row "<<r+1<<" = ";
            cin>>matB[r][c];
        }
    }
    cout<<"\nMatrix B:"<<endl<<endl;
    for(int r=0; r<c; r++)
    {
        for(int c=0; c<d; c++)
        {
            cout<<matB[r][c]<<"    ";
        }
        cout<<endl;
    }
    int matC[a][d];
    if(b!=c)
    {
        cout<<"The Matrices You Entered are Not Compatible for Multiplication";
        return 0;
    }
else
    {
        cout<<"The Resultant Matrix After Multiplication:"<<endl;
        for(int i=0; i<a; i++)
        {
            for(int j=0; j<d; j++)
            {
                for (int k=0; k<b; k++)
                {
                    sum=sum+matA[i][k]*matB[k][j];
                }
                matC[i][j]=sum;
            }
        }
        for(int i=0; i<a; i++)
        {
            for(int j=0; j<d; j++)
            {
                cout<<matC[i][j]<<"    ";
            }
            cout<<endl;
        }
    }
    return 0;
}
