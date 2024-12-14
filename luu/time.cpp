#include<bits/stdc++.h>
using namespace std;
main()
{
	time_t now=time(0);
	tm *ltm=localtime(&now);
	cout<<"year:"<<1900+ltm->tm_year<<endl;
	cout<<"month:"<<1+ltm->tm_mon<<endl;
	cout<<"day:"<<ltm->tm_mday<<endl;
	cout<<"time:"<<1+ltm->tm_hour<<":"<<1+ltm->tm_min<<":"<<1+ltm->tm_sec;
	char *dt=ctime(&now);
	cout<<dt<<endl;
	tm *gmtm=gmtime(&now);
	dt=asctime(gmtm);
	cout<<dt;
	/*
	cau truc tm{
	tm_sec;giay tu 0->61;
	tm_min; phut tu 0->59;
	tm_hour; gio tu 0->24;
	tm_mday; ngay tu 1->31;
	tm_mon; thang 0->12;
	tm_year; nam tu 1900;
	tm_wday; ngay tu chu nhat;
	tm_yday; ngay tu 1 thang 1;
	tm_isdst; gio tiet kiem anh sang ban ngay;
    }
    ham thoi gian:
    time_t time(time_t *time):tra ve thoi gian theo lich cua he thong,neu he thong khong co thoi gian se tra ve -1;

	char *ctime(const tim_t *time):tra ve 1 con tro toi 1 chuoi mau;

	struct tm *localtime(const tm_t *time):tra ve 1 con tro toi cau truc bieu tuong gio dia phuong;
	
	clock_t clock(void):tra ve 1 gia tri ma xap xi voi luong thoi gia cua chuong trinh dang goi da dang chay.tra ve -1
	neu thoi gian k co san;
	
	char *asctime(const struct tm* time):
	 
}
