#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<string.h>
#include<windows.h>
#include<unistd.h>
struct Soru{
	int soruid;
	char soru_metni[100];
	char sik_A[50];
	char sik_B[50];
	char sik_C[50];
	char sik_D[50];
	char dogru_cevap[2];
};
struct Skor{
	char isim[15];
	int skor;
};
int main(){
	system("color 3");
	//DEGÝÞKENLER
	int x,i,sorunumarasi=1,rastgele,cevap,puan=0,e=0,a,guncel=-1,se=0,sil[10],sileleman=0;
	//se skor elman
	char kulcevap[5];
	//DEGÝÞKENLER SON
	

	    struct Skor skorlar[5];
        struct Soru sorular[20];
		//birinci.soruid=0;
	    //e dizinin struct elemanýdýr.
	    //a rasgele atmak için
	    
	    
	    	                        //SORULAR
	    //SORU 1-
	    FILE *dosya = fopen("Sorular.txt","w");
	        sorular[e].soruid=e+1;
			strcpy(sorular[e].soru_metni,"Fas'in baskenti hangi sehirdir?");
			strcpy(sorular[e].sik_A,"Rabat");
			strcpy(sorular[e].sik_B,"Kazablanka");
			strcpy(sorular[e].sik_C,"Kahire");
			strcpy(sorular[e].sik_D,"Baðdat");
			strcpy(sorular[e].dogru_cevap,"a");
			e++;
		//SORULAR 2-
		   sorular[e].soruid=e+1;
			strcpy(sorular[e].soru_metni,"Fatih Sultan Mehmet in babasi kimdir?");
			strcpy(sorular[e].sik_A,"I. Mehmet");
			strcpy(sorular[e].sik_B,"Yildirim Beyazit");
			strcpy(sorular[e].sik_C,"II. Murat");
			strcpy(sorular[e].sik_D,"II. Abdulhamid");
			strcpy(sorular[e].dogru_cevap,"c");
			e++;
		//SORU 3-
		   sorular[e].soruid=e+1;
			strcpy(sorular[e].soru_metni,"Hangisi bir dogal sayidir?");
			strcpy(sorular[e].sik_A,"-1");
			strcpy(sorular[e].sik_B,"0");
			strcpy(sorular[e].sik_C,"2/5");
			strcpy(sorular[e].sik_D,"2.5");
			strcpy(sorular[e].dogru_cevap,"b");
			e++;
		//SORULAR 4-
		sorular[e].soruid=e+1;
			strcpy(sorular[e].soru_metni,"Hangisi Kurtulus Savasi sirasinda gerceklesmistir?");
			strcpy(sorular[e].sik_A,"Canakkale Zaferi");
			strcpy(sorular[e].sik_B,"Inonu Zaferi");
			strcpy(sorular[e].sik_C,"Kut ul Amare Zaferi");
			strcpy(sorular[e].sik_D,"I. Kosova Muharebesi");
			strcpy(sorular[e].dogru_cevap,"b");
			e++;
		//SORULAR 5-
		sorular[e].soruid=e+1;
			strcpy(sorular[e].soru_metni,"Galatasaray hangi yil UEFA kupasini almýstir?");
			strcpy(sorular[e].sik_A,"2000");
			strcpy(sorular[e].sik_B,"2001");
			strcpy(sorular[e].sik_C,"2002");
			strcpy(sorular[e].sik_D,"2003");
			strcpy(sorular[e].dogru_cevap,"a");
			for(i=0;i<5;i++){
			fprintf(dosya,"%d- %s\nA)%s\nB)%s\nC)%s\nD)%s\nCevap : %s\n",sorular[i].soruid,sorular[i].soru_metni,sorular[i].sik_A,sorular[i].sik_B,sorular[i].sik_C,sorular[i].sik_D,sorular[i].dogru_cevap);
		    }
			fclose(dosya);
			e++;
	    
	    
		for(i=0;;i++){
	    printf("\nMerhaba Hosgeldiniz\n1. Soru ekle\n2. Soru sil\n3. Sorulari goster ve guncelle\n4. Oyun oyna\n5. En yuksek skorlari goster\n6. Cik \n");
		for(i=0;;i++){
			scanf("%d",&x);
			if(!(x>0 && x<7)){
			printf("Hatali seçim... \nLütfen Tekrar deneyiniz!!\n");
			}
			if(x==1){
		    system("cls");
			sorular[e].soruid=e+1;
			printf("Soru giriniz : ");
			getchar();
			gets(sorular[e].soru_metni);
			printf("A)");
			scanf("%s",&sorular[e].sik_A);
			printf("B)");
			scanf("%s",&sorular[e].sik_B);
			printf("C)");
			scanf("%s",&sorular[e].sik_C);
			printf("D)");
			scanf("%s",&sorular[e].sik_D);
			printf("Cevabý giriniz :");
			scanf("%s",&sorular[e].dogru_cevap);
			FILE *dosya;
            dosya=fopen("Sorular.txt","a");
            fprintf(dosya,"%d- %s\nA)%s\nB)%s\nC)%s\nD)%s\nCevap: %s\n",sorular[e].soruid,sorular[e].soru_metni,sorular[e].sik_A,sorular[e].sik_B,sorular[e].sik_C,sorular[e].sik_D,sorular[e].dogru_cevap);
            fclose(dosya);
            e++;
            printf("Basarili");
			break;
			}
			
			
			if(x==2){
				system("cls");
			for(i=0;i<e;i++){
				if(!(i==sil[0]-1 || i==sil[1]-1 || i==sil[2]-1 || i==sil[3]-1 || i==sil[4]-1 || i==sil[5]-1|| i==sil[6]-1|| i==sil[7]-1|| i==sil[8]-1|| i==sil[9]-1)){
				printf("%d %s\n",sorular[i].soruid,sorular[i].soru_metni);	
			}
			}
		    for(i=0;;){
		    printf("Silmek istediginiz soru numarasini giriniz : ");
		    scanf("%d",&sil[sileleman]);
		    if(!(sil[sileleman]>0 && sil[sileleman]<e+1)){
			printf("Soru Bulunamadi\n");
			}
			else break;
		    }
		    FILE *dosya;
			dosya=fopen("Sorular.txt","w");
		    for(i=0;i<e;i++){
		    if(!(i==sil[0]-1 || i==sil[1]-1 || i==sil[2]-1 || i==sil[3]-1 || i==sil[4]-1 || i==sil[5]-1|| i==sil[6]-1|| i==sil[7]-1|| i==sil[8]-1|| i==sil[9]-1)){
		    fprintf(dosya,"%d- %s\nA)%s\nB)%s\nC)%s\nD)%s\nCevap : %s\n",sorular[i].soruid,sorular[i].soru_metni,sorular[i].sik_A,sorular[i].sik_B,sorular[i].sik_C,sorular[i].sik_D,sorular[i].dogru_cevap);
			}
			}
			fclose(dosya);
	           printf("Soru silindi.");
	           sileleman++;
			   break;
			}
			if(x==3){
				system("cls");
			
				// Sorularý Gösterme
				FILE *dosya;
				char karakter;
				dosya=fopen("Sorular.txt","r");
				do{
					karakter=getc(dosya);
				    printf("%c",karakter);
				}
				while(karakter!=EOF);
				fclose(dosya);
				// son
				//güncelleme
				for(i=0;;i++){
				printf("Guncellemek istediginiz soru numarasini giriniz : ");
				scanf("%d",&guncel);
				if(!(guncel>0 && guncel<e+1)){
			    printf("Soru Bulunamadi\n");
		      	}
		      	else break;
		        }
				printf("\nYeni soru metnini giriniz");
				getchar();
				gets(sorular[guncel-1].soru_metni);
				printf("A)");
			    scanf("%s",&sorular[guncel-1].sik_A);
			    printf("B)");
			    scanf("%s",&sorular[guncel-1].sik_B);
			    printf("C)");
			    scanf("%s",&sorular[guncel-1].sik_C);
			    printf("D)");
			    scanf("%s",&sorular[guncel-1].sik_D);
			    printf("Cevabý giriniz :");
			    scanf("%s",&sorular[guncel-1].dogru_cevap);
			    FILE *dosya2;
                dosya2=fopen("Sorular.txt","w");
                for(i=0;i<e;i++){
                fprintf(dosya2,"%d- %s\nA)%s\nB)%s\nC)%s\nD)%s\nCevap:%s\n",sorular[i].soruid,sorular[i].soru_metni,sorular[i].sik_A,sorular[i].sik_B,sorular[i].sik_C,sorular[i].sik_D,sorular[i].dogru_cevap);
				}
				fclose(dosya2);
				printf("Soru Guncellendi");
				break;
			}
			if(x==4){
				system("cls");
			int c;
			// c döngü degiþkeni
			a=e+1;
			for(c=0;c<5;c++){
			srand(time(NULL));
			rastgele=1+rand()%e;
			for(i=0;;i++){
				if((rastgele==sil[0] || rastgele==sil[1] || rastgele==sil[2] || rastgele==sil[3] || rastgele==sil[4] || rastgele==sil[5]|| rastgele==sil[6]|| rastgele==sil[7]|| rastgele==sil[8]|| rastgele==sil[9])){
			srand(time(NULL));
			rastgele=1+rand()%e;
			}
			else{
				break;	
			}	
			}
			printf("%s\nA)%s\nB)%s\nC)%s\nD)%s",sorular[rastgele-1].soru_metni,sorular[rastgele-1].sik_A,sorular[rastgele-1].sik_B,sorular[rastgele-1].sik_C,sorular[rastgele-1].sik_D);	
				
				printf("\nCevabinizi Giriniz :");
				scanf("%s",&kulcevap);
			if (strcmp(kulcevap, sorular[rastgele-1].dogru_cevap) == 0){
				printf("Cevap Dogru\n");
				puan++;
			}
		    else {
		    printf("Cevap yanlistir...\n");
			}
            sleep(1.5);
			system("cls");
		}
	
		printf("Puaniniz : %d\n",puan);
			int j,gecici;
				char geciciisim[15];
				printf("Isminizi Giriniz : ");
				scanf("%s",&skorlar[se].isim);
				skorlar[se].skor=puan;
				se++;
            for(i=0;i<se;i++)
           {
                      }
                              for(i=0;i<se;i++)
                              {
                                       for(j=0;j<se;j++)
                                       {
                                             if(skorlar[i].skor>=skorlar[j].skor)
                                             {
                                                    gecici=skorlar[i].skor;
                                                    strcpy(geciciisim,skorlar[i].isim);
                                                    skorlar[i].skor=skorlar[j].skor;
                                                    strcpy(skorlar[i].isim,skorlar[j].isim);
                                                    skorlar[j].skor=gecici;
                                                    strcpy(skorlar[j].isim,geciciisim);
                                                    }
                                         }
                              }
                  FILE *dosyaa;
				  dosyaa = fopen("Skorlar.txt","w");
				  if(se==4){
				  	se=3;
				  }
                  for(i=0;i<se;i++)
                 {
                 	fprintf(dosyaa,"%s    ==>  ",skorlar[i].isim);
                    fprintf(dosyaa,"%d\n",skorlar[i].skor);
                            }
                    fclose(dosya);
					printf("Skorlar olusturuldu");
				puan=0;
		break;
			
			}			
			
			if(x==5){
				system("cls");
					FILE *dosya;
				char karakter;
				dosya=fopen("Skorlar.txt","r");
				do{
					karakter=getc(dosya);
				    printf("%c",karakter);
				}
				while(karakter!=EOF);
				fclose(dosya);
				break;
		    }
			if(x==6) break;
	}
	if(x==6) break;
}
	return 0;
}
