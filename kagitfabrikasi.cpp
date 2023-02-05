#include<stdio.h>
#include<math.h>

int main()
{
	int secim,yil,yilcevir,ay=1,gider=0,gelir,kar=0,odeme,departman,calisan=0,s,a=0,k;
	double maaliyet=50;
	printf("\t\t\t\tKAGIT FABRIKASI MAALIYET - KAR HESAPLAMA\n");
	printf("**********************************************************************************************************************\n");
	printf("kac yillik sure icinde hesaplama yapmak istersiniz:");
	scanf("%d",&yil);
	yilcevir=yil*12;	

		
	while(ay<=yilcevir)
	{
		while(kar<maaliyet)
		{			
			printf("%d . Ay",ay);			
			while(a<11)
			{
				printf("\nCALISAN ODEMELERI\n");
				printf("\n1)Genel Mudur\n2)Genel Mudur Yardimcisi\n3)Bilgisayar Muhendisi\n4)Elektrik Muhendisi\n5)Orman Muhendisi\n6)Makine Muhendisi"
				"\n7)Diger Muhendisler\n8)Teknik Personel\n9)Buro Personeli\n10)Isci\n11)Diger giderler\n");
				printf("\nhangi departman icin odeme bilgisi girmek istersiniz:");
				scanf("%d",&departman);				
				
				switch(departman){
				case 1:
						printf("Genel mudur departmaninda calisan kisi sayisini girin: ");
						scanf("%d",&calisan);
						printf("Genel mudur maas tutarini girin: ");
						scanf("%d",&odeme);
						gider=gider+(calisan*odeme);
						a++;
						printf("\n%d",a);
					break;					
					case 2:
						printf("Genel mudur yardimcisi departmaninda calisan kisi sayisini girin: ");
						scanf("%d",&calisan);
						printf("Genel mudur yardimcisi maas tutarini girin: ");
						scanf("%d",&odeme);
						gider=gider+(calisan*odeme);
						a++;
						printf("\n%d",a);
					break;
					case 3:
						printf("Bilgisayar muhendisligi departmaninda calisan kisi sayisini girin: ");
						scanf("%d",&calisan);
						printf("Bilgisayar muhendisligi maas tutarini girin: ");
						scanf("%d",&odeme);
						gider=gider+(calisan*odeme);
						a++;
						printf("\n%d",a);
					break;
					case 4:
						printf("Elektrik muhendisligi departmaninda calisan kisi sayisini girin: ");
						scanf("%d",&calisan);
						printf("Elektrik muhendisligi maas tutarini girin: ");
						scanf("%d",&odeme);
						gider=gider+(calisan*odeme);
						a++;
						printf("\n%d",a);
					break;
					case 5:
						printf("Orman muhendisligi departmaninda calisan kisi sayisini girin: ");
						scanf("%d",&calisan);
						printf("Orman muhendisligi maas tutarini girin: ");
						scanf("%d",&odeme);
						gider=gider+(calisan*odeme);
						a++;
						printf("\n%d",a);
					break;
					case 6:
						printf("Makine muhendisligi departmaninda calisan kisi sayisini girin: ");
						scanf("%d",&calisan);
						printf("Makine muhendisligi maas tutarini girin: ");
						scanf("%d",&odeme);
						gider=gider+(calisan*odeme);
						a++;
						printf("\n%d",a);
					break;
					case 7:
						printf("Diger muhendislik departmaninda calisan kisi sayisini girin: ");
						scanf("%d",&calisan);
						printf("Diger muhendislerin maas tutarini girin: ");
						scanf("%d",&odeme);
						gider=gider+(calisan*odeme);
						a++;
						printf("\n%d",a);
					break;
					case 8:
						printf("Teknik personel departmaninda calisan kisi sayisini girin: ");
						scanf("%d",&calisan);
						printf("Teknik personel  maas tutarini girin: ");
						scanf("%d",&odeme);
						gider=gider+(calisan*odeme);
						a++;
						printf("\n%d",a);
					break;
					case 9:
						printf("Buro personeli departmaninda calisan kisi sayisini girin: ");
						scanf("%d",&calisan);
						printf("Buro personeli maas tutarini girin: ");
						scanf("%d",&odeme);
						gider=gider+(calisan*odeme);
						a++;
						printf("\n%d",a);
					break;
					case 10:
						printf("Isci departmaninda calisan kisi sayisini girin: ");
						scanf("%d",&calisan);
						printf("Isci maas tutarini girin: ");
						scanf("%d",&odeme);
						gider=gider+(calisan*odeme);
						a++;
						printf("\n%d",a);
					break;
					case 11:
						printf("Diger giderlerin tutarini girin: ");
						scanf("%d",&k);
						gider=gider+k;
						a++;
					break;
					default:
						printf("\nLutfen 1-10 arasinda bir sayi giriniz: ");
				}
				printf("\nToplam gider :%d\n",gider );
				printf("Toplam kar : %d\n",kar);
				printf("**********************************************************************************************************************\n");
				}
				
				
				printf("BUTUN DEPARTMANLARIN MAAS BILGILERI GIRILDI...\n");
				ay++;
				a=0;
				printf("50 makinenin kagit satisindan elde edilen tutar: ");
				scanf("%d",&gelir);
				printf("\nToplam gider :%d\n",gider );
				printf("\nToplam gelir :%d\n",gelir );				
				kar=kar+(gelir-gider);				
				printf("Toplam kar : %d\n",kar);
				gider=0;			
				
				
			}
			

			printf("%d . AYDA MAALIYETI CIKARIP KAR ETMEYE BASLAYACAK...",ay);	
			break;  //programý durdurmazsam sonsuz döngüye giriyor
	}
}
