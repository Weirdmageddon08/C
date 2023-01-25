#include <unistd.h>
void ft_print_alphabet(char c) { write(1, &c, 1); }
void ft_print_reverse_alphabet(void) {
  char c = 'a';
  while (c <= 'z') {
    ft_print_alphabet(c);
    c++;
  }
}
int main() {
  ft_print_reverse_alphabet();
  return 0;
}