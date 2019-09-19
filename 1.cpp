#include <stdio.h>
#include <conio.h>

 main()
{
struct khachhang
    {
      char hoten[30],msdh[10];
      int cst,css,dntt;
      float tien;
      } kh[100],tg;
int n,i,j,dg;
float tongtien;
printf("\n Nhap vao so luong khach hang su dung nuoc : ");
scanf("%d",&n);
printf("\nNHAP THONG TIN CHO TUNG KHACH HANG");
for(i=0;i<n;i++)
  {
    printf("\n Khach hang thu %d: ",i+1);
    printf("\n   Ho va ten: ");
    fflush(stdin);
    gets(kh[i].hoten);
    printf("   Ma khach hang: ");
    scanf("%s",&kh[i].msdh);
    printf("   Chi so truoc: ");
    scanf("%d",&kh[i].cst);
    printf("   Chi so sau: ");
    scanf("%d",&kh[i].css);
    kh[i].dntt=kh[i].css-kh[i].cst;
    }
printf("\nNhap vao gia thanh san xuat nuoc: ");
scanf("\n%d",&dg);
tongtien=0;
for(i=0;i<n;i++)
  {
    if(kh[i].dntt<10)
      kh[i].tien=kh[i].dntt*dg;
    else
       if(kh[i].dntt<=30)
          kh[i].tien=9*dg+(kh[i].dntt-9)*1.2*dg;
       else
          kh[i].tien=9*dg+ 21*1.2*dg+(kh[i].dntt-30)*1.5*dg;
    tongtien=tongtien+kh[i].tien;
    }
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
  {
    if(kh[i].tien<kh[j].tien)
      {
        tg=kh[i];
        kh[i]=kh[j];
        kh[j]=tg ;
        }
    }
printf("\nBANG TIEN NUOC CUA KHACH HANG\n");
printf("+-----+----------+-------+--------------+------------+----------+---------+\n");
printf("| STT |  Ho ten  | Ma KH | Chi so truoc | Chi so sau | Tieu thu | So tien |");
printf("\n+-----+----------+-------+--------------+------------+----------+---------+");
for(i=0;i<n;i++)
 {
  printf("\n|%5d|%10s|%7s|%13d|%13d|%10d|%9.0f|",i+1,kh[i].hoten,kh[i].msdh,kh[i].cst,kh[i].css,kh[i].dntt,kh[i].tien);
  printf("\n+-----+----------+-------+--------------+------------+----------+---------+");
  }
printf("\n|                           Tong tien                           |%9.0f|\n",tongtien);
printf("+-----+----------+-------+--------------+------------+----------+---------+");
getch();
}


