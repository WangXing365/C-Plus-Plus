	//【例9.3】 定义求数组中的最大值的模板。
	template <class T>
	T fnMax( T *x, int size)
	{
		T  max = x[0];
		for(int i=1;i<size;i++)
		if(x[i]>max)max = x[i];
		return max;
	}
