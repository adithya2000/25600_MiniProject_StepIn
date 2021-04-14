/** 
* @file hangman.h
* Contains the operations used in hangman game
*
*/
#ifndef __HANGMAN_H__
#define __HANGMAN_H__

/**
 * @brief This is a function which prints the sketch for the first wrong guess when called
 * 
 * @return An integer value to use for testing the function
 */
int sketch_one();

/**
 * @brief This is a function which prints the sketch for the second wrong guess when called
 * 
 * @return An integer value to use for testing the function
 */
int sketch_two();

/**
 * @brief This is a function which prints the sketch for the third wrong guess when called
 * 
 * @return An integer value to be used for testing the function
 */
int sketch_three();


/**
 * @brief This is a function which prints the sketch for the fourth wrong guess when called
 * 
 * @return An integer value to be used for testing the function
 */
int sketch_four();

/**
 * @brief This is a function which prints the sketch for the fifth wrong guess when called
 * 
 * @return An integer value to be used for testing the function
 */
int sketch_five();

/**
 * @brief This is a function to retrieve a word from the variable.
 * 
 * @param n (nth word to be retrieved from the file)
 * @param word (the pointer to the string in which the word is to be stored)
 * @return char* 
 */
char* retrieve_word(int n,char* word);

/**
 * @brief This is a function to retrieve the number of lines from a text file
 * 
 * @param choice  choice of user's category
 * @return int 
 */
int count_lines(int choice);
#endif  /* #define __SKETCHING_OPERATIONS_H__ */