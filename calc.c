#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dynamicArray.h"
#include <assert.h>


/* param: s the string
   param: num a pointer to double
   returns: true (1) if s is a number else 0 or false.
   postcondition: if it is a number, num will hold
   the value of the number
*/
int isNumber(char *s, double *num)
{
	char *end;
	double returnNum;

	if(strcmp(s, "0") == 0)
	{
		*num = 0;
		return 1;
	}
	else
	{
		returnNum = strtod(s, &end);
		/* If there's anythin in end, it's bad */
		if((returnNum != 0.0) && (strcmp(end, "") == 0))
		{
			*num = returnNum;
			return 1;
		}
	}
	return 0;  //if got here, it was not a number
}

/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and
	their sum is pushed back onto the stack.
*/
void add (struct DynArr *stack)
{
	double x;
	double y;
	double z;

	/* FIXME: You will write this function */
	//assert(sizeDynArr(stack) >= 2);
	if(sizeDynArr(stack) < 2){
		printf("Not enough tokens on the stack to add.\n");
		return;
	}
	x = topDynArr(stack);
	popDynArr(stack);
	y = topDynArr(stack);
	popDynArr(stack);
	z = x + y;
	pushDynArr(stack, z);
}


/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and
	their difference is pushed back onto the stack.
*/
void subtract(struct DynArr *stack)
{
	double x;
	double y;
	double z;

	/* FIXME: You will write this function */
	//assert(sizeDynArr(stack) >= 2);
	if(sizeDynArr(stack) < 2){
		printf("Not enough tokens on the stack to subtract.\n");
		return;
	}
	x = topDynArr(stack);
	popDynArr(stack);
	y = topDynArr(stack);
	popDynArr(stack);
	z = y - x;
	pushDynArr(stack, z);
}


/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and
	their quotient is pushed back onto the stack.
*/
void divide(struct DynArr *stack)
{
	double x;
	double y;
	double z;

	/* FIXME: You will write this function */
	//assert(sizeDynArr(stack) >= 2);
	if(sizeDynArr(stack) < 2){
		printf("Not enough tokens on the stack to divide.\n");
		return;
	}
	if(topDynArr(stack) == 0) {
		printf("Cannot divide by 0.\n");
		return;
	}
	x = topDynArr(stack);
	popDynArr(stack);
	y = topDynArr(stack);
	popDynArr(stack);
	z = y / x;
	pushDynArr(stack, z);
}

/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and
	their quotient is pushed back onto the stack.
*/
void multiply(struct DynArr *stack)
{
	double x;
	double y;
	double z;

	/* FIXME: You will write this function */
	//assert(sizeDynArr(stack) >= 2;
	if(sizeDynArr(stack) < 2){
		printf("Not enough tokens on the stack to multiply.\n");
		return;
	}
	x = topDynArr(stack);
	popDynArr(stack);
	y = topDynArr(stack);
	popDynArr(stack);
	z = x*y;
	pushDynArr(stack, z);
}

/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and
	their quotient is pushed back onto the stack.
*/
void power(struct DynArr *stack)
{
	double x;
	double y;
	double z;

	/* FIXME: You will write this function */
	//assert(sizeDynArr(stack) >= 2;
	if(sizeDynArr(stack) < 2){
		printf("Not enough tokens on the stack to power.\n");
		return;
	}
	x = topDynArr(stack);
	popDynArr(stack);
	y = topDynArr(stack);
	popDynArr(stack);
	z = pow(y, x);
	pushDynArr(stack, z);
}

/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and
	their quotient is pushed back onto the stack.
*/
void square(struct DynArr *stack)
{
	double x;
	double z;

	/* FIXME: You will write this function */
	//assert(sizeDynArr(stack) >= 2;
	if(sizeDynArr(stack) < 1){
		printf("Not enough tokens on the stack to square.\n");
		return;
	}
	x = topDynArr(stack);
	popDynArr(stack);
	z = x*x;
	pushDynArr(stack, z);
}

/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and
	their quotient is pushed back onto the stack.
*/
void cube(struct DynArr *stack)
{
	double x;
	double z;

	/* FIXME: You will write this function */
	//assert(sizeDynArr(stack) >= 2;
	if(sizeDynArr(stack) < 1){
		printf("Not enough tokens on the stack to cube.\n");
		return;
	}
	x = topDynArr(stack);
	popDynArr(stack);
	z = x*x*x;
	pushDynArr(stack, z);
}

/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and
	their quotient is pushed back onto the stack.
*/
void absolute(struct DynArr *stack)
{
	double x;
	double z;

	/* FIXME: You will write this function */
	//assert(sizeDynArr(stack) >= 2;
	if(sizeDynArr(stack) < 1){
		printf("Not enough tokens on the stack to abs.\n");
		return;
	}
	x = topDynArr(stack);
	popDynArr(stack);
	z = fabs(x);
	pushDynArr(stack, z);
}

/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and
	their quotient is pushed back onto the stack.
*/
void squareroot(struct DynArr *stack)
{
	double x;
	double z;

	/* FIXME: You will write this function */
	//assert(sizeDynArr(stack) >= 2;
	if(sizeDynArr(stack) < 1){
		printf("Not enough tokens on the stack to squareroot.\n");
		return;
	}
	x = topDynArr(stack);
	popDynArr(stack);
	z = sqrt(x);
	pushDynArr(stack, z);
}

/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and
	their quotient is pushed back onto the stack.
*/
void exponential(struct DynArr *stack)
{
	double x;
	double z;

	/* FIXME: You will write this function */
	//assert(sizeDynArr(stack) >= 2;
	if(sizeDynArr(stack) < 1){
		printf("Not enough tokens on the stack to exponential.\n");
		return;
	}
	x = topDynArr(stack);
	popDynArr(stack);
	z = exp(x);
	pushDynArr(stack, z);
}

/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and
	their quotient is pushed back onto the stack.
*/
void natLog(struct DynArr *stack)
{
	double x;
	double z;

	/* FIXME: You will write this function */
	//assert(sizeDynArr(stack) >= 2;
	if(sizeDynArr(stack) < 1){
		printf("Not enough tokens on the stack to natLog.\n");
		return;
	}
	x = topDynArr(stack);
	popDynArr(stack);
	z = log(x);
	pushDynArr(stack, z);
}

/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and
	their quotient is pushed back onto the stack.
*/
void normalLog(struct DynArr *stack)
{
	double x;
	double z;

	/* FIXME: You will write this function */
	//assert(sizeDynArr(stack) >= 2;
	if(sizeDynArr(stack) < 1){
		printf("Not enough tokens on the stack to Log.\n");
		return;
	}
	x = topDynArr(stack);
	popDynArr(stack);
	z = log10(x);
	pushDynArr(stack, z);
}

double calculate(int numInputTokens, char **inputString)
{
	int i;
	double result = 0.0;
	char *s;
	struct DynArr *stack;
	double *putablenumber = malloc(sizeof(double));

	//set up the stack
	stack = createDynArr(20);

	// start at 1 to skip the name of the calculator calc
	for(i=1;i < numInputTokens;i++)
	{
		s = inputString[i];

		// Hint: General algorithm:
		// (1) Check if the string s is in the list of operators.
		//   (1a) If it is, perform corresponding operations.
		//   (1b) Otherwise, check if s is a number.
		//     (1b - I) If s is not a number, produce an error.
		//     (1b - II) If s is a number, push it onto the stack

		if(strcmp(s, "+") == 0)
			add(stack);
		else if(strcmp(s,"-") == 0)
			subtract(stack);
		else if(strcmp(s, "/") == 0)
			divide(stack);
		else if(strcmp(s, "x") == 0)
			multiply(stack);
		else if(strcmp(s, "^") == 0)
			power(stack);
		else if(strcmp(s, "^2") == 0)
			square(stack);
		else if(strcmp(s, "^3") == 0)
			cube(stack);
		else if(strcmp(s, "abs") == 0)
			absolute(stack);
		else if(strcmp(s, "sqrt") == 0)
			squareroot(stack);
		else if(strcmp(s, "exp") == 0)
			exponential(stack);
		else if(strcmp(s, "ln") == 0)
			natLog(stack);
		else if(strcmp(s, "log") == 0)
			normalLog(stack);
		else
		{
			// These three deal with the possibility of a number
			if(strcmp(s, "pi") == 0){
				pushDynArr(stack, 3.14159265);
			}
			else if(strcmp(s, "e") == 0){
				pushDynArr(stack, 2.7182818);
			}
			else if(isNumber(s, putablenumber) == 1){
				pushDynArr(stack, *putablenumber);
			}
			else{
				printf("You have entered a non-valid argument. This simply will not do.\n");
				printf("The erroneous argument was: %s\n", s);
				printf("Goodbye.\n");
				return 1;
			}

		}
	}	//end for

	/* FIXME: You will write this part of the function (2 steps below)
	 * (1) Check if everything looks OK and produce an error if needed.
	 * (2) Store the final value in result and print it out.
	 */
	if(sizeDynArr(stack) != 1){
		printf("You did not put in a proper ratio of arguments.\n");
		return 1;
	}
	/* Consider nixing this section
	else if(isNumber(topDynArr(stack), putablenumber) == 0){
		printf("You seriously messed up somehow. The stack value is not a number?");
		return 1;
	}
	*/
	else{
		result = topDynArr(stack);
	}
	printf("Result: %f\n", result);
	return result;
}

int main(int argc , char** argv)
{
	// assume each argument is contained in the argv array
	// argc-1 determines the number of operands + operators
	if (argc == 1)
		return 0;

	calculate(argc,argv);
	return 0;
}
