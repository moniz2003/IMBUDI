#include <stdarg.h>
#include <unistd.h>

void	put_str(char *str, int *len)
{
	if(!str)
		str = "(null)";
	while(*str)
		*len += write(1, str++, 1);
}

void	put_digit(long long int nb, int base, int *len)
{
	char *hex;

	hex = "0123456789abcdef";
	if(nb < 0)
	{
		nb *= -1;
		*len += write(1, "-", 1);
	}
	if(nb >= base)
		put_digit((nb / base), base, len);
	*len += write(1, &hex[nb % base], 1);
}

int	ft_printf(const char *f, ...)
{
	int	len;
	va_list	p;
	
	len = 0;
	va_start(p, f);
	while(*f)
	{
		if(*f == '%' && *(f + 1))
		{
			f++;
			if(*f == 's')
				put_str(va_arg(p, char *), &len);
			else if(*f == 'd')
				put_digit((long long int)va_arg(p, int), 10, &len);
			else if(*f == 'x')
				put_digit((long long int)va_arg(p, unsigned int), 16, &len);
		}	
		else
			len += write(1, f, 1);
		f++;
	}
	return(va_end(p), len);
}
