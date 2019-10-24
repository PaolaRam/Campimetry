#include <iostream>
#include <math.h>
#include <conio.h>


using namespace std;

int main(){
	
	double prxy[11][4];
	double pi=3.14159265;
	int j=0;
	int l=0;
	double d;
	
	cout<<"Introduce la distancia entre los ojos:";
	cin>>d;
	d=d/2;

	prxy[0][0]=0;
	prxy[1][0]=30;
	prxy[2][0]=60;
	prxy[3][0]=90;
	prxy[4][0]=120;
	prxy[5][0]=150;
	prxy[6][0]=180;
	prxy[7][0]=210;
	prxy[8][0]=240;
	prxy[9][0]=270;
	prxy[10][0]=300;
	prxy[11][0]=330;
	
	while(j<12){
		cout<<"Introduce el valor del radio para "<<prxy[j][0]<<":";
		cin>>prxy[j][1];
		j++;
	}
	
	while(l<12){
	prxy[l][2]=prxy[l][0]*pi/180;
	prxy[l][3]=-d-(prxy[l][1])*cos(prxy[l][2]);
	prxy[l][4]=(prxy[l][1])*sin(prxy[l][2]);
		cout<<prxy[l][3]<<" ";
		cout<<prxy[l][4]<<"\n";
		l++;
	}
	
	getch();
	return 0;
	
}
