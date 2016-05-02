class matrix_class
{
public:
	matrix_class(int row, int col);
	void populate();
	std::vector<std::vector<int> > operator*(const vector_class& vec);
	std::vector<std::vector<int> > operator*(const matrix_class& m);
	const int _rows;
	const int _cols;
	std::vector<std::vector<int> > mat;
//	vector<int> mat;
};

