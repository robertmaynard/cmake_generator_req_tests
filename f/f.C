

#include <png.h>
#include <pthread.h>
#include <zlib.h>

#include <iostream>
#include <vector>

void *print_message_function(void *ptr) { return ptr; }

int main() {
  pthread_t thread1;
  std::vector<char> buffer;
  buffer.resize(1024);
  auto result =
      pthread_create(&thread1, NULL, print_message_function, buffer.data());
  (void) result;

  png_image image;
  (void) image;

  std::cout << zlibVersion() << std::endl;
  return 0;
}
