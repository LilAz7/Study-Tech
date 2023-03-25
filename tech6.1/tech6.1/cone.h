class Cone {
public:
	// Конструкторы
	Cone();
	Cone(double r, double h);
	Cone(double x, double y, double z, double r, double h);

	// Методы
	void input();
	void output();
	double surfaceArea();
	double volume();

private:
	double x, y, z; // Координаты центра основания
	double r; // Радиус основания
	double h; // Высота
};

