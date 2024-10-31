
/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief The implementation file of the C1M1 assignment
 *
 *
 * @author Rezvan Mir
 * @date 10/31/2024
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the statistics of a given array
 *
 * This function takes the resulting statistics done on an array
 * which are: minimum, maximum, mean and median, and print those
 * values on the screen
 * 
 * @param min The minimum number of the given array
 * @param max The maximum number of the given array
 * @param median The median of the given array
 * @param mean The mean of the given array
 *
 * @return void
 */
void print_statistics (unsigned char min, unsigned char max, unsigned char median, float mean);


/**
 * @brief Prints the components of a given array
 * 
 * This function takes an array as input, prints the array to the screen
 * 
 * @param ptr Pointer to the array of data
 * @param size Number of elements in the array
 * 
 * @return Void()
 */
void print_array(unsigned char *ptr, unsigned int size);


/**
 * @brief Finds the median of the given array
 *
 * This function takes the given array and finds
 * its median.
 * 
 * @param ptr Pointer to the array of data
 * @param size Number of elements in the array
 *
 * @return unsigned char median value in array.
 */
unsigned char find_median (unsigned char *ptr, unsigned int size);


/**
 * @brief Finds the mean of the given array
 *
 * This function takes an array as input,
 * Calculates the average of array numbers.
 * 
 * @param ptr Pointer to the array of data
 * @param size Number of elements in the array
 *
 * @return float avrg value in array.
 */
float find_mean (unsigned char *ptr, unsigned int size);


/**
 * @brief Finds the maximum of the given array
 *
 * MAX(x, y) => (((x) > (y)) ? (x) : (y))
 * his function takes an array as input. In order to maximum 
 * the first element and compare the second element with this element. 
 * If the next element is larger than the first element, 
 * the displacement takes place.
 * 
 * @param ptr Pointer to the array of data
 * @param size Number of elements in the array
 *
 * @return unsigned char maximum value in array.
 */
unsigned char find_maximum (unsigned char *ptr, unsigned int size);


/**
 * @brief Finds the minimum of the given array
 *
 * MIN(x, y) => (((x) < (y)) ? (x) : (y))
 * This function takes an array as input. It minimum the first
 * element and compares the next element with the first element.
 * If the next element is smaller than the first element, the displacement 
 * takes place.
 * 
 * @param ptr Pointer to the array of data
 * @param size Number of elements in the array
 *
 * @return unsigned char minimum value in array.
 */
unsigned char find_minimum (unsigned char *ptr, unsigned int size);


/**
 * @brief Sorts the given array from the largest to smallest
 *
 * This function takes an array as input. Examines the elements of the array in order
 * and sorts them in descending order.
 * Uses selection sort to sort array elements.
 * 
 * @param ptr Pointer to the array of data
 * @param size Number of elements in the array
 * 
 */
void sort_array (unsigned char *ptr, unsigned int size);

#endif /* __STATS_H__ */