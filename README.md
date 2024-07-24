# The process

# What is the process

when a program is executing we call it a process

# What is the system call fork

fork is a system call function ,its used to create a new process

# fork() in c programming language

the call of this function can create a new process through a parent process so we will call it a child process

it creates process as its place of call so when we call it first it creates a new process and once we call it again it creates also a two new processes

the number of the processes can be demonstated with (2^n) - 1

For example :

fork() // line1
fork() // line2
fork() // line3

the total number of process created is 7

Notice : This rule of total numbers is determined very well however sometimes its meaning less when you call this function in other way so we have to say you should draw your meaning of calling this function by drawing the way of creating the process in the previous way its just a creation of process by a tree form

    The shape of processes forked in the last example :

                                             f
                                        /        \     LINE1
                                     f            p1
                                  /      \      /   \          LINE2
                                 f      p3     p1      p2
                              /     \   / \    /  \   /  \         LINE 3
                             f     p5 p3  p4  p1  p6  p7  p2

but do you know that you can create your own shape
for example we need to generate a process 3 that the parent is p2 and p1 doesnt have another child than 1 is this possible ?
the answer is yes

explanation :

use the values of fork returned

fork() returns pid_t which is mean the process id

fork() can return 3 values which are :

value < 0 : means creation failed of the process

value == 0 : means the child process created successfully

value > 0 : its father process id

so what happen when we call fork inside condition of it

lets say

pid_t p = fork()

if(p == 0){
fork()
}else{
//Nothing.......
}

here the parent creates a new child and the child creates also his own child

p1 -> p2 -> p3

so p1 is the grand parent of p3

so with your own call of fork you can set the path of the creation with yours
