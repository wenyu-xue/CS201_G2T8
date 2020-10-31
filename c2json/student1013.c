#include <stdio.h>

int main() {
	
	double a,b,c,d,e,UK1,UK2,UK3,y,x,v,n,m,q,w,r,t,u;
	int oc1,oc2,oc3,znak=0;
	
	printf("Unesite bodove za Tarika:");
	printf("\nI parcijalni ispit: ");
	scanf("%lf", &a); if (a<0 || a>20) { printf("Neispravan broj bodova"); return 0; }
	printf("II parcijalni ispit: ");
	scanf("%lf", &b); if (b<0 || b>20) { printf("Neispravan broj bodova"); return 0; }
	printf("Prisustvo: ");
	scanf("%lf", &c); if(c<0 || c>10) { printf ("Neispravan broj bodova"); return 0; }
	printf("Zadace: ");
	scanf("%lf", &d); if(d<0 || d>10) { printf ("Neispravan broj bodova"); return 0; }
	printf("Zavrsni ispit: ");
	scanf("%lf", &e); if(e<0 || e>40) { printf("Neispravan broj bodova"); return 0 ; }

	return 0;
}
