#include <unistd.h>
void ft_is_nagative(int n) { write(1, &n, 1); }
int main(void) {
  int n = -2;
  int p = 0;
  if (n < p) {
    write(1, "N", 1);
  } else {
    write(1, "P", 1);
  }
}
// void ft_is_negative(int n) {
//   if (n >= 0) {
//     write(1, "P", 1);
//   } else {
//     write(1, "N", 1);
//   }
// }

// int main() {
//   int i;

//   i = 200;
//   ft_is_negative(i);
// }