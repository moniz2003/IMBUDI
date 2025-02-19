

int max(int* guia, unsigned int len)
{
	int r = guia[0];
	unsigned int i = 0;
	
	while(len == 0)
		return(0);
	while(i <= len)
	{
		if(r <= guia[i])
			r = guia[i];
		i++;
	}
	return(r);
}
