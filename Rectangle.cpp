#include "Rectangle.h"
#include <iostream>

using namespace std;


Rectangle::Rectangle(float p_largeur, float p_longueur)
{	
	if (p_largeur > 0) {
		m_largeur = p_largeur;
	}
	if (p_longueur) {
		m_longueur = p_longueur;
	}
}


Rectangle::~Rectangle()
{
}


void Rectangle::dimension () {
	cout << "La largeur est de: " << m_largeur << endl;
	cout << "La longueur est de: " << m_longueur << endl;
}


void Rectangle::aire() {
	cout << "L'aire est de: " << m_largeur * m_longueur << endl;
}