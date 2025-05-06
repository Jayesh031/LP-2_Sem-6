#include<iostream>
#include<cmath>

using namespace std;

int x[20];
int solutionCount = 0;

bool isSafe(int r,int c){
    for(int i=1;i<r;i++){
        if(x[i] == c || abs(x[i]-c) == abs(i-r))
            return false;
    }
    return true;
}

void printSolution(int n){
    solutionCount ++;
    cout<<"\nSolution Number: "<<solutionCount<<"\n\n";

    for(int i=1;i<=n;i++){
        cout<<"\t"<<i;
    }

    cout<<" ";
    for(int i=1;i<=n;i++){
        cout<<"\n"<<i;
        for(int j=1;j<=n;j++){
            if(x[i] == j)
                cout<<"\tQ";
            else
                cout<<"\t-";
        }
    }
    cout<<endl;

}

void solveNQueens(int r,int n){
    for(int c=1;c<=n;c++){
        if(isSafe(r,c)){
            x[r]=c;
            if(r==n)
                printSolution(n);
            else    
                solveNQueens(r+1,n);
        }
    }
}

int main(){
    int n;
    cout<<"***** N-Quuens Problem ******";
    cout<<"\nEnter Number of Queens: ";
    cin>>n;

    solveNQueens(1,n);

    if(solutionCount == 0)
        cout<<"No solution Found";
    else
        cout<<"\nTotal Solution: "<<solutionCount;

    return 0;
}