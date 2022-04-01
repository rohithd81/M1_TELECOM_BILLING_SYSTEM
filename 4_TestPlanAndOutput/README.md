# Test Plan and Corresponding Output
## High Level Test Plan
| Test ID | Description | Exp.i/p | Exp.o/p | Actual o/p | Type of Test |
| --------|:------------|:--------|:--------|:-----------|:-------------|
| H_01 | check if the add record works properly | proper function execution | formatted add page | formatted add page | Requirement |
| H_02 | check if the list record works properly | proper function execution | formatted list page | formatted list page | Requirement |
| H_03 | check if the delete record works properly | proper function execution | formatted delete page | formatted delete page | Requirement |
| H_04 | check if the search record works properly | proper function execution | formatted search page | formatted search page | Requirement |
| H_05 | check if the modify record works properly | proper function execution | formatted modify page | formatted modify page | Requirement |
| H_06 | check if the payment works properly | proper function execution | formatted payment page | formatted payment page | Requirement |
## Low Level Test Plan
| Test ID | Description | Exp.i/p | Exp.o/p | Actual o/p | Type of Test |
| --------|:------------|:--------|:--------|:-----------|:-------------|
| L_01 | verify if the add record works properly | details of individual | details added successfully | details added successfully | Technical |
| L_02 | verify if the list record works properly | name of the individual | name present ->list; name absent->not found | name present ->list; name absent->not found | Techinical |
| L_03 | verify if the delete record works properly | name of the individual |  name present ->delete; name absent->not found | name present ->delete; name absent->not found | Techinical |
| L_04 | verify if the search record works properly | name of the individual |  name present ->search; name absent->not found | name present ->search; name absent->not found | Techinical |
| L_05 | verify if the modify record works properly | name of the individual |  name present ->modify; name absent->not found | name present ->modify; name absent->not found | Techinical |
| L_06 | verify if the payment works properly | details of individual | number present->payment;number absent->not found | number present->payment;number absent->not found | Technical |