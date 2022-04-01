#include "unity.h"

#define PROJECT_NAME  "Telecom billing system"

/* Prototypes for all the test functions */

/**
 * @brief Testing function for telecom_billing_system
 * 
 */
extern void test_telecom();

/* Required by the unity test framework */
void setUp(void)
{
}

/* Required by the unity test framework */
void tearDown(void)
{
}

/* Start of the application test */
int main(void)
{
    /* Initiate the Unity Test Framework */
    UnityBegin(NULL);

    /* Run Test functions */
    RUN_TEST(test_telecom);
    
     /* Close the Unity Test Framework */
    return (UnityEnd());
}