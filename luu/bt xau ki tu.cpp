#include<bits/stdc++.h>
#include<set>
using namespace std;
void chuyen_thanh_ki_tu_in_thuong(char *c){
	for(int i=0;i<strlen(c);i++){
		c[i]=tolower(c[i]);
	}
	cout<<c;
}
void dem_so_luong_ki_tu_chu_so_ki_tu_dac_biet(char *c){
	int cnt1=0,cnt2=0;
	for(int i=0;i<strlen(c);i++){
		if(isalpha(c[i])){
			cnt1++;
		}else if(isdigit(c[i])){
			cnt2++;
		}
	}
	cout<<"so ki tu:"<<cnt1<<endl;
	cout<<"so chu so:"<<cnt2<<endl;
	cout<<"so luong ki tu dac biet:"<<strlen(c)-cnt1-cnt2;
}
void tach_tu(string s){
	stringstream ss(s);
	string tmp;
	while(ss>>tmp){
		cout<<tmp<<endl;
	}
}
void dem_so_ki_tu_trong_xau(string s){
	stringstream ss(s);
	int dem=0;
	string res;
	while(ss>>res){
		dem++;
	}
	cout<<dem;
}
void xoa_tu_trong_xau(string s,string x){
	stringstream ss(s);
	string res;
	while(ss>>res){
		if(res!=x){
			cout<<res<<"\t";
		}
	}
}
//phan anh tuan ===>patuan@gmail.com
void tao_email(string s){
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	stringstream ss(s);
	string str;
	vector<string> v;
	while(ss>>str){
		v.push_back(str);
	}
	for(int i=0;i<v.size()-1;i++){
		cout<<v[i][0];
	}
	cout<<v[v.size()-1]<<"@gmail.com";
}
//
void tao_email_trong_truong_hop_trung_ten(string s,int sl){
	cin.ignore();
	map<string,int> m;
	while(sl--){
		string s;
		getline(cin,s);
		for(int i=0;i<s.size();i++){
			s[i]=tolower(s[i]);
		}
		vector<string> v;
		stringstream ss(s);
		string str,res="";
		while(ss>>str){
			v.push_back(str);
		}
		for(int i=0;i<v.size()-1;i++){
			res+=v[i][0];
		}
		res+=v[v.size()-1];
		if(m[res]==0){
			cout<<res<<"@gmail.com"<<endl;
		}else{
			cout<<res<<m[res]+1<<"@gmail.com"<<endl;
		}
		m[res]++;
	}
}
void viethoa(string &s){
	for(int i=0;i<s.size();i++){
		s[i]=toupper(s[i]);
	}
}
void viet_hoa_chu_cai_dau(string &s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
}
//chuan hoa ten theo mau ===> Phan Anh, Tuan
void chuan_hoa_1(string s){
	vector<string> v;
	stringstream ss(s);
	string str;
	while(ss>>str){
		v.push_back(str);
	}
	for(int i=0;i<v.size()-1;i++){
		viet_hoa_chu_cai_dau(v[i]);
		cout<<v[i];
		if(i==v.size()-2){
			cout<<", ";
		}else{
			cout<<" ";
		}
	}
	viethoa(v[v.size()-1]);
	cout<<v[v.size()-1];
}
//chuan hoa theo mau ===> Tuan,Phan Anh
void chuan_hoa_2(string s){
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss>>tmp){
		v.push_back(tmp);
	}
	viet_hoa_chu_cai_dau(v[v.size()-1]);
	cout<<v[v.size()-1]<<", ";
	for(int i=0;i<v.size()-1;i++){
		viet_hoa_chu_cai_dau(v[i]);
		cout<<v[i]<<" ";
	}
}
void dem_so_lan_xuat_hien_cua_ki_tu(string s){	
	int cnt[26]={0};
	for(int i=0;i<s.size();i++){
		cnt[s[i]-'a']++;
	}
	for(int i=0;i<s.size();i++){
		if(cnt[s[i]-'a']!=0){
			cout<<s[i]<<"\t"<<cnt[s[i]-'a']<<endl;
			cnt[s[i]-'a']=0;
		}
	}
}
void in_ki_tu_xuat_hien_nhieu_nhat(string s){
//	int dem,res=0;
//	string so;
//	for(int i=0;i<s.size()-1;i++){
//		dem=1;
//		for(int j=i+1;j<s.size();j++){
//			if(s[i]==s[j]){
//				dem++;
//			}
//			if(dem>res){
//				res=dem;
//				so=s[i];
//			}
//		}
//	}
//	cout<<so;
	//c2
	int cnt[26]={0};
	for(int i=0;i<s.size();i++){
		cnt[s[i]-97]++;
	}
	int dem=0;
	string ss;
	for(int i=0;i<s.size();i++){
		if(cnt[s[i]-97]>=dem){
			dem=cnt[s[i]-97];
			ss=s[i];
		}
	}
	cout<<ss;
}
void in_ki_tu_chi_xuat_hien_1_lan(string s){
	int cnt[256]={0};
	for(int i=0;i<s.size();i++){
		cnt[s[i]]++;
	}
	for(int i=0;i<s.size();i++){
		if(cnt[s[i]]==1){
			cout<<s[i];
		}
	}
}
void sap_xep_theo_thu_tu_tu_dien(string s){
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while(ss>>tmp){
		v.push_back(tmp);
	}
	for(int i=0;i<v.size()-1;i++){
		for(int j=i+1;j<v.size();j++){
			if(v[i]>v[j]){
				swap(v[i],v[j]);
			}
		}
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}
void liet_ke_cac_tu_xuat_hien_trong_xau(string s){
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss>>tmp){
		cout<<tmp<<endl;
	}
}
void dem_so_lan_xuat_hien_cua_cac_tu_trong_xau(string s){
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while(ss>>tmp){
		v.push_back(tmp);
	}
	map<string,int> m;
	for(int i=0;i<v.size();i++){
		m[v[i]]++;
	}
	for(int i=0;i<v.size();i++){
		if(m[v[i]]!=0){
			cout<<v[i]<<"\t"<<m[v[i]]<<endl;
			m[v[i]]=0;
		}
	}
}
void tu_co_so_lan_xuat_hien_nhieu_nhat(string s){
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss>>tmp){
		v.push_back(tmp);
	}
	int dem=0;
	for(int i=0;i<v.size()-1;i++){
		for(int j=i+1;j<v.size();j++){
			if(v[i]>v[j]){
				swap(v[i],v[j]);
			}
		}
	}
	map<string,int> m;
	for(int i=0;i<v.size();i++){
		m[v[i]]++;
	}
	string so;
	for(int i=0;i<v.size();i++){
		if(m[v[i]]>dem){
			dem=m[v[i]];
			so=v[i];
		}
	}
	cout<<so<<"\t"<<dem;
}
void liet_ke_cac_tu_trong_cau_theo_thu_tu_xuat_hien(string s){
	vector<string> v;
	stringstream ss(s);
	string str;
	while(ss>>str){
		v.push_back(str);
	}
	for(int i=0;i<v.size();i++){
		int ok=1;
		for(int j=i-1;j>=0;j--){
			if(v[i]==v[j]){
				ok=0;
				break;
			}
		}
		if(ok){
			cout<<v[i]<<" ";
		}
	}
}
void loai_bo_tu_trong_xau(string s,int vt){
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss>>tmp){
		v.push_back(tmp);
	}
	for(int i=0;i<v.size();i++){
		if(i==vt){
			v.erase(v.begin()+vt);
		}
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}
void liet_ke_tu_xuat_hien_trong_xau1_khong_co_trong_xau2(string s1,string s2){
	vector<string> v1;
	vector<string> v2;
	stringstream ss1(s1),ss2(s2);
	string t1,t2;
	while(ss1>>t1){
		v1.push_back(t1);
	}
	while(ss2>>t2){
		v2.push_back(t2);
	}
	vector<string> k;
	for(int i=0;i<v1.size();i++){
		int ok=1;
		for(int j=0;j<v2.size();j++){
			if(v1[i]==v2[j]){
				ok=0;
				break;
			}
		}
		if(ok){
			k.push_back(v1[i]);
		}
	}
	sort(k.begin(),k.end());
	for(int i=0;i<k.size();i++){
		int ok=1;
		for(int j=i-1;j>=0;j--){
			if(k[i]==k[j]){
				ok=0;
				break;
			}
		}
		if(ok){
			cout<<k[i]<<" ";
		}
	}
}
void in_thuong(string &s){
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
}
void kiem_tra_xau_A_co_la_xau_con_cua_B(string s1,string s2){
	in_thuong(s1);
	in_thuong(s2);
	int i=0,j=0;
	int dem=0;
	while(i<s1.size() && j<s2.size()){
		if(s1[i]==s2[j]){
			++i;++j;
			dem++;
		}else{
			dem=0;
			i=0;
			++j;
		}
	}
	if(dem==s1.size()){
		cout<<"yes";
	}else{
		cout<<"no";
	}
}
string dao_nguoc(string s){
	string tmp;
	for(int i=s.length()-1;i>=0;i--){
		tmp.push_back(s[i]);
	}
	return tmp;
}
int kiem_tra_chuoi_doi_xung(string s){
	in_thuong(s);
	if(dao_nguoc(s)==s){
		cout<<"yes";
	}else{
		cout<<"no";
	}
}
void kiem_tra_mot_xau_co_doi_cung_khong(string s){
	int cnt[256]={0};
	for(int i=0;i<s.size();i++){
		cnt[s[i]]++;
	}
	int res=0;
	for(int i=0;i<256;i++){
		if(cnt[i]%2==1){
			res++;
		}
	}
	if(res<=1){
		cout<<"yes";
	}else{
		cout<<"no";
	}
}
void tinh_tong_cac_so_trong_xau(string s){
	int t=0,sum=0;
	for(int i=0;i<s.size();i++){
		if(isdigit(s[i])){
			t=t*10+s[i]-'0';
		}else{
			sum+=t;
			t=0;
		}
	}
	if(isdigit(s[s.size()-1])){
		sum+=t;
	}
	cout<<sum;
}
void so_lon_nhat_trong_xau(string s){
	int res=0;
	vector<int> v;
	for(int i=0;i<s.size();i++){
		if(isdigit(s[i])){
			res=res*10+s[i]-'0';
		}else{
			if(res!=0){
				v.push_back(res);
			}
			res=0;
		}
	}
	if(isdigit(s[s.size()-1])){
		v.push_back(res);
	}
	int max=v[0];
	for(int i=1;i<v.size();i++){
		if(max<v[i]){
			max=v[i];
		}
	}
	cout<<max;
}
//  2*x^5 + 3*x^2 + 5*x^0  +  4*x^5 + 2*x^1 + 10*x^0 ===>  6*x^5 + 3*x^2 + 2*x^1 + 15*x^0
int dt[10000],cnt=0;
void tinh_tong_2_da_thuc(string s){
	for(int i=0;i<s.size();i++){
		if(isdigit(s[i])){
			int tmp=0;
		    while(s[i]='*'){
			    tmp=tmp*10+s[i]-'0';
			    ++i;
		    }
		    i+=3;
		    int mu=0;
		    while(s[i]!=' '){
		     	mu=mu*10+s[i]-'0';
		    }
		dt[mu]+=tmp;
		}
	}
}
int xau_ki_tu_day_du(string s){
	int dem[s.size()];
	for(int i=0;i<s.size();i++){
		dem[i]=1;
		for(int j=0;j<i;j++){
			if(s[i]>s[j] && dem[i]<dem[j]+1){
				dem[i]=dem[j]+1;
			}
		}
	}
	int res=0;
	for(int i=0;i<s.size();i++){
		if(res<dem[i]){
			res=dem[i];
		}
	}
	return res;
}
void xep_da(string s){
	int dem=0;
	for(int i=0;i<s.size();i++){
		if(s[i]==s[i+1]){
			dem++;
		}
	}
	cout<<dem;
}
void kiem_tra_chuoi_co_tao_thanh_hello(string s){
	int j=0,i=0;
	int dem=0;
	string hl="hello";
	while(i<s.size()){
		if(hl[j]==s[i]){
			j++;
			++dem;
		}
		++i;
	}
	if(dem==hl.size()){
		cout<<"yes";
	}else{
		cout<<"no";
	}
}
void kiem_tra_chuoi_1_lien_ke(string s){
	int dem=0;
	int l=0,r=s.size()-1;
	while(l!=r){
		if(l=='0' && s[r-1]=='0'){
			++l;
			
		}
	}
}
void kt_xau_co_tao_thanh_sdt(string s){
	bool kt;
	if(s.size()>=11){
		if(s[0]=='8'){
			kt=true;
		}else{
			int vt=0;
			for(int i=0;i<s.size();i++){
				if(s[i]=='8'){
					vt=i;
					break;
				}
			}
			if(s.size()-vt>=11){
				kt=true;
			}
		}
	}
	if(kt==true){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}
// 1234 ===> vi tri cuoi xau la so chan (1-2) (2-2) (1-4) (2-4) (3-4) (4-4)
void xau_con_chan(string s){
	int res=0;
	for(int i=0;i<s.size();i++){
		if((s[i]-'0')%2==0){
			res+=i+1;
		}
	}
	cout<<res;
}
void ghep_xau_in_theo_thu_tu_nho_nhat(string s){
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while(ss>>tmp){
		v.push_back(tmp);
	}
	for(int i=0;i<v.size()-1;i++){
		for(int j=i+1;j<v.size();j++){
			if(v[i]>v[j]){
				swap(v[i],v[j]);
			}
		}
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i];
	}
}
int kt[]={1,5,10,50,100,500,1000};
string lm="IVXLCDM";
int gan(char c){
	for(int i=0;i<7;i++){
		if(c==lm[i]){
			return i;
		}
	}
}
void chuyen_so_la_ma_sang_so_thap_phan(string s){
	int res=kt[gan(s[s.size()-1])];
	for(int i=s.size()-1;i>0;i--){
		int pos1=gan(s[i]);
		int pos2=gan(s[i-1]);
		if(kt[pos1]<=kt[pos2]){
			res+=kt[pos2];
		}else{
			res-=kt[pos2];
		}
	}
	cout<<res;
}
void xau_con_lien_tiep_khac_nhau_dai_nhat(string s){
	int dem=1,res=0;
	for(int i=0;i<s.size()-1;i++){
		if(s[i]!=s[i+1]){
			dem++;
		    if(dem>res){
			    res=dem;
		    }
		}else{
			dem=1;
		}
	}
	cout<<res;
}
void xau_con_lien_tiep_giong_nhau_dai_nhat(string s){
	int dem=1,res=0;
	for(int i=0;i<s.size()-1;i++){
		if(s[i]==s[i+1]){
			dem++;
			if(dem>res){
				res=dem;
			}
		}else{
			dem=1;
		}
	}
	cout<<res;
}
int dao_nguoc(int a[],int n){
	int l=0,r=n-1;
	while(l<r){
		int tmp=a[l];
		a[l]=a[r];
		a[r]=tmp;
		++l;
		--r;
	}
}
void tinh_tong_2_so_nguyen_lon(string s1,string s2){
	int n1=s1.size(),n2=s2.size();
	int x[n1],y[n2],z[n1+1];
	for(int i=0;i<n1;i++){
		x[i]=s1[i]-'0';
	}
	for(int i=0;i<n2;i++){
		y[i]=s2[i]-'0';
	}
	dao_nguoc(x,n1);
	dao_nguoc(y,n2);
	for(int i=n2;i<n1;i++){
		y[i]=0;
	}
	int nho=0,vt=0;
	for(int i=0;i<n1;i++){
		int tmp=x[i]+y[i]+nho;
		z[++vt]=tmp%10;
		nho=tmp/10;
	}
	for(int i=vt-1;i>=0;i--){
		cout<<z[i];
	}
}
void hieu_2_so_nguyen_lon(string s1,string s2){

	
}
void tong_chu_so_cua_so_nguyen_lon(string s){
	int n=s.size();
	int x[n];
	for(int i=0;i<n;i++){
		x[i]=s[i]-'0';
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=x[i];
	}
	cout<<sum;
}
void kt_so_nguyen_lon_toan_chu_so_chan(string s){
	int x[s.size()];
	for(int i=0;i<s.size();i++){
		x[i]=s[i]-'0';
	}
	int dem=0;
	for(int i=0;i<s.size();i++){
		if(x[i]%2==0){
			dem++;
		}
	}
	if(dem==s.size()){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
bool songto(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
void so_nguyen_lon_toan_bo_la_so_ngto_va_tong_chu_so_tan_cung_bang_0(string s){
	int n=s.size();
	int x[n];
	for(int i=0;i<n;i++){
		x[i]=s[i]-'0';
	}
	int dem=0;
	for(int i=0;i<n;i++){
		if(songto(x[i])){
			dem++;
		}
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=x[i];
	}
	string k=to_string(sum);
	if(k[k.size()-1]-'0'==0 && dem==n){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
bool mang_thuan_nghich(int a[],int n){
	for(int i=0;i<n/2;i++){
		if(a[i]!=a[n-i-1]){
			return false;
		}
		return true;
	}
}
void so_co_chu_so_la_so_ngto_va_la_so_thuan_nghich(string s){
	int n=s.size();
	int x[n];
	for(int i=0;i<n;i++){
		x[i]=s[i]-'0';
	}
	int dem=0;
	for(int i=0;i<n;i++){
		if(songto(x[i])){
			dem++;
		}
	}
	if(mang_thuan_nghich(x,n)==true && dem==n){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
void chia_het_cho_6(string s){
	int n=s.size();
	int x[n];
	for(int i=0;i<n;i++){
		x[i]=s[i]-'0';
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=x[i];
	}
	if(x[n-1]%2==0 && sum%3==0){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
void chia_het_cho_4(string s){
	int n=s.size();
	int x[n];
	for(int i=0;i<n;i++){
		x[i]=s[i]-'0';
	}
	int cc=x[n-2]*10+x[n-1];
	if(n>2){
		if(x[n-1]==0 && x[n-2]==00 || cc%4==0){
			cout<<"YES";
		}else{
			cout<<"NO";
		}
	}else{
		int sum=x[n-2]*2+x[n-1];
		if(sum%4==0){
			cout<<"YES";
		}else{
			cout<<"NO";
		}
	}
}
void chia_het_cho_25(string s){
	int n=s.size();
	int x[n];
	for(int i=0;i<n;i++){
		x[i]=s[i]-'0';
	}
	int cc=x[n-2]*10+x[n-1];
	if(cc%25==0){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
void chia_het_cho_8(string s){
	int n=s.size();
	int x[n];
	for(int i=0;i<n;i++){
		x[i]=s[i]-'0';
	}
	int cc=x[n-3]*100+x[n-2]*10+x[n-1];
	if(cc%8==0){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
void chia_het_cho_2_3_5(string s){
	int n=s.size();
	int x[n];
	for(int i=0;i<n;i++){
		x[i]=s[i]-'0';
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=x[i];
	}
	if(x[n-1]==0 && sum%3==0){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
void so_nhi_phan_chia_het_cho_5(string s){
	int n=s.size();
	int x[n];
	for(int i=0;i<n;i++){
		x[i]=s[i]-'0';
	}
	int sum=0,tmp=1;
	for(int i=n-1;i>=0;i--){
		sum+=x[i]*tmp;
		tmp*=2;
		tmp%=10;
		sum%=10;
	}
	if(sum%5==0){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
void chia_so_nguyen_lon_lay_du(string s,long long m){
	int tmp=0;
	for(int i=0;i<s.size();i++){
		tmp=(tmp*10+s[i]-'0')%m;
	}
	cout<<tmp;
}
int gan(string s,long  long m){
	long long res=0;
	for(int i=0;i<s.size();i++){
		res=(res*10)+s[i]-'0';
		res%=m;
	}
	return res;
}
long long ucln(long long a,long long b){
	if(b==0){
		return a;
	}else{
		return ucln(b,a%b);
	}
}
void so_nguyen_lon_day_du(string s){
	int a[]={0,1,2,3,4,5,6,7,8,9};
	int n=s.size();
	int x[n];
	for(int i=0;i<n;i++){
		x[i]=s[i]-'0';
	}
	int dem=0;
	for(int i=0;i<10;i++){
		for(int j=0;j<n;j++){
			if(a[i]==x[j]){
				dem++;
				break;
			}
		}
	}
	if(dem==10){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
void so_uu_the(string s){
	int n=s.size();
	int x[n];
	for(int i=0;i<n;i++){
		x[i]=s[i]-'0';
	}
	int dc=0,dl=0;
	for(int i=0;i<n;i++){
		if(x[i]%2==0){
			dc++;
		}
	}
	for(int i=0;i<n;i++){
		if(x[i]%2!=0){
			dl++;
		}
	}
	if(dc>dl || dl>dc){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
int main(){
	string s;
	getline(cin,s);
	so_uu_the(s);
}
