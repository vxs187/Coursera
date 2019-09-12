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
 * @brief Header file for stats.c which contains the main function
 *
 * This header file provides an abstraction of calculations and 
 * printing functions via function calls. 
 *
 * @author Visweshwar Srinivasan
 * @date Sep 12 2019
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Finds minimum in the given array 
 *
 * Given a pointer to a char data set, this will give the minimum
 * value of the data set as output.
 *
 * @param ptr Pointer to data array
 *
 * @return void.
 */
unsigned char find_minimum(unsigned char *ptr);

/**
 * @brief Finds maximum in the given array 
 *
 * Given a pointer to a char data set, this will give the maximum
 * value of the data set as output.
 *
 * @param ptr Pointer to data array
 *
 * @return void.
 */
 unsigned char find_maximum(unsigned char *);

/**
 * @brief Finds minimum in the given array 
 *
 * Given a pointer to a char data set, this will give the mean
 * value of the data set as output.
 *
 * @param ptr Pointer to data array
 *
 * @return void.
 */
unsigned char find_mean(unsigned char *);

/**
 * @brief Finds minimum in the given array 
 *
 * Given a pointer to a char data set, this will give the median
 * value of the data set as output.
 *
 * @param ptr Pointer to data array
 *
 * @return void.
 */
unsigned char find_median(unsigned char *);

/**
 * @brief Finds minimum in the given array 
 *
 * Given a pointer to a char data set, this will give the sorted
 * array of the data set as output.
 *
 * @param ptr Pointer to data array
 *
 * @return void.
 */
unsigned char sort_array(unsigned char *,unsigned char *);

/**
 * @brief Sets a value of a data array 
 *
 * Given a pointer to a char data set, this will print the provided
 * data set values on the output window.
 *
 * @param ptr Pointer to data array
 *
 * @return void.
 */
void print_array(unsigned char *);

/**
 * @brief Sets a value of a data array 
 *
 * Given a pointer to a char data set, this will print the stats
 * of the data set provided.
 *
 * @param ptr Pointer to data array
 *
 * @return void.
 */
void print_statistics(unsigned char *);

#endif /* __STATS_H__ */
