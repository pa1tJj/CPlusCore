#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void in(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}
int songuyento(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
void so_lon_thu_nhat_va_thu_2(int a[],int n){
	int max1=-1e9-1,max2=-1e9-1;
	for(int i=0;i<n;i++){
		if(a[i]>max1){
			max2=max1;
			max1=a[i];
		}else if(a[i]>max2 && max1!=a[i]){
			max2=a[i];
		}
	}
	cout<<"\nso lon nhat:"<<max1;
	cout<<"\nso lon thu hai:"<<max2;
}
void so_nho_thu_nhat_va_thu_2(int a[],int n){
	int fmin,smin;
	if(a[0]>a[1]){
		fmin=a[1];
		smin=a[0];
	}else{
		fmin=a[0];
		smin=a[1];
	}
	for(int i=2;i<n;i++){
		if(fmin>=a[i]){
			smin=fmin;
			fmin=a[i];
		}else if(a[i]<smin && fmin!=a[i]){
			smin=a[i];
		}
	}
	cout<<"\nso nho thu nhat:"<<fmin;
	cout<<"\nso nho thu hai:"<<smin;
}
void liet_ket_pt_co_it_nhat_2_pt_lon_hon(int a[],int n){
	int fmax,smax;
	if(a[0]>a[1]){
		fmax=a[0];
		smax=a[1];
	}else{
		fmax=a[1];
		smax=a[0];
	}
	for(int i=2;i<n;i++){
		if(fmax<a[i]){
			smax=fmax;
			fmax=a[i];
		}else if(smax<a[i]){
			smax=a[i];
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]<smax){
			cout<<a[i]<<"\t";
		}
	}
}
int tach_so(int n){
	int dv,d1=0,d2=0;
	while(n!=0){
		dv=n%10;
		n/=10;
		if(dv==1){
			d1++;
		}
		if(dv==9){
			d2++;
		}
	}
	if(d1>0 & d2>0){
		return true;
	}
}
void so_dep_chua_1_va_9(int a[],int n){
	for(int i=0;i<n;i++){
	    if(tach_so(a[i])==true){
	    	cout<<a[i]<<"\t";
		}	
	}
}
void liet_ke_pt_co_it_nhat_1_pt_trai_dau(int a[],int n){
	
}
int check_so_doi_xung(int n){
	int dv,tmp=n,so_nguoc;
	while(tmp!=0){
		dv=tmp%10;
		so_nguoc=so_nguoc*10+tmp;
		tmp/=10;
	}
	if(so_nguoc==n){
		return true;
	}
}
int check_doi_xung(int a[],int n){
	for(int i=0;i<n/2;i++){
		if(a[i]!=a[n-i-1]){
			return false;
		}
		return true;
	}
}
void mang_doi_xung(int a[],int n){
	if(check_doi_xung(a,n)==true){
		cout<<"yes";
	}else{
		cout<<"no";
	}
}
void liet_ke_pt_khong_nho_hon_so_dung_truoc(int a[],int n){
	int max=a[0];
	for(int i=0;i<n;i++){
	    if(a[i]>=max){
	    	cout<<a[i]<<"\t";
		}
		if(a[i]>max){
			max=a[i];
		}
	}
}
int min(int a,int b){
	if(a>b){
		return b;
	}else{
		return a;
	}
}
int max(int a,int b){
	if(a<b){
		return b;
	}else{
		return a;
	}
}
void lineland(int a[],int n){
	for(int i=0;i<n;i++){
		if(i==0){
			cout<<a[i+1]-a[i]<<"\t"<<a[n-1]-a[i]<<endl;
		}else if(i==n-1){
			cout<<a[n-1]-a[n-2]<<"\t"<<a[n-1]-a[0]<<endl;
		}else{
			cout<<min(a[i+1]-a[i],a[i]-a[i-1])<<"\t"<<max(a[i+1]-a[i],a[i]-a[0])<<endl;
		}		
	}
}
int avatar(int a[],int n){
	int g25=0,g50=0;
	for(int i=0;i<n;i++){
		if(a[i]==25){
			++g25;
		}else if(a[i]==50){
			if(g25==0){
				return 0;
			}
			++g50;
			--g25;
		}else{
			if(g25==0 || g25*25+g50*50<75){
				return 0;
			}
			if(g50!=0){
				--g25;
				--g50;
			}else{
				g25-=3;
			}
		}
	}
	return 1;
}
int ucln(int a,int b){
	while(a*b!=0){
		if(a>b){
			a%=b;
		}else{
			b%=a;
		}
	}
	return a+b;
}
void cap_so_ngto_cung_nhau(int a[],int n){
	int dem=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(ucln(a[i],a[j])==1){
				dem++;
			}
		}
	}
	cout<<dem;
}
int maxx(int a,int b){
	return a<b?b:a;
}
void day_lien_tiep_pt_lien_ke_khac_nhau_dai_nhat(int a[],int n){
	int dem=1,res=0;
	for(int i=1;i<n;i++){
		if(a[i]!=a[i-1]){
			++dem;
		}else{
			dem=1;
		}
		res=maxx(res,dem);
	}
	cout<<res;
}
int day_tang_lien_tiep_dai_nhat(int a[],int n){
	int dem=1,res=0,cnt=0,b[n];
	for(int i=1;i<n;i++){
		if(a[i]>a[i-1]){
			++dem;
		}else{
			dem=1;
		}
		if(dem>res){
			res=dem;
			b[0]=i-res+1;
			cnt=1;
		}else if(dem==res){
			b[cnt]=i-res+1;
			++cnt;
		}
	}
	cout<<res<<endl;
	for(int i=0;i<cnt;i++){
		for(int j=0;j<res;j++){
			cout<<a[b[i]+j]<<"\t";
		}
		cout<<endl;
	}
}
void so_cap_bang_nhau_lien_tiep(int a[],int n){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]==a[i+1]){
			dem++;
		}
	}
	cout<<dem;
}
void so_xuat_hien_trong_mang(int a[],int n){
	for(int i=0;i<n;i++){
		int ok=1;
		for(int j=0;j<i;j++){
			if(a[i]==a[j]){
				ok=0;
				break;
			}
		}
		if(ok){
			cout<<a[i]<<"\t";
		}
		//c2:
//		if(cnt[a[i]]==0){
//			cout<<a[i]<<"\t";
//			cnt[a[i]]=1;
//		}
	}	
}
// 1 2 3 3 3 3 9 9 9 9 ===> 3 4
int cnt[1000001]={0};
void so_co_so_lan_xuat_hien_nhieu_nhat_va_co_gia_tri_nho_nhat(int a[],int n){
	for(int i=0;i<n;i++){
		cnt[a[i]]++;
	}
	int dem=0,res;
	for(int i=0;i<n;i++){
		if(dem<cnt[a[i]]){
			dem=cnt[a[i]];
			res=a[i];
		}else if(dem==cnt[a[i]]){
			if(res>a[i]){
				res=a[i];
			}
		}
	}
	cout<<res<<"\t"<<dem;
}
//1 2 9 9 9 9 3 3 3 3 ====> 9 4
void so_xuat_hien_nhieu_nhat_va_la_so_dung_truoc(int a[],int n){
	for(int i=0;i<n;i++){
		cnt[a[i]]++;
	}
	int dem=0,res;
	for(int i=0;i<n;i++){
		if(dem<cnt[a[i]]){
			dem=cnt[a[i]];
			res=a[i];
		}
	}
	cout<<res<<"\t"<<dem;
}
// 1 2 3 3 3 9 9 9 9 ===> 1 1- 2 1 - 3 3 - 9 4
void liet_ke_gia_tri_trong_mang_va_so_lan_xuat_hien(int a[],int n){
	for(int i=0;i<n;i++){
		cnt[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if(cnt[a[i]]!=0)
		cout<<a[i]<<"\t"<<cnt[a[i]]<<endl;
		cnt[a[i]]=0;
	}
}
//1 2 3 3 3 9 9 9 9 ===> 1 2
void liet_ke_so_chi_xuat_hien_1_lan(int a[],int n){
	for(int i=0;i<n;i++){
		cnt[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if(cnt[a[i]]==1){
			cout<<a[i]<<"\t";
		}
	}
}
void tong_gia_tri_doan_tu_l_sang_r(int a[],int l,int r){
	int s=0;
	for(int i=l;i<=r;i++){
		s+=a[i];
	}
	cout<<s;
}
void day_con_lien_tiep_tong_lon_nhat(int a[],int n){
	int s1=0,s2=0;
	for(int i=0;i<n;i++){
		s1+=a[i];
		if(s1<0){
			s1=0;
		}
		if(s1>s2){
			s2=s1;
		}
	}
	cout<<s2;
}
void day_con_tong_lon_nhat_lien_tiep_va_la_day_cuoi(int a[],int n,int k){
	int s1,s2=0,b[n],vt=0;
	for(int i=0;i<n-k+1;i++){
		s1=0;
		for(int j=i;j<i+k;j++){
			s1+=a[j];			
		}
		if(s1>=s2){
			s2=s1;
			vt=i;
		}
	}
	cout<<s2<<endl;
	for(int i=vt;i<vt+k;i++){
		cout<<a[i]<<"\t";
	}
}
void so_lap_dau_tien(int a[],int n){
	int ok=0;
	for(int i=0;i<n;i++){
		if(cnt[a[i]]==1){
			cout<<a[i];
			ok=1;
			break;
		}
		cnt[a[i]]==1;
	}
	if(!ok){
		cout<<"\n-1";
	}
	memset(cnt,0,sizeof(cnt));
}
void tron_2_mang_da_sap_xep_thanh_1_mang_sap_xep(int a[],int b[],int m,int n){
	int c[n+m],vt=0,i=0,j=0;
	while(i<m && j<n){
		if(a[i]<=b[j]){
			c[vt]=a[i];
			++vt;
			++i;
		}else{
			c[vt]=b[j];
			++vt;
			++j;
		}
	}
	while(i<m){
		c[vt++]=a[i++];
	}
	while(j<n){
		c[vt++]=b[j++];
	}
	cout<<"\nmang sau khi tron:";
	for(int i=0;i<m+n;i++){
		cout<<c[i]<<"\t";
	}
}
void hop_va_giao_2_mang_tang_dan(int a[],int b[],int m,int n){
	int i=0,j=0,h=0,g=0,m_giao[min(m,n)],m_hop[m+n];
	while(i<m && j<n){
		if(a[i]<b[j]){
			m_hop[h]=a[i];
			++i;
			++h;
		}else if(a[i]==b[j]){
			m_hop[h]=a[i];
			m_giao[g]=a[i];
			++i;++j;
			++h;++g;
		}else{
			m_hop[h]=b[j];
			++j;
			++h;
		}
	}
	while(i<m){
		m_hop[h]=a[i];
		++i;
		++h;
	}
	while(j<n){
		m_hop[h]=b[j];
		++j;++h;
	}
	cout<<"hop 2 mang tang dan:";
	for(int i=0;i<h;i++){
		int ok=1;
		for(int j=i-1;j>=0;j--){
			if(m_hop[i]==m_hop[j]){
				ok=0;
				break;
			}
		}
		if(ok){
			cout<<m_hop[i]<<"\t";
		}
	}
	cout<<"\ngiao 2 mang tang dan:";
	for(int i=0;i<g;i++){
		cout<<m_giao[i]<<"\t";
	}
}
void hop_va_giao_cua_2_mang(int a[],int b[],int m,int n){
	for(int i=0;i<m-1;i++){
		for(int j=i+1;j<m;j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}
	}
	hop_va_giao_2_mang_tang_dan(a,b,m,n);
}
void sap_xep_chan_le(int a[],int n){
	int chan[n],le[n],c=0,l=0,i=0;
	while(i<n){
		if(a[i]%2==0){
			chan[c]=a[i];
			++c;
			++i;
		}else{
			le[l]=a[i];
			++l;
			++i;
		}
	}
	for(int i=0;i<c-1;i++){
		for(int j=i+1;j<c;j++){
			if(chan[i]>chan[j]){
				swap(chan[i],chan[j]);
			}
		}
	}
	for(int i=0;i<c;i++){
		cout<<chan[i]<<"\t";
	}
	for(int i=0;i<l-1;i++){
		for(int j=i+1;j<l;j++){
			if(le[i]>le[j]){
				swap(le[i],le[j]);
			}
		}
	}
	for(int i=0;i<l;i++){
		cout<<le[i]<<"\t";
	}
}
//1 2 3 4 5 6 7 8 9 0 ===> 1 2 3 4 5 6 7 8 9 0
void so_xuat_hien_nhieu_nhat_trong_mang(int a[],int n){
	for(int i=0;i<n;i++){
		cnt[a[i]]++;
	}
	int dem=0;
	for(int i=0;i<n;i++){
		if(cnt[a[i]]>dem){
			dem=cnt[a[i]];
		}
	}
	for(int i=0;i<n;i++){
		if(dem==cnt[a[i]]){
			cout<<a[i]<<"\t";
			cnt[a[i]]=0;
		}
	}
}
//tron 2 day sao cho day A duoc dua vao vi tri co chi so chan va sap xep tang dan
//day B dua vao vi tri co chi so le va sap xep giam dan
int sapxeptangdan(int a[],int n){
	int min;
	for(int i=0;i<n-1;i++){
		min=i;
		for(int j=i+1;j<n;j++){
			if(a[min]>a[j]){
				min=j;
			}
		}
		swap(a[min],a[i]);
	}
}
int sapxepgiamdan(int a[],int n){
	for(int i=1;i<n;i++){
		int pos=i-1,x=a[i];
		while(pos>=0 && x>a[pos]){
			a[pos+1]=a[pos];
			--pos;
		}
		a[pos+1]=x;
	}
}
void tron_2_day_va_sap_xep(int a[],int b[],int m,int n){
	sapxeptangdan(a,m);
	sapxepgiamdan(b,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
		cout<<b[i]<<"\t";
	}
}
void doi_tien_thuat_toan_tham_lam(int n){
	int a[10]={1000,500,200,100,50,20,10,5,2,1};
	int cnt=0;
	for(int i=0;i<10;i++){
		cnt+=n/a[i];
		n%=a[i];
	}
	cout<<cnt;
}
void day_uu_the(int a[],int n){
	int demchan=0,demle=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			demchan++;
		}else{
			demle++;
		}
	}
	if(n%2==0 && demchan>demle){
		cout<<"YES";
	}else if(n%2!=0 && demle>demchan){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
void brt(int a[],int n){
	sapxeptangdan(a,n);
	int dem=0,res=2e9+1001;
	for(int i=0;i<n;i++){
		if(a[i+1]-a[i]<res){
			res=a[i+1]-a[i];
			dem=1;
		}else if(a[i+1]-a[i]==res){
			++dem;
		}
	}
	cout<<res<<"\t"<<dem;
}
//PHAN SAP XEP
int cmp(int a,int b){
	return abs(a)<abs(b);
}
void sap_xep_gia_tri_tuyet_doi_tang_dan(int a[],int n){
	stable_sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		if(abs(a[i])==abs(a[i+1])){
			if(a[i+1]<0){
				a[i]=a[i+1];
				a[i+1]=-a[i];
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}
//sap xep so co tong chu so lon hon xep sau
//11 88 6 23 14 ===> 11 23 14 6 88
int tach(int n){
	int i=0,dv=0,s=0;
	while(n!=0){
		dv=n%10;
		n/=10;
		s+=dv;
	}
	return s;
}
void sap_xep_so_co_tong_chu_so_lon_hon_xep_sau(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(tach(a[i])>tach(a[j])){
				swap(a[i],a[j]);
			}
		}
	}
	for(int i=0;i<n;i++){
		if(tach(a[i])==tach(a[i+1])){
			swap(a[i],a[i+1]);
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}
void in_ra_cac_buoc_sap_xep_doi_cho_truc_tiep(int a[],int n){
	for(int i=0;i<n-1;i++){
		cout<<"\nbuoc "<<i+1<<":";
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<"\t";
		}
	}
}
void in_ra_cac_buoc_sap_xep_chon(int a[],int n){
	for(int i=0;i<n;i++){
		int min=i;
		cout<<"\nbuoc "<<i+1<<":";
		for(int j=i+1;j<n;j++){
			if(a[min]>a[j]){
				min=j;
			}
		}
		swap(a[min],a[i]);
		for(int i=0;i<n;i++){
			cout<<a[i]<<"\t";
		}
	}
}
void in_ra_cac_buoc_thuc_hien_thuat_toan_chen(int a[],int n){
	for(int i=0;i<n;i++){
		int x=a[i],pos=i-1;
		cout<<"\nbuoc "<<i<<":";
		while(pos>=0 && x<a[pos]){
			a[pos+1]=a[pos];
			--pos;
		}
		a[pos+1]=x;
		for(int j=0;j<i;j++){
			cout<<a[j]<<"\t";
		}
	}
}
void in_cac_buoc_sap_xep_noi_bot(int a[],int n){
	for(int i=0;i<n-1;i++){
		cout<<"\nbuoc "<<i+1<<":";
		for(int j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<"\t";
		}
	}
}
// 10 5 3 9 2,x=7 ===> 5 9 10 3 2  (|7-5|,|7-9|,|7-10|,|7-3|,|7-2|)
int doi(int n,int x){
	return abs(x-n);
}
void sap_xep_theo_tri_tuyet_doi(int a[],int n,int x){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(doi(a[j],x)<doi(a[min],x)){
				min=j;
			}
		}
		swap(a[min],a[i]);
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}
void counting_sort(int a[],int n){
	int cnt[100001]={0};
	for(int i=0;i<n;i++){
		cnt[a[i]]++;
	}
	int dem=0;
	for(int i=0;i<n;i++){
		while(cnt[a[i]]--<0){
			a[dem++]=i;
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}
//1 5 3 4 2,k=7 ===> 2 (5,2),(3,4) 
int tong(int a,int b){
	return a+b;
}
void dem_cap_phan_tu_tong_bang_k(int a[],int n,int k){
	int dem=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(tong(a[i],a[j])==k){
				dem++;
			}
		}
	}
	cout<<dem;
}
//sap xep chu so cua so
int tach_chu_so(int n){
	int dv;
	while(n!=0){
		dv=n%10;
		cout<<dv<<"\t";
		n/=10;
	}
}
void sap_xep_chu_so(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<tach_chu_so(a[i])<<"\t";
	}
}
int gtnn(int a[],int n){
	int min=a[0];
	for(int i=0;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	return min;
}
int tri(int a,int b){
	return abs(a+b);
}
void in_cap_so_co_tong_gan_0_nhat(int a[],int n){
	int dem=2e9+1001,res,ttd;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			ttd=abs(a[i]+a[j]);
			if(ttd<dem){
				dem=tri(a[i],a[j]);
			}
		}
	}
	cout<<dem;
}
void in_K_ptu_lon_nhat(int a[],int n,int k){
	sapxepgiamdan(a,n);
	for(int i=0;i<k;i++){
		cout<<a[i]<<"\t";
	}
}
void tich_cua_so_lon_nhat_mang_a_va_so_nho_nhat_mang_b(int a[],int b[],int m,int n){
	int max=a[0];
	for(int i=0;i<m;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	int min=b[0];
	for(int i=0;i<n;i++){
		if(b[i]<min){
			min=b[i];
		}
	}
	cout<<max*min;
}
void tim_phan_tu_con_thieu(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(a[j+1]<a[j]){
				swap(a[j],a[j+1]);
			}
		}
	}
	int dem=0;
	for(int i=1;i<n;i++){
		if(a[i]-a[i-1]!=1){
			dem++;
		}
	}
	cout<<dem;
	
}
void sap_xep_theo_so_lan_xuat_hien(int a[],int n){
	
}
int tim_kiem_nhi_phan(int a[],int n,int x){
	int l=0,r=n-1;
	while(l<=r){
		int m=(l+r)/2;
		if(x==a[m]){
			return 1;
		}else if(x>a[m]){
			l=m+1;
		}else{
			r=m-1;
		}
	}
	return -1;
}
int tim_vi_tri_dau_tien(int a[],int n,int k){
	int l=0,r=n-1,vt=0;
	while(l<=r){
		int m=(l+r)/2;
		if(k==a[m]){
			vt=m;
			r=m-1;
		}else if(k>a[m]){
			l=m+1;
		}else{
			r=m-1;
		}
	}
	return vt+1;
}
int tim_vi_tri_cuoi_cung(int a[],int n,int x){
	int l=0,r=n-1,vt=0;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==x){
			vt=m;
			l=m+1;
		}else if(x>a[m]){
			l=m+1;
		}else{
			r=m-1;
		}
	}
	return vt+1;
}
void sap_xep_chan_tang_dan_le_giam_dan(int a[],int n){
	for(int i=0;i<n-1;i++){
		if(a[i]%2==0){
			int min=i;
		    for(int j=i+1;j<n;j++){
			    if(a[min]>a[j] && a[j]%2==0){
			    	min=j;
				}
		    }
		    swap(a[i],a[min]);
		}		
	}
	for(int i=0;i<n-1;i++){
		if(a[i]%2!=0){
			int max=i;
			for(int j=i+1;j<n;j++){
				if(a[max]<a[j] && a[j]%2!=0){
					max=j;
				}
			}
			swap(a[i],a[max]);
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}
void cap_so_co_tong_lon_hon_hoac_bang_k(int a[],int n,int k){
	int dem=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(tong(a[i],a[j])>=k){
				dem++;
			}
		}
	}
	cout<<dem;
}
//PHAN MANG 2 CHIEU
void nhapmatran(int a[][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
}
void inmatran(int a[][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void tim_hang_co_nhieu_so_nguyen_to_nhat(int a[][100],int m,int n){
	int dem,res=0,hang=0;
	for(int i=0;i<m;i++){
		dem=0;
		for(int j=0;j<n;j++){
			if(songuyento(a[i][j])){
				dem++;
			}
			if(dem>res){
				res=dem;
				hang=i;
			}
		}
	}
	cout<<hang+1<<endl;
	for(int i=0;i<m;i++){
		if(songuyento(a[hang][i])){
			cout<<a[hang][i]<<"\t";
		}
	}
}
void tim_cot_co_nhieu_so_nguyen_to_nhat(int a[][100],int m,int n){
	int dem=0,res,cot=0;
	for(int j=0;j<n;j++){
		for(int i=0;i<m;i++){
			if(songuyento(a[i][j])){
				dem++;
			}
			if(dem>res){
				res=dem;
				cot=j;
			}
		}
	}
	cout<<cot+1<<endl;
	for(int i=0;i<m;i++){
		if(songuyento(a[i][cot])){
			cout<<a[i][cot]<<endl;
		}
	}
}
void loai_bo_hang_va_cot_co_tong_phan_tu_lon_nhat(int a[][100],int m,int n){
	int t_hang,t_cot=0,res=0,vtc=0,vth=0;
	for(int i=0;i<m;i++){
		t_hang=0;
		for(int j=0;j<n;j++){
			t_hang+=a[i][j];
		}
		if(t_hang>res){
			res=t_hang;
			vth=i;
		}
	}
	res=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			t_cot+=a[i][j];
		}
		if(t_cot>res){
			res=t_cot;
			vtc=i;
		}
	}
	for(int i=0;i<m;i++){
		if(i!=vth){
			for(int j=0;j<n;j++){
				if(vtc!=j){
					cout<<a[i][j]<<"\t";
				}
			}
		}
		cout<<endl;
	}
}
void hoan_vi_2_hang(int a[][100],int m,int n,int x,int y){
	for(int i=0;i<m;i++){
		if(x==i+1){
			for(int j=0;j<n;j++){
				swap(a[x-1][j],a[y-1][j]);
			}
		}
	}
}
void hoan_vi_2_cot(int a[][100],int m,int n,int x,int y){
	for(int j=0;j<n;j++){
		if(x==j+1){
			for(int i=0;i<m;i++){
				swap(a[i][x-1],a[i][y-1]);
			}
		}
	}
}
void hoan_vi_2_duong_cheo(int a[][100],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			swap(a[i][i],a[i][n-i-1]);
		}
	}
}
void dem_so_nguyen_to_tren_duong_cheo_chinh_va_phu(int a[][100],int n){
	int dem=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j || j==n-i-1){
				if(songuyento(a[i][j])){
					dem++;
				}
			}
		}
	}
	cout<<dem;
}
void ma_tran_chuyen_vi(int a[][100],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[j][i]<<"\t";
		}
		cout<<endl;
	}
}
void tich_2_ma_tran(int a[][100],int b[][100],int m,int n,int p){
	
}
void sap_xep_theo_hang(int a[][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			for(int k=j+1;k<n;k++){
				if(a[i][j]>a[i][k]){
					swap(a[i][j],a[i][k]);
				}
			}
		}
	}
}
void sap_xep_theo_cot(int a[][100],int m,int n){
	for(int j=0;j<n;j++){
		for(int i=0;i<m;i++){
			for(int k=i+1;k<m;k++){
				if(a[i][j]>a[k][j]){
					swap(a[i][j],a[k][j]);
				}
			}
		}
	}
}
int main(){
	int m,n;
	cout<<"nhap so hang,cot:";cin>>m>>n;
	int a[m][100];
	nhapmatran(a,m,n);
	sap_xep_theo_cot(a,m,n);
	inmatran(a,m,n);
}
