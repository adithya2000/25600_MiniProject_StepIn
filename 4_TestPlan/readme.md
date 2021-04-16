# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |To set a random word for the user to guess from a text file in each category, a number denoting the nth word in the file was given and compared the word retrieved when the function was called with the respective arguements(Function checked was char* retrieve_word(int n,char* word, char* name))|  405, 12, 2665|Spider monkey, Star Wars: Episode V - The Empire Strikes Back, Dysart|Spider monkey, Star Wars: Episode V - The Empire Strikes Back, Dysart|Requirement based |
|  H_02       |--------------------------------------------------------------|  ------------|-------------|----------------|Scenario based    |
|  H_03       |--------------------------------------------------------------|  ------------|-------------|----------------|Boundary based    |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |To check whether figure appears after first wrong guess (int sketch_one())|  NA|First Image should be printed|First image was printed|Requirement based |
|  L_02       |To check whether figure appears after second wrong guess (int sketch_two())|  NA|Second Image should be printed|Second image was printed|Requirement based    |
|  L_03       |To check whether figure appears after third wrong guess (int sketch_three()))|  NA|Third Image should be printed|Third image was printed|Requirement based    |
|  L_04       |To check whether figure appears after fourth wrong guess (int sketch_four())|  NA|Fourth Image should be printed|Fourth image was printed|Requirement based |
|  L_05       |To check whether figure appears after fifth wrong guess (int sketch_five())|  NA|Fifth Image should be printed|Fifth image was printed|Requirement based |
