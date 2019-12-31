#include <iostream>
#include <cstring>
#include<cmath>
#include<cstdio>

using namespace std;
bool isSquare(int n){
    if(sqrt(n)-floor(sqrt(n))==0)
        return true;
    else
        return false;
}

int squareNear(int n){
    if(isSquare(n))
        return n;
    int N=n+1;
    while(true){
        if(isSquare(N))
            return N;
        else
            N++;

    }
    }

void encryption(string s) {

    int t=s.size();
    int M=squareNear(t);

    M=sqrt(M);


    char mat[M][M];
    int k=0;
    for(int i=0;i<M;i++)
    for(int j=0;j<M;j++,k++)
        {   if(k<t)
            mat[i][j]=s[k];
            else
                mat[i][j]='*';
        }

     for (int i=0;i<M/2;i++)
  {
    for (int j=i;j<M-i-1;j++)
    {
            char temp=mat[i][j];
            mat[i][j]=mat[M-1-j][i];
            mat[M-1-j][i]=mat[M-1-i][M-1-j];
            mat[M-1-i][M-1-j]=mat[j][M-1-i];
            mat[j][M-1-i]=temp;
    }
  }
  for(int i=0;i<M;i++)
  {
      for(int j=0;j<M;j++)
      {    if(mat[i][j]!='*')
          cout<<mat[i][j];
      }

  }

}

int main()
{   int testcase;
    string s;
    cin>>testcase;
    int T=0;
    while(T<testcase)
    {cin>>s;
     encryption(s);
     cout<<endl;
     T++;
    }
    return 0;
}
