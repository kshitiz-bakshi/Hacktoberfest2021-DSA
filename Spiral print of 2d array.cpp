
#include <iostream>
using namespace std;

void spiral_print(int a[1000][1000], int m, int n){
    int start_row = 0;
    int end_row = m - 1;
    int start_col = 0;
    int end_col = n - 1;
    
    //Print
    while(start_row <= end_row and start_col <= end_col){
       
       //First row
        for(int i=start_col; i<=end_col; i++ ){
            cout<<a[start_row][i]<<"  ";
        }
        start_row++;
        
        //last col
        for(int i=start_row; i<=end_row; i++){
            cout<<a[i][end_col]<<"  ";
        }
        end_col--;
        
        
        //bottom row
        if(end_row > start_row){
            for(int i=end_col;i>=start_col;i--){
                cout<<a[end_row][i]<<"  ";
            }
            end_row--;
        }
        
        //start col
        if(end_col > start_col){
            for(int i=end_row; i>=start_row;i--){
                cout<<a[i][start_col]<<"  ";
            }
            start_col++;
        }
        
    }
    
}

int main() {
    int n,m;
    int a[1000][1000];
    cin>>m>>n;
    int val=1;
    for(int i=0; i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            a[i][j] = val;
            val = val+1;
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    
    cout<<"\n";
    spiral_print(a, m, n);
    
    cout<<"\n";
    return 0;
}


