
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
	float turk1d,turk1y,turk1net,mat1d,mat1y,mat1net,sos1d,sos1y,sos1net,fen1d,fen1y,fen1net,edbd,edby,edbnet,mat2d,mat2y,mat2net,tarih1d,tarih1y,tarih1net,cog1d,cog1y,cog1net,tarih2d,tarih2y,tarih2net,cog2d,cog2y,cog2net,feld,fely,felnet,dind,diny,dinnet,fizikd,fiziky,fiziknet,kimd,kimy,kimnet,biyd,biyy,biynet,not,obp,tyt,aytsay,aytest,aytsoz;
	
	printf("****TYT ve AYT PUAN HESAPLAMA****\n\n");
	printf("Lise Diploma Notunuzu Giriniz:"); scanf("%f",&not); printf("\n");
	printf("TYT\n");
	printf("--------\n\n");
	printf("Türkçe\n");
	printf("Doðru:"); scanf("%f",&turk1d);
	printf("Yanlýþ:"); scanf("%f",&turk1y);
	turk1net=turk1d-(turk1y*0.25);
	printf("Netiniz:%.2f\n\n",turk1net);
	printf("Matematik\n");
	printf("Doðru:"); scanf("%f",&mat1d);
	printf("Yanlýþ:"); scanf("%f",&mat1y);
	mat1net=mat1d-(mat1y*0.25);
	printf("Netiniz:%.2f\n\n",mat1net);
	printf("Sosyal Bilgiler\n");
	printf("Doðru:"); scanf("%f",&sos1d);
	printf("Yanlýþ:"); scanf("%f",&sos1y);
	sos1net=sos1d-(sos1y*0.25);
	printf("Netiniz:%.2f\n\n",sos1net);
	printf("Fen Bilgisi\n");
	printf("Doðru:"); scanf("%f",&fen1d);
	printf("Yanlýþ:"); scanf("%f",&fen1y);
	fen1net=fen1d-(fen1y*0.25);
	printf("Netiniz:%.2f\n\n",fen1net);
	printf("AYT\n");
	printf("--------\n");
	printf("Edebiyat\n");
	printf("Doðru:"); scanf("%f",&edbd);
	printf("Yanlýþ:"); scanf("%f",&edby);
	edbnet=edbd-(edby*0.25);
	printf("Netiniz:%.2f\n\n",edbnet);
	printf("Matematik\n");
	printf("Doðru:"); scanf("%f",&mat2d);
	printf("Yanlýþ:"); scanf("%f",&mat2y);
	mat2net=mat2d-(mat2y*0.25);
	printf("Netiniz:%.2f\n\n",mat2net);
	printf("Sosyal Bilgiler-1\n");
	printf("Tarih\n");
	printf("Doðru:"); scanf("%f",&tarih1d);
	printf("Yanlýþ:"); scanf("%f",&tarih1y);
	tarih1net=tarih1d-(tarih1y*0.25);
	printf("Netiniz:%.2f\n\n",tarih1net);
	printf("Coðrafya\n");
	printf("Doðru:"); scanf("%f",&cog1d);
	printf("Yanlýþ:"); scanf("%f",&cog1y);
	cog1net=cog1d-(cog1y*0.25);
	printf("Netiniz:%.2f\n\n",cog1net);
	printf("Sosyal Bilgiler-2\n");
	printf("Tarih\n");
	printf("Doðru:"); scanf("%f",&tarih2d);
	printf("Yanlýþ:");  scanf("%f",&tarih2y);
	tarih2net=tarih2d-(tarih2y*0.25);
	printf("Netiniz:%.2f\n\n",tarih2net);
	printf("Coðrafya\n");
	printf("Doðru:"); scanf("%f",&cog2d);
	printf("Yanlýþ:"); scanf("%f",&cog2y);
	cog2net=cog2d-(cog2y*0.25);
	printf("Netiniz:%.2f\n\n",cog2net);
	printf("Felsefe\n");
	printf("Doðru:"); scanf("%f",&feld);
	printf("Yanlýþ:"); scanf("%f",&fely);
	felnet=feld-(fely*0.25);
	printf("Netiniz:%.2f\n\n",felnet);
	printf("Din Kültürü\n");
	printf("Doðru:"); scanf("%f",&dind);
	printf("Yanlýþ:"); scanf("%f",&diny);
	dinnet=dind-(diny*0.25);
	printf("Netiniz:%.2f\n\n",dinnet);
	printf("Fen Bilgisi\n");
	printf("Fizik\n");
	printf("Doðru:"); scanf("%f",&fizikd);
	printf("Yanlýþ:"); scanf("%f",&fiziky);
	fiziknet=fizikd-(fiziky*0.25);
	printf("Netiniz:%.2f\n\n",fiziknet);
	printf("Kimya\n");
	printf("Doðru:"); scanf("%f",&kimd);
	printf("Yanlýþ:"); scanf("%f",&kimy);
	kimnet=kimd-(kimy*0.25);
	printf("Netiniz:%.2f\n\n",kimnet);
	printf("Biyoloji\n");
	printf("Doðru:"); scanf("%f",&biyd);
	printf("Yanlýþ:"); scanf("%f",&biyy);
	biynet=biyd-(biyy*0.25);
	printf("Netiniz:%.2f\n\n",biynet);
	printf("*************************************************************\n");
	obp=not*0.6;
	tyt=turk1net*3.3+mat1net*3.3+sos1net*3.4+fen1net*3.4+100+obp;
	aytsay=turk1net*1.32+mat1net*1.32+sos1net*1.36+fen1net*1.36+mat2net*3+fiziknet*2.85+kimnet*3.07+biynet*3.07+100+obp;
	aytest=turk1net*1.32+mat1net*1.32+sos1net*1.36+fen1net*1.36+mat2net*3+edbnet*3+tarih1net*2.8+cog1net*3.33+100+obp;
	aytsoz=turk1net*1.32+mat1net*1.32+sos1net*1.36+fen1net*1.36+edbnet*3+tarih1net*2.8+cog1net*3.33+tarih2net*2.91+cog2net*2.91+felnet*3+dinnet*3.33+100+obp;
	
	printf("TYT Puanýnýz=%.3f\n\n",tyt);
	printf("AYT\n");
	printf("Sayýsal Puanýnýz=%.3f\n",aytsay);
	printf("Eþit Aðýrlýk Puanýnýz=%.3f\n",aytest);
	printf("Sözel Puanýnýz=%.3f\n",aytsoz);
	
	
}
