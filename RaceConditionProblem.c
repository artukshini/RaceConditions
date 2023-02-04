#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

// Shared resource: the runway
int runway = 0;

// Plane 1 thread function
void *plane1(void *arg) {
  printf("Plane 1 is preparing to land\n");
  // Check if the runway is clear
  if (runway == 0) {
    // Land plane
    printf("Plane 1 is landing\n");
    runway = 1;
  } else {
    // Wait for the runway to be clear
    printf("Plane 1 is waiting for the runway to clear\n");
  }
  return NULL;
}

// Plane 2 thread function
void *plane2(void *arg) {
  printf("Plane 2 is preparing to land\n");
  // Check if the runway is clear
  if (runway == 0) {
// Land plane
    printf("Plane 2 is landing\n");
    runway = 1;
  } else {
    // Wait for the runway to be clear
    printf("Plane 2 is waiting for the runway to clear\n");
  }
  return NULL;
}

int main(void) {
  pthread_t plane1_thread, plane2_thread;
  pthread_create(&plane1_thread, NULL, plane1, NULL);
  pthread_create(&plane2_thread, NULL, plane2, NULL);
  pthread_join(plane1_thread, NULL);
  pthread_join(plane2_thread, NULL);
  return 0;
}
