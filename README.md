# RaceConditions
This project is a simple version of the Auto-Flight Controller system that simulates simultaneous flights using "threads" and also simulates random collisions between these flights using race condition problem, using those concurrent or competing threads.

This code is written in C language, "gedit" is used as a text editor and it is implemented & tested in Ubuntu. Anyways it is OS independent so it can also work in Windows or any other OS.


    Steps to execute this code:
    
    1. Open Terminial in Ubuntu
    2. gedit filename.c (in this file we put the code which produces the race condition or we put the code which solves race condition, in other case if you download the files you can skip this step and continue from the step 3)
    3. gcc -o filename filename.c
    4. /.filename (this step executes the code, to produce race condition it has to be executed a few times or many times until it collides two processes but when the problem is solved with semaphore, you can execute how many times you want and it will not collide the processes)
    
This image shows the Race Condition Problem, where two planes are landing although there is space only for one of them.
![Picture1](https://user-images.githubusercontent.com/94797611/216790469-c4cbe9d3-fc6e-4d28-bbc1-3938a23ea728.png)
    
    
And in this image we see the results after using semaphore to avoid Race Condition. 
![Picture2](https://user-images.githubusercontent.com/94797611/216790517-a1b24392-c139-4c90-82eb-308ab70d3fe3.png)

      
