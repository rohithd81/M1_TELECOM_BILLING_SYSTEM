/**
 * @file telecom_operations.h
 * @author Rohith D (rohith.d.2018.ece@ritchennai.edu.in)
 * @brief Header file for telecom billing system
 * @version 0.1
 * @date 2022-04-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _TELECOM_OPERATIONS_H_
#define _TELECOM_OPERATIONS_H_

/**
 * @brief add customer records
 * @return shows customer record
 */
void addrecords();


/**
 * @brief show customer records in a list 
 * 
 */
void listrecords();

/**
 * @brief deleting customer records
 * @return shows removed customer record 
 */
void deleterecords();

/**
 * @brief searching customer records
 * @return shows searched customer record
 */
void searchrecords();

/**
 * @brief update customer records
 * @return shows modified customer record
 */
void modifyrecords();

/**
 * @brief add payments for the customer
 * @return shows payment bill
 */
void payment();

#endif /* #define _TELECOM BILLING SYSTEM_H_ */

