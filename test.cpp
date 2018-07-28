#include <iostream>
#include "test.h"

using namespace std;



test::test(int p_nbVal, int p_maxVal)
{
	m_maxVal = p_maxVal;
	m_nbVal = p_nbVal;
	m_val = new int[m_nbVal];
	for (int i = 0; i < m_nbVal; i++) {
		m_val[i] = rand() % p_maxVal + 1;
	}
}


test::~test()
{
	delete m_val;
	m_val = 0;
}


void test::affiche() {
	cout << "La valeur max est de: " << m_maxVal << " et le nombre de valeur est de: " << m_nbVal << endl;
	for (int i = 0; i < m_nbVal; i++) {
		cout << m_val[i] << " ";
	}
	cout << endl;
}