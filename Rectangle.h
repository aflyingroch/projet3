#pragma once
class Rectangle
{
public:
	Rectangle(float p_largeur, float p_recLongueur);
	~Rectangle();
	void dimension();
	void aire();
private:
	float m_largeur;
	float m_longueur;
};

