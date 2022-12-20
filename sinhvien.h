#include "Date.h"

typedef struct
{
	char maHs[15];
	char hoten[50];
	int gt; //0-nu,1-nam,2-khac
	Date ns;
	char noisnh[50];
	char lop[10];
} sv;
void nhapSV(Hs *d);
void inHs(Hs d);
void nhapDSHs(Hs *d,int *n);
void inDSHs(Hs *d, int n);
int timHs(Hs *d, int n);
void ghimDSHs(Hs *d, int n);
void docDSHs(Hs *d, int *n);

