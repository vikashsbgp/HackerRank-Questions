#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int mat[3][3],sum1,sum2,sum3,sum4,sum5,sum6,sum7,sum8=0;
    sum1=sum2=sum3=sum4=sum5=sum6=sum7=sum8;

    int arr1[3][3]={{8,3,4},{1,5,9},{6,7,2}};
    int arr2[3][3]={{8,1,6},{3,5,7},{4,9,2}};
    int arr3[3][3]={{4,9,2},{3,5,7},{8,1,6}};
    int arr4[3][3]={{4,3,8},{9,5,1},{2,7,6}};
    int arr5[3][3]={{6,7,2},{1,5,9},{8,3,4}};
    int arr6[3][3]={{2,7,6},{9,5,1},{4,3,8}};
    int arr7[3][3]={{2,9,4},{7,5,3},{6,1,8}};
    int arr8[3][3]={{6,1,8},{7,5,3},{2,9,4}};

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>mat[i][j];
            arr1[i][j]=abs(mat[i][j]-arr1[i][j]);
            arr2[i][j]=abs(mat[i][j]-arr2[i][j]);
            arr3[i][j]=abs(mat[i][j]-arr3[i][j]);
            arr4[i][j]=abs(mat[i][j]-arr4[i][j]);
            arr5[i][j]=abs(mat[i][j]-arr5[i][j]);
            arr6[i][j]=abs(mat[i][j]-arr6[i][j]);
            arr7[i][j]=abs(mat[i][j]-arr7[i][j]);
            arr8[i][j]=abs(mat[i][j]-arr8[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
       {
           sum1+=arr1[i][j];
           sum2+=arr2[i][j];
           sum3+=arr3[i][j];
           sum4+=arr4[i][j];
           sum5+=arr5[i][j];
           sum6+=arr6[i][j];
           sum7+=arr7[i][j];
           sum8+=arr8[i][j];
       }
    }
    cout<<min(sum1,min(sum2,min(sum3,min(sum4,min(sum5,min(sum6,min(sum7,sum8)))))));
    return 0;
}

