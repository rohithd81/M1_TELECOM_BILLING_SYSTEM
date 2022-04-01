#include "unity.h"
#include "telecom_operations.h"
#define PROJECT_NAME "TELECOM BILLING SYSTEM"
/* Prototypes for all the test functions */

/**
 * @brief Testing function for Telecom_Billing_System
 * 
 */

/**
 * @brief Testing function for add records
 * 
 */
void test_addrecord();

/**
 * @brief Testing function for list records
 * 
 */
void test_listrecord();

/**
 * @brief Testing function for deleting records
 * 
 */
void test_deleterecord();
/**
 * @brief Testing function for searching records
 * 
 */
void test_searchrecord();
/**
 * @brief Testing function for modify records
 * 
 */
void test_modifyrecord();
/**
 * @brief Testing function for payment
 * 
 */
void test_payment();

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
    RUN_TEST(test_addrecord);
    RUN_TEST(test_listrecord);
    RUN_TEST(test_deleterecord);
    RUN_TEST(test_searchrecord);
    RUN_TEST(test_modifyrecord);
    RUN_TEST(test_payment);

    /* Close the Unity Test Framework */
    return UNITY_END;
}