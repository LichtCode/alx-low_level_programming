#ifndef MAIN_H
#define MAIN_H

int get_bit(unsigned long int deci_n, unsigned int index);
int set_bit(unsigned long int *deci_n, unsigned int index);
int clear_bit(unsigned long int *deci_n, unsigned int index);
unsigned int binary_to_uint(const char *bi);
void print_binary(unsigned long int deci_n);
int _putchar(char c);
int get_endianness(void);
unsigned int flip_bits(unsigned long int deci_n, unsigned long int m);
int _atoi(const char *s);

#endif
