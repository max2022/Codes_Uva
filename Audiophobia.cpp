#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
const int inf=0x3f3f3f3f;
int n,m,q;
int dis[105][105];
void Floyd(){
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(dis[i][k]!=inf&&dis[k][j]!=inf)dis[i][j]=min(dis[i][j],max(dis[i][k],dis[k][j]));
			}
		}
	}
}
int main()
{
	int tot=0;
	while(~scanf("%d%d%d",&n,&m,&q)&&(n||m||q)){
		memset(dis,inf,sizeof(dis));
		while(m--){
			int u,v,w;
			scanf("%d%d%d",&u,&v,&w);
			dis[u][v]=w;
			dis[v][u]=w;
		}
		Floyd();
		if(tot)	printf("\n");
		printf("Case #%d\n",++tot);
		while(q--){
			int u,v;
			scanf("%d%d",&u,&v);
			if(dis[u][v]!=inf)
            printf("%d\n",dis[u][v]);
			else
			printf("no path\n");
		}
	}
}
