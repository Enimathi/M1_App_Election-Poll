# Test Cases 


| ID     | Description | Status |
| ---      | ---       | --- 	|
| T_1 | Admin Username= Admin and Password=admiN     |	True, and Login Successfull|
| T_2     | Admin Username= ADMIN and Password=admiN  | False, Login Fail|
| T_3     | User ID=2021btcse00021 | True, casted the vote |
| T_4     | User ID=2021btcse000222| False, Incorrect User ID|
| T_5   | Ban ID=555| False, ID not found|
|  T_6  | Ban ID=21| True, ID Banned|
|  T_7   | Remove duplicate votes user id=55|False, This User didn't caste the vote|
|  T_8   | Remove duplicate votes user id=22|True, Vote removed|
|  T_9   | If in Admin panel option 6 choosen logout|True, logout success |
|  T_10  | If in Admin panel option 5 choosen shows election result|True, shows result |
