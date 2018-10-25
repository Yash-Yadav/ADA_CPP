#include <iostream>
using namespace std;

int knapSack(int* wt,int* val,int n,int w){
    int** ks=new int*[n+1];
    for(int i=0;i<=n;i++)
    ks[i]=new int[w+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++){
            if(i==0||j==0)
            		ks[i][j]=0;
            else if(wt[i-1]<=j)
            		ks[i][j]=max(val[i-1]+ks[i-1][j-wt[i-1]],ks[i-1][j]);
            else
            		ks[i][j]=ks[i-1][j];}}
    return ks[n][w];}
int main() {
	    int n,w;
	    cout<<"Enter number of items and weight of the knapsack\n";
	    cin>>n>>w;
	    int* wt=new int[n];
	    int* val=new int[n];
	    cout<<"Enter values\n";
	    for(int i=0;i<n;i++)
	    cin>>val[i];
	    cout<<"Enter weights\n";
	    for(int i=0;i<n;i++)
	    cin>>wt[i];
		cout<<"Value\n";
	    cout<<knapSack(wt,val,n,w)<<endl;
	return 0;
}
