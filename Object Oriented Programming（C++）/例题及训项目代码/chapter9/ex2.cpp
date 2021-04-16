//【例9.2】 定义求两个数中的最小值的模板。
	template <class T>
	T fnMin(T x, T y)
	{
		T  min;
		if(x<=y)min = x;
		else    min = y; 
		return min;
	}
