for(int i=0;i<n;i++)
{
	int t=-1;
	for(int j=1;j<=n;j++)
	if(!st[j]&&(t==-1||dist[t]>dist[j]))
	t=j;
	st[t]=true;
	for(int j=1;j<=n;j++)
	dist[j]=min(dist[j],dist[t]+g[t][j]);
}
