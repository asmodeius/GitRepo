double pow(double a, unsigned int i){
	double result=1;
	
	for(unsigned int k=0; k<i ; ++k){
		result *=a;
	}

	return result;
}