#include <iostream>
#include <string>
#include "stacktype.cpp"
using namespace std;

string infixToPostFix(string infix);
int higherPrecedenceValidate(char op1, char op2);
int getPrecedence(char op);
int evaluatePostFix(string postfix);

int main()
{
    string infix,postfix;
    int result;
    cout << "Infix: ";
    cin >> infix;
    postfix = infixToPostFix(infix);
    cout << "\nPostfix: " << postfix << endl << endl;
    if(postfix != "Wrong Expression"){
        result = evaluatePostFix(postfix);
        cout << "Result: " << result << endl << endl; 
    }


}

string infixToPostFix(string infix){
    StackType<char> operators;
    bool isMathOperatorRepeated = false;
    bool isOperaendRepeated = false;
    string postfix;
    for(int i = 0; i < infix.size(); i++){
        // Checking Operator
        if(infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/'){
            // if(isMathOperatorRepeated){
            //     postfix = "Wrong Expression";
            //     while (!operators.IsEmpty())
            //     {
            //         operators.Pop();
            //     }
            //     break;
            // }
            while (!operators.IsEmpty() && higherPrecedenceValidate(operators.Top(),infix[i]))
            {
                postfix = postfix + operators.Top();
                operators.Pop();
            }
            operators.Push(infix[i]);
            isMathOperatorRepeated = true;
            isOperaendRepeated = false;

        }
        // Checking Operand
        else if(infix[i] >= '0' && infix[i] <= '9')
        {
            if(isOperaendRepeated){
                postfix = "Wrong Expression";
                while (!operators.IsEmpty())
                {
                    operators.Pop();
                }
                break;
            }
            postfix = postfix + infix[i];
            isMathOperatorRepeated = false;
            isOperaendRepeated = true;

        }
        //Checking open bracket
        else if(infix[i] == '(' ){
            operators.Push(infix[i]);
            isMathOperatorRepeated = false;
            isOperaendRepeated = false;
        }

        //Checking closing bracket
        else if(infix[i] == ')' ){

            while (!operators.IsEmpty() && operators.Top() != '(')
            {
                postfix = postfix + operators.Top();
                operators.Pop();
            }
            if(operators.IsEmpty()){
                postfix = "Wrong Expression";
                break;

            }
            else{
                operators.Pop();
            }
            // poping the opening bracket
            isMathOperatorRepeated = false;
            isOperaendRepeated = false;
        }

        // checking that infix expression has invalid char
        else{
            postfix = "Wrong Expression";
            while (!operators.IsEmpty())
            {
                operators.Pop();
            }
            break;
        }


    }
    // poping rest of element from the stack..
    while (!operators.IsEmpty())
    {
        if(operators.Top() == '('){
            postfix = "Wrong Expression";
            break;
        }
        else{
            postfix = postfix + operators.Top();
            operators.Pop();
        }
    }
    return postfix;
}

int evaluatePostFix(string postfix){
    StackType<int> finalNumbers;
    for(int i = 0; i < postfix.size(); i++){
        // Checking Operator
        if(postfix[i] == '+' || postfix[i] == '-' || postfix[i] == '*' || postfix[i] == '/'){
            int resultOfTwoNumber;
            int number2 = finalNumbers.Top();
            finalNumbers.Pop();
            int number1 = finalNumbers.Top();
            finalNumbers.Pop();
            switch (postfix[i])
            {
                case '+':
                    resultOfTwoNumber = number1 + number2;
                    break;
                case '-':
                    resultOfTwoNumber = number1 - number2;
                    break;
                case '*':
                    resultOfTwoNumber = number1 * number2;
                    break;
                case '/':
                    resultOfTwoNumber = number1 / number2;
                    break;
            }
            finalNumbers.Push(resultOfTwoNumber);

        }
        // Checking Operand
        else if(postfix[i] >= '0' && postfix[i] <= '9')
        {
            finalNumbers.Push(postfix[i] - '0');

        }
    }
    return finalNumbers.Top();
}


int higherPrecedenceValidate(char operator1, char operator2)
{
    int op1 = getPrecedence(operator1);
    int op2 = getPrecedence(operator2);
    if(op1 == op2)
        return true;
    return op1 > op2 ?  true: false;
}

int getPrecedence(char op)
{
    int weight = 0;
    switch(op)
    {
    case '+':
    case '-':
        weight = 1;
        break;
    case '*':
    case '/':
        weight = 2;
        break;
    }
    return weight;
}