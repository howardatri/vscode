#include<bits/stdc++.h>
#define mid ((l+r)>>1)
#define ls (tr[tr[u].l])
#define rs (tr[tr[u].r])
using namespace std;
const int N=3e5+5,INF=1e9;////1e9
typedef long long ll;
struct queryer{
	int l,r,type;
}qry[N];
struct treer{
	int l,r,min,max;
	ll val;
	bool vis;
}tr[35*N];
int q,cnt,rt;

ll calc(int p){
	if(p%4==0) return 0;
	if(p%4==1) return 2*p-1;
	if(p%4==2) return 2;
	else return 2*p+1;
}

void pushup(int u,int l,int r){
	if(!tr[u].l)
		return (void)(tr[u].val=rs.val,tr[u].min=rs.min,tr[u].max=rs.max);
	if(!tr[u].r)
		return (void)(tr[u].val=ls.val,tr[u].min=ls.min,tr[u].max=ls.max);
	tr[u].val=ls.val^rs.val^((ll)rs.min*rs.min-(ll)ls.max*ls.max);
	tr[u].min=ls.min,tr[u].max=rs.max;
}

void update(int &u,int l,int r,int st,int ed){
	if(l>ed || r<st || tr[u].vis) return;
	if(!u) u=++cnt;
	if(l>=st && r<=ed)	return (void)(tr[u]=(treer){0,0,l,r,calc(r)^calc(l),1});
	update(tr[u].l,l,mid,st,ed),update(tr[u].r,mid+1,r,st,ed);
	pushup(u,l,r);
}
		
int main(){
    scanf("%d",&q);
    for(int i=1;i<=q;i++){
    	scanf("%d",&qry[i].type);
		if(qry[i].type==2) continue;
		scanf("%d%d",&qry[i].l,&qry[i].r);
	}
	for(int i=1;i<=q;i++){
		if(qry[i].type==2) printf("%lld\n",tr[rt].val);
		else update(rt,1,INF,qry[i].l,qry[i].r);
	}
	return 0;
}