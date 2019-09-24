#include <iostream>
#include <cmath>

//=====================================Declaraciones=================================
int semana(int s);
int siglo(int s);
int mes(int m);
//=====================================Func principal=================================
int main(){
	int d, bis = 1, m, s, a , totall, aa, total;
	bool c = false;
	while (true){
	std::cout<<"Ingrese el anio (ejemplo: 2002)"<<std::endl;
	std::cin>>a;
	bis = a%4;
	if(a  >= 1600 && a <= 2099)
		break;
	else
	std::cout<<"Debe ser de 1600 hasta 2099!!"<<std::endl;
	}
	if (a >= 1600 && a <= 1699)
		s= a-1600;
	else if (a >= 1700 && a <= 1799)
		s= a-1700;
	else if (a >= 1800 && a <= 1899)
		s= a-1800;
	else if (a >= 1900 && a <= 1999)
		s= a-1900;
	else if (a >= 2000 && a <= 2099)
			s= a-2000;
	while (true){
		std::cout<<"Ingrese el mes: "<<std::endl;
		std::cin>>m;
		if(m <= 12 && m >= 1)
			break;
		else
			std::cout<<"El valor ingresado es incorrecto"<<std::endl;	
		}
		while (true){
			std::cout<<"Ingrese el dia: "<<std::endl;
			std::cin>>d;
			if(d <= 31 && d >= 1)
				break;
			else
				std::cout<<"El valor ingresado es incorrecto"<<std::endl;
		}
		if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 12){
			c = true;
		}
		else if(m == 4 || m == 6 || m == 9 || m == 11){
			if(d <= 30){
				c = true;
			} else{
				std::cout<<"Ingresaste el dia mal.";
			}
		} else{
			if (bis == 0){
				if(d <= 29){
					std::cout<<"Este anio es bisiesto."<<std::endl;
					c = true;
					bis = 3;
				} else{
					std::cout<<"Ingresaste el dia mal.";
				}
			} else{
				if(d <= 28){
					c = true;	
				} else{
					std::cout<<"Ingresaste el dia mal.";
				}
			}
		}
	if (c == true){
		m = mes(m);
		a = siglo(a);
		aa = (int)s/4;
		if( bis == 3){
			m = 2;
		}
		total = d+m+s+aa+a;
		trunc(total);
		totall = (int)total% 7;
		semana(totall);
	}
	return 0;
}
//=====================================Funciones=================================
int siglo(int s){
	if (s >= 1600 && s <= 1699)
		s = 6;
	else if (s >= 1700 && s <= 1799)
		s = 4;
	else if (s >= 1800 && s <= 1899)
		s = 2;
	else if (s >= 1900 && s <= 1999)
		s = 0;
	else
		s = 6;
	return s;
}
int mes(int m){
	int select = 0;
	if (m == 1 || m == 10)
		select = 0;
	else if (m == 4 || m == 7)
		select = 6;
	else if (m == 9 || m == 12)
		select = 5;
	else if (m == 6)
		select = 4;
	else if (m == 3 || m == 11 || m == 2)
		select = 3;
	else if (m == 8)
		select = 2;
	else if (m == 5)
		select = 1;
	return select;
}
int semana(int s){
	switch (s){
		case 1: std::cout<<"El dia elegido fue lunes"<<std::endl;
		break;
		case 2: std::cout<<"El dia elegido fue martes"<<std::endl;
		break;
		case 3: std::cout<<"El dia elegido fue miercoles"<<std::endl;
		break;
		case 4: std::cout<<"El dia elegido fue jueves"<<std::endl;
		break;
		case 5: std::cout<<"El dia elegido fue viernes"<<std::endl;
		break;
		case 6: std::cout<<"El dia elegido fue sabado"<<std::endl;
		break;
		default:
			std::cout<<"El dia elegido fue domingo"<<std::endl;
	}
	return s;
}

