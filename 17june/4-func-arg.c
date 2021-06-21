// How the arguments passed or pushed to other function and how it assigns the value to arguments. 
// Explain using diagram for below example


void data_acq(int x, int y, int z)
{
	....	
}

int main()
{
  while(1)
  {
  	data_acq(int a, int b, int c)
  }

}

/*

1. pre-emble
1. allocate the size, move the value

	movl -12(%ebp) 
	movl -8(%ebp)
	movl -4(%ebp)

2. arguments are pushed to the stack 
starting from right most arg, push arg to the stacks
    //push the c, b and a to the stack

	pushl -4(%ebp)
	pushl -8(%ebp)
	pushl -12(%ebp)

3. invoke function call (using 'call') 

	call data_acq

4. read return value (read the 'eax' register)

5. relese the space allocated for the arg
6. leave

inside function call

1. pre-emble '{'
2. allocate the mem into the stack for the local variables
3. 




*/

