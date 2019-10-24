#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,e;
	cout<<"No. of Nodes and no. of edges"<<endl;
	cin>>n>>e;

	cout<<"Describe edges : from to weight"<<endl;

	int adjmat[n][n];
	memset(adjmat,0,sizeof(adjmat));
	int weight[n][n];
	memset(weight,INT_MAX,sizeof(weight));

	for (int i = 0; i < e; ++i)
	{
		int a,b,w;
		cin>>a>>b>>w;
		adjmat[a][b] = 1;
		adjmat[b][a] = 1;
		weight[a][b] = w;
		weight[b][a] = w;
	}

	bool inP[n];

	int shortest_d_to_P[n];
	int parent[n];

	for(int i=0;i<n;i++)
	{
		shortest_d_to_P[i] = INT_MAX;
		inP[i] = false;
	}

	inP[0] = true;

	for (int i = 1; i < n; ++i)
	{
		if(adjmat[0][i]==1)
		{
			shortest_d_to_P[i] = weight[0][i];
			parent[i] = 0;
			// cout<<i<<" "<<shortest_d_to_P[i]<<endl;

		}
	}

	for(int i=0;i<(n-1);i++)
	{
		int min_index,min_w=INT_MAX;
		for(int j=0;j<n;j++)
		{
			if(inP[j]==false)
			{
				if(shortest_d_to_P[j]<min_w)
				{
					min_w = shortest_d_to_P[j];
					// cout<<j<<" : "<<shortest_d_to_P[j]<<endl;
					min_index = j;
				}
			}
		}

		// cout<<min_index<<endl;

		inP[min_index] = true;
		cout<<min_index<<" "<<parent[min_index]<<endl;

		for(int j=0;j<n;j++)
		{
			if(inP[j] == false)
			{
				if( adjmat[min_index][j] == 1 && (weight[min_index][j] < shortest_d_to_P[j]))
				{
					shortest_d_to_P[j] = weight[min_index][j];
					parent[j] = min_index;
				}
			}
		}

	}


}