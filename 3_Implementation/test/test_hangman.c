#include "unity.h"
#include "unity_internals.h"
#include<string.h>
#include<stdio.h>

/* Modify these two lines according to the project */
#include <../inc/hangman.h>
#define PROJECT_NAME "Hangman"

/* Prototypes for all the test functions */
void test_sketch_one(void);
void test_sketch_two(void);
void test_sketch_three(void);
void test_sketch_four(void);
void test_sketch_five(void);
void test_retrieve_word(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_sketch_one);
  RUN_TEST(test_sketch_two);
  RUN_TEST(test_sketch_three);
  RUN_TEST(test_sketch_four);
  RUN_TEST(test_sketch_five);
  RUN_TEST(test_retrieve_word);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_sketch_one(void) {
  TEST_ASSERT_EQUAL(1, sketch_one());
}
void test_sketch_two(void) {
  TEST_ASSERT_EQUAL(2, sketch_two());
}
void test_sketch_three(void) {
  TEST_ASSERT_EQUAL(3, sketch_three());
}

void test_sketch_four(void) {
  TEST_ASSERT_EQUAL(4, sketch_four());
}

void test_sketch_five(void) {
  TEST_ASSERT_EQUAL(5, sketch_five());
}

void test_retrieve_word(void){
  char word[100];
  TEST_ASSERT_EQUAL(0,strcmp("Spider monkey",retrieve_word(405,word,"animals.txt")));
  TEST_ASSERT_EQUAL(0,strcmp("Star Wars: Episode V - The Empire Strikes Back",retrieve_word(12,word,"movies.txt")));
  TEST_ASSERT_EQUAL(0,strcmp("Dysart",retrieve_word(2665,word,"places.txt")));
}