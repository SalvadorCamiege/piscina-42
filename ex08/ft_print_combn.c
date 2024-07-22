#include <unistd.h>

int main(void){
	ft_print_combn(5);
	return (0);
}

void ft_putchar(char a) // funÃ§Ã£o para imprimir um caracter de um char
{
	write(1, &a, 1);
}

void ft_putvet(int vet[], int n) // funÃ§Ã£o para imprimir os caracteres de um vetor
{
	int c; // contador do while (loop)

	c = 0; // contador do while (loop) inicia em 0
	while (c < n) // loop para imprimir cada um dos algarismos, um por um
	{
		ft_putchar(vet[c] + '0'); // imprime o valor armazenado na posiÃ§Ã£o c do vetor
		c++; // incremento do contador do while
	}
}

int ft_get_index(int combn[], int n)
{
	int c; // contador do while (loop)
	int max; // valor mÃ¡ximo ???

	c = 0;
	max = 10 - n;
	while (c < n)
	{
		if (combn[c] == max)
			return (c - 1);
		if (c == (n - 1) && combn[c] < max)
			return (c);
		c++;
		max++;
	}
	return (-1);
}

void ft_increment(int vet[], int n, int index)
{
	int c;

	c = index + 1;
	vet[index]++;
	while (c <= n)
	{
		vet[c] = vet[c - 1] + 1;
		c++;
	}
}

void	ft_print_combn(int n)
{
	int combn[n]; // vetor usado para armazenar os algarismos das combinaÃ§Ãµes a serem impressas
	int c; // contador do while (loop)
	int pos_index; // posiÃ§Ã£o do index ???

	if (n >= 10 || n <= 0) // verificaÃ§Ã£o da condiÃ§Ã£o 0 < n < 10
		return ;
	else // cÃ³digo para printar a sequÃªncia de combinaÃ§Ãµes
	{
		c = 0; // contador do while (loop) inicia em 0
		while (c < n) // loop para atribuir valores ao vetor da primeira combinaÃ§Ã£o (012...)
		{
			combn[c] = c; // atribuiÃ§Ã£o de valor de cada dÃ­gito para compor o vetor da primeira combinaÃ§Ã£o
			c++;
		}
		while (ft_get_index(combn, n) != -1) //loop para imprimir os vetores de todas combinaÃ§Ãµes exceto a Ãºltima, seguidos de ", "
		{
			pos_index = ft_get_index(combn, n); // variÃ¡vel que armazena o index ???
			ft_putvet(combn, n); // imprime o vetor combn[]
			ft_increment(combn, n, pos_index); // incrementa ???
			write(1, ", ", 2); // imprime o separador ", "
		}
		ft_putvet(combn, n); // imprime o vetor da Ãºltima combinaÃ§Ã£o da sequÃªncia (ex.: 789)
	}
}
