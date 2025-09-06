// Wilson Quilli and Mostafa Amer
// Date: 11/25/24
// Nova's Model Code

#include <iostream>
#include <cmath>
#include <string> 
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

//Sec. 4 Ex: 8 - Determine the Greater of Two Numbers
int greaterthan(int num1, int num2) {  //Declaring Function for greater number, Exercise #38
        if (num1 > num2) { //If num1 input is greater than num2:
                return num1; //Returns num1 input
            } else { //If it's not:
                return num2; //Returns num2 input
            }
            }

//Sec. 4 Ex: 9 - Add Two Integers  
int add(int num1, int num2) {   //Declaring Function for adding integers, Exercise #39
    return num1 + num2; //Outputs the num1 input + num2 input
}

//Sec. 4 Ex: 10 - Subtract Two Integers
int subtract(int num1, int num2) {  //Declaring Function for subtracting integers, Exercise #40
    return num1 - num2; //Outputs the num1 input - num2 input
}

//Sec. 5 Ex: 6 - Study = Success
int predict(int HoursPrediction, int m, int b) { //I created Predict function containing variables, Hours, m and, b to later use for recursion
    return m * HoursPrediction + b; //This is the slope equation it will take m * hours + b or y = mx + b
}

//Sec. 7 Ex: 1 - House Finder
int predictPrice(int size, int m, int b) { //I created predictPrice function containing variables, size, m, and b to later use for recursion
    return m * size + b; //This is the slope equation it will take m * size + b or y = mx + b
}

//Sec. 7 Ex: 2 - Weight Loss Helper
double predictWeightLoss(int hoursExercised, double m, double b) { //I created predictWeightLoss function containing variables, hoursexercised, m, and b to later use for recursion
    return m * hoursExercised + b; //This is the slope equation it will take m * hoursExercised + b or y = mx + b
}

//Sec. 6 Ex: 3 - Calculate Factorials through Recursion
int factorial(int n) { //I created factorial function with variable n
    if (n <= 1) //If n is less than or equal to 1
        return 1; //It will just return 1
    else
        return n * factorial(n - 1); //If not, it will compute factorial function; n * factorial(n - 1)
}

//Sec. 6 Ex: 4 - Calculate Fibonacci through Recursion
int Fibonacci(int n) { //I created Fibonacci function with variable n
    if (n <= 1) //If n is less than or equal to 1
        return n; //It will just return 1
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2); //If not, it will compute the Fibonacci function; Fibonacci(n - 1) + Fibonacci(n - 2)
}

//Sec. 6 Ex: 5 - Calculate Sum of Digits Through Recursion
int sumDigit(int n) { //I created sumDigit function with variable n
    if (n == 0) //If n = 0
        return 0; //It will return 0
    else
        return n % 10 + sumDigit(n / 10); //If not, it will compute the sumDigit function; n % 10 + sumDigit(n / 10)
}

//Sec. 5 Ex: 7 - Basic Class
//Exercise #1 in Classes Example: Basic Class
class Animal { //This will create the Class Animal
    public: //This will make the members of the Class Animal accessible outside of the class
        string name; //This will store the pet's name 
        void speak() { //This will output the Animal's name
            cout << "Pet's name is: " << name << endl; //This will output my Animal's name
        }
};

//Sec. 5 Ex: 8 - Constructor and Destructor Class
//Exercise #2 in Classes Example: Constructor and Destructor
class Box { //This will create the Class Box
    public: //This will make the members of the class Box accessible outside of the class
        Box() { //This is the constructor and runs when a box is created
            cout << "Box is being Created!" << endl; //Then it will print out, Box is being created
        }
        ~Box() { //This is the Destructor 
            cout << "Box was Destroyed!" << endl; //Then, it will print out Box was destroyed 
        }
};

//Sec. 5 Ex: 9 - Inheritance Park
//Exercise #7 in Classes Example: Inheritance
class Vehicle { //This will create the Class Vehicle
    public: //This will make the members of the class Box accessible outside of the class
        string brand = "Tesla"; //This will define a new variable, Brand and in my string, I used the Tesla car
        void honk() { //This will create a new function called Honk
            cout << "Honk, Honk!" << endl; //This will print out Honk, Honk!
        }
};

class Car : public Vehicle { //This will create a new Car Class and inherit all of it's member of the class Vehicle as well
    private:
        string model; //Declaring string variable model
        int year; //Declaring integer variable year
        int mileage; //Declaring integer mileage

    public: //This will make the members of the class Box accessible outside of the class
        Car(string carModel, int carYear, int carMileage)
            : model(carModel), year(carYear), mileage(carMileage) {} //This will create a new variable Model and in my example, I used Tesla Model S

        void drive() { //This creates a new function called Drive
            cout << "Let's go for a ride!" << endl; //This will print out Let's go for a ride, if called
        }

    void displaycarinfo() const { //Function for displaying your car's information through recursion
        cout << "Car Information:\n";
        cout << "Model: " << model << "\n"; //Print's Your Car's Model
        cout << "Year: " << year << "\n"; //Print's Your Car's Year
        cout << "Mileage: " << mileage << " miles\n"; //Print's Your Car's Mileage
    }

    void updateMileage(int newMileage) { //Function for displaying and updating Mileage through recursion
        if (newMileage > mileage) { //If the newMilage is greater than mileage
            mileage = newMileage; //The newMilage will be the new value for mileage in your car's information
            cout << "Mileage is now " << mileage << " miles.\n"; //Display your car's new milage
        } else {
            cout << "Error: New Mileage Must actually be new.\n"; //If not, the newMilage won't be updated and stay the same value
        }
    }

    string getModel() const { return model; } //Prints out the model of the car
    void setModel(string carModel) { model = carModel; } //Nova will memorize the car's model
};

//Sec. 5 Ex: 10 - Run in the Park
class Person { //This will create the Class Person
    public: //This will make the members of the Class Person accessible outside of the class 
        string name; //Declares String name
        int age; //Declares integer age

        Person(string n, int a) : name(n), age(a) {}

        void read() { //This creates a new function called Read
            cout << name << " is reading." << endl; //This will print out Wilson or Mostafa are reading
        }

        void run() { //This creates a new function called Run
            cout << name << " is running in the park." << endl; //This will print out Wilson or Mostafa are running in the park
        }
};

//Sec. 6 Ex: 6 - Encapsulation Class
class Circle { //Created a new class Circle
    private:
        double radius; //Declaring the double variable, radius

    public:
        void setRadius(double r) { //Setting radius equal to r
            radius = r;
        }

        double getArea() const { //Formula/Function for the area of a Circle
            return 3.14 * radius * radius; //Pi * Radius^2
        }
};

//Sec. 6 Ex: 7 - Overloading Constructors Class
class Rectangle { //Created a new class Rectangle
    public:
        int width, height; //Declared integer variables width and height

        Rectangle() { //This is my set rectangle values to calculate the area
            width = 5; 
            height = 5;
        }

        Rectangle(int w, int h) { //This is for user input rectangle to calculate their own area
            width = w;
            height = h;
        }
        
        int getArea() const { //Formula/Function for getting the area of a rectangle
            return width * height; //Area = width * height
        }
};

//Sec. 6 Ex: #8 - Static Members Class
class Account { //Created a class Account
    public:
        static int count;

        Account() {
            count ++; //Adds the inputted new accounts and creates them
        }
};

//Sec. 6 Ex: #9 - Inverse Matrix Calculator 2
double determinant(double matrix[3][3]) { //I created a function determinant that calculates the determinant of 3x3 Matrix
    return matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) - //Multiply the top left value of the Matrix by the determinant of the 2x2 Matrix
           matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) + //Subtracts the product of the second element in top row of Matrix and the determinant of the 2x2 Matrix
           matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]); //Adds the product of the third element in the top row matrix and the determinant of the 2x2 Matrix
} //This all calculates the determinant of a 3x3 Matrix

bool inverseMatrix(double matrix[3][3], double inverse[3][3]) { //This function checks if a 3x3 matrix has an inverse and calculates it
    double det = determinant(matrix); //Calculates the determinant of the matrix 
    if (det == 0) { //If determinant = 0,
        return false; //The Matrix doesn't have an inverse and prints out false
    }

    double invDet = 1.0 / det; //Calculates the reciprocal of the determinant
    inverse[0][0] = invDet * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]); //Computes the top left element of the inverse matrix
    inverse[0][1] = invDet * (matrix[0][2] * matrix[2][1] - matrix[0][1] * matrix[2][2]); //Computes the top middle element of the inverse matrix
    inverse[0][2] = invDet * (matrix[0][1] * matrix[1][2] - matrix[0][2] * matrix[1][1]); //Computes the top right element of the inverse matrix
    inverse[1][0] = invDet * (matrix[1][2] * matrix[2][0] - matrix[1][0] * matrix[2][2]); //Computes the middle left element of the inverse matrix
    inverse[1][1] = invDet * (matrix[0][0] * matrix[2][2] - matrix[0][2] * matrix[2][0]); //Computes the middle middle element of the inverse matrix
    inverse[1][2] = invDet * (matrix[0][2] * matrix[1][0] - matrix[0][0] * matrix[1][2]); //Computes the middle right element of the inverse matrix
    inverse[2][0] = invDet * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]); //Computes the bottom left element of the inverse matrix
    inverse[2][1] = invDet * (matrix[0][1] * matrix[2][0] - matrix[0][0] * matrix[2][1]); //Computes the bottom middle element of the inverse matrix
    inverse[2][2] = invDet * (matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]); //Computes the bottom right element of the inverse matrix

    return true; //Returns True after computed inverse matrix calculation
}

int Account::count = 0; //Accounts = 0, until new ones are created

//Sec. 7 Ex: #3 - Tic-Tac-Toe
void drawBoard(char *spaces); //Function for Tic-Tac-Toe Board
void playerMove(char *spaces, char player); //Function for Tic-Tac-Toe Board Move
bool checkWinner(char *spaces, char player); //Function for Tic-Tac-Toe to check who the winner is
bool checkTie(char *spaces); //Function for Tic-Tac-Toe to check if there has been a tie

//Sec. 7 Ex: #4 - Maze Madness
void drawMaze(int maze[10][10], int playerRow, int playerCol); //Function for Maze Madness to draw the Maze Map
bool isValidMove(int maze[10][10], int row, int col);  //Function for Maze Madness to check if the player can move whatever direction they inputted
bool movePlayer(int maze[10][10], int &playerRow, int &playerCol, char move); //Function for Maze Madness to move the player in the Maze

//Sec. 7 Ex: #10 - Passing Arrays to Functions Using Pointers
void printArray(int *arr, int size) { //Function for printing my example Array and the user's inputted Array
    for (int i = 0; i < size; i++) { //For loop that counts from 0 to 1 less than size
        cout << arr[i] << " "; //Prints the element of the array
    }
    cout << endl;
 }

//Sec. 7 Ex: #11 - Virtual Well-Being Assistant
float BMIcalculation(float weight, float height) { //Declared function BMIcalculation with variables weight and height
    return weight / (height * height); //Returns the weight / height^2
}

float MetabolicRate(float weight, float height, int age, string gender) { //Declared MetabolicRate with variables weight, height, age and gender
    if (gender == "Male" || gender == "male") { //Checks if gender is male
        return 88.362 + (13.397 * weight) + (4.799 * height) - (5.677 * age); //Calculates the Metabolic Rate for a Male
    } else {
        return 447.593 + (9.247 * weight) + (3.098 * height) - (4.330 * age); //If gender is Female, calculates the Metabolic Rate for a Female
    }
}

float calories(float MetabolicRate, string actlvl) { //Declared function calories with variables MetabolicRate and actlvl
    if (actlvl == "sedentary (Little to no exercise)") { //If actlvl = sedentary,
        return MetabolicRate * 1.2; //Multiplies MetabolicRate * 1.2
    } else if (actlvl == "lightly active (light exercise/sports 1-3 days/week)") { //If actlvl = Lightly Active,
        return MetabolicRate * 1.375; //Multiplies MetabolicRate * 1.375
    } else if (actlvl == "Moderately Active (Moderate Exercise/Sports 3-5 days/week)") { //If actlvl = Moderately Active,
        return MetabolicRate * 1.55; //Multiplies MetabolicRate * 1.55
    } else { //If it's very active,
        return MetabolicRate * 1.725; //Multiplies MetabolicRate * 1.725
    }
}

void Motivation(float BMI) { //Defines Function Motivation with variable BMI
    if (BMI < 18.5) { //If BMI is less than 18.5,
        cout << "Keep up the Balanced Lifestyle!\n"; //Good lifestyle
    } else if (BMI <= 24.9) { //If BMI is less than 24.9
        cout << "Good job, just try to make some adjustments, to be perfect!\n"; //Somewhat good lifestyle, could be better
    } else { //More than 24.9,
        cout << "Make Steps to improve your life, one step at a time, it's either day one or one day, Just do it!\n"; //Improve your lifestyle, for a healthier life
    }
}

//Sec. 8 Ex: #10
//This is the function to calculate someone's Anxiety Levels
string determineLevel(int score) { //Created a Function String with variables determineLevel and int score
    if (score <= 12) { //If the score <= 15,
        return "Level A: Low to No Anxiety"; //That person's anxiety is low
    } else if (score <= 24) { //If the score <= 30,
        return "Level B: Moderate Anxiety"; //That person's anxiety is Moderate
    } else { //More than 30,
        return "Level C: High Anxiety"; //That person's anxiety is High
    }
}

void Recommendations(string level) { //Function for the Recommendations due to someone's Anxiety level
    if (level == "Level A: Low to No Anxiety") { //If someone has lvl A Anxiety, it will provide these recommendations
        cout << "\nHere are some Recommendations:\n";
        cout << "Try to continue exercising, it helps!\n";
        cout << "Practice Relaxation Techniques such as Yoga.\n";
        cout << "Maintain a balanced diet.\n";
        cout << "Maintain a good sleep schedule.\n";
    } else if (level == "Level B: Moderate Anxiety") { //If someone has lvl B Anxiety, it will provide these recommendations
        cout << "\nHere are some Recommendations:\n";
        cout << "Try to include Relaxation Techniques such as Yoga to your life.\n";
        cout << "If you drink Alcohol or Coffee, try to limit them.\n";
        cout << "Consider looking for help from a Therapist\n";
    } else if (level == "Level C: High Anxiety") { //If someone has lvl C Anxiety, it will provide these recommendations
        cout << "\nHere are some Recommendations:\n";
        cout << "Try looking for professional help such as a Therapist\n";
        cout << "Ask your doctor or therapist, if you can take medication\n";
        cout << "Tell Yourself that you're not alone. There are people here to help such as family and friends!\n";
    }
} //Quick Note: All recommendations were found online in research studies having to do with Anxiety in order to get the right recommendations

//Sec. 9 Ex: #3
class Student {  //Created the Student Class
public:
    string name;  //Created the string attribute name
    int age;  //Created the integer attribute age
    float finalGrade;  //Created the float attribute finalGrade 

    void displayStudentInfo () const {  //Function to display the inputted Student's info
         cout << "Name: " << name << ", Age: " << age << ", Final Grade: " << finalGrade << endl;  //Displays the Output in sentence form
    }
};
       

//Sec. 9 Ex: #4
float CalculateAverageGrade (const vector<Student>& students) {  //This function calculates the average grade of all students
    float total = 0.0;  //Declares float variable total with value of 0.0
    for (int i = 0; i < students.size(); i++) {  //Check every student in the list
        total += students[i].finalGrade;  //Add the student's final grade to total
    }
    return total / students.size();  //Divide total by the number of students to get the average
} 

Student CalculateHighestGrade (const vector<Student>& students) {  //This function finds the student with the highest grade
    Student highest = students[0];  //Start by assuming the first student has the highest grade
    for (int i = 1; i < students.size(); i++) {  //Check the rest of the students
        if (students[i].finalGrade > highest.finalGrade) {  //If this student has a higher grade
            highest = students[i];  //This student is now the one with the highest grade
        }
    }
    return highest;  //Returns the student with the highest grade
}

Student CalculateLowestGrade (const vector<Student>& students) {  //This function finds the student with the lowest grade
    Student lowest = students[0];  //Start by assuming the first student has the lowest grade
    for (int i = 1; i < students.size(); i++) {  //Checks the rest of the students
        if (students[i].finalGrade < lowest.finalGrade) {  //If this student has a lower grade
            lowest = students[i];  //This student is now the one with the lowest grade
        }
    }
    return lowest;  //Return the student with the lowest grade
}

//Sec. 9 Ex: #5
class Product {  //Created the Product Class
    public:
    string name;  //Declared the string attribute Name
    int quantity; //Declared the integer attribute Quantity
    float price;  //Declared the float attribute Price

    void CalculateTotal () {  //Function to calculate the total value of the products
        cout << "Your Total Value of Your Inventory is:" << quantity * price << " .\n";  //Displays that total value
    }
};

//Sec. 9 Ex: #6
class Book {  //Created the Book Class
    public:
    string title; //Declared the String Attribute Title 
    string author;  //Declared the String Attribute Author
    int publicationYear;  //Declared the integer attribute publicationYear
};

//Sec. 9 Ex: #7
class Employee {  //Created the Employee Class
    public:  
    string name;  //Created a string attribute name
    string position;  //Created a string attribute position
    float salary;  //Created a float attribute salary 
};

//Sec.9 Ex: 8
void toLowerCase(string& str) {  //Function to lowercase all string
    for (int i = 0; i < str.length(); ++i) {  //Created a for loop
        str[i] = tolower(str[i]);   //Lowers all inputted strings
    }
}


int main() {
    double kilometers, meters; //Declared double kilometers and meters
    int N; //Declared integer N
    int place; //Declared integer place
    string size, color, material, fit, SleeveLength, CollarType, design, pattern, upstairs, door, treasure, cornmazestart, cornmazemid, tootsieroll, cornmazeend, wilson, name; //Declared multiple strings
    int choice;  //Declared integer choice
    double discriminant, x1, x2; //Declared double discriminant, x1, and x2
    double a,b,c; //Declared double a, b, and c
    int opc; //Declared integer opc
    int n, m,x; //Declared integer n, m, and x
    float num1, num2, num3; //Declared floats num 1,2, and 3
    int answer; //Declared integer answer
    int age; //Declared integer age
    char continuechoice = 'Y'; //Declared char variable Y, for Nova, to continue running or not

    cout << "Welcome to Nova.\n";   //Nova's Introduction when you start it
    cout << "I can perform multiple different actions, you can click on 1 to exactly see that!\n";   //Gives a statement on how to use it

    do {    //Nova's Main Menu
        cout << "\n1. Inform on what I can do.\n";   //Option #1, will inform the user what Nova can do when a number is inputted
        cout << "2. Basic Calculator.\n";   //Option #2, will take the user to the basic calculator section with exercises #1-10
        cout << "3. Advanced Calculator.\n";   //Option #3, will take the user to the advanced calculator section with exercises #11-20
        cout << "4. Games and Equations!\n";  //Option #4, will give take the user to either calculate more equations such as first degree or play some games with exercises #21 - 30
        cout << "5. Arrays and Matrices.\n";   //Option #5, will allow the user to calculate Arrays and Matrices on Nova with exercises #31 - 40
        cout << "6. Classes in C++.\n";   //Option #6, will allow the user to view the past exercises and Classes in C++
        cout << "7. RandomNova\n";  //Option #7, will allow the user to access a variety of functions such as classes and a Trick-or-Treat Game
        cout << "8. GameMaster Nova\n"; //Option #8, will allow the user to access games in Nova such as Tic-Tac-Toe
        cout << "9. Final Destination Nova\n"; //Option #9, will allow the user to access our final section which has things like AnxiEase Helper

        cout << "Enter Your Choice: 1-9: ";
        cin >> opc;

        switch (opc) {
            case 1:   //This is the function that will show what will come up when option #1 is chosen in the main menu using case 1
                cout << "\n";
                cout << "Hello, my name is Nova, Your Virtual Assistant!\n"; //Nova continues to inform the user everything it can do in all of it's sections
                cout << "\n";
                cout << "2) I can calculate math problems for you such as adding and subtracting. (Basic calculator)\n";
                cout << "\n";
                cout << "3) I can calculate more advanced problems such as the sum of squares. (Advanced Calculator)\n";
                cout << "\n";
                cout << "4) I can calculate Equations such as Quadratic and Play Games like Trivia! (Games and Equations)\n";
                cout << "\n";
                cout << "5) I can calculate Matrices and Arrays (Arrays and Matrices)\n";
                cout << "\n";
                cout << "6) I can show you past exercises and past problems in other sections and Classes in C++! (Classes in C++)\n";
                cout << "\n";
                cout << "7) I can calculate recursive functions, inverse Matrix Methods, Classes, and play a Halloween Game :) (RandomNova)\n";
                cout << "\n";
                cout << "8) I can play different games such as Tic-Tac-Toe with your friends. (GameMaster Nova)\n";
                cout << "\n";
                cout << "9) I can help determine your Anxiety Levels and Provide Recommendations and more! (Final Destination Nova)\n";
                cout << "\n";
                break;

            case 2: {   //This is the Basic Calculator menu that will come up when Option #2 is chosen in the main menu using case 2 (Exercises #1-10)
                cout << "\nWelcome to Basic Calculator\n";   //Introduction to the Basic Calculator Section
                cout << "Choose Which Operation You Wish for me to Perform:\n";
                cout << "1. Addition\n";   //This will allow you to perform addition in the Basic Calculator
                cout << "2. Subtraction\n";  //This will allow you to perform subtraction in the Basic Calculator
                cout << "3. Multiplication\n";  //This will allow you to perform multiplication in the Basic Calculator
                cout << "4. Division\n";    //This will allow you to perform division in the Basic Calculator
                cout << "5. Average of Numbers\n";   //This will allow you to find the average of numbers in the Basic Calculator
                cout << "6. Check if They're Even or Odd\n";  //This will allow you to check if numbers are even or odd in the Basic Calculator
                cout << "7. Check if They're Positive, Negative, or Zero\n";  //This will allow you to check if numbers are negative, positive or zero in the Basic Calculator
                cout << "8. Calculate the Square Root\n";  //This will allow you to calculate the square root in the Basic Calculator
                cout << "9. Calculate the Absolute Value\n";  //This will allow you to calculate absolute value of a number in the Basic Calculator
                cout << "10. Calculate the Perimeter and the Area of a Square\n";   //This will allow you to calculate the perimeter and area of a square in the Basic Calculator

                cout << "Enter Your Choice (1-10): ";
                int basiccalculator_opc;
                cin >> basiccalculator_opc;

                cout << "\nEnter First Number: ";
                cin >> num1;

                cout << "Enter Second Number: ";
                cin >> num2;

                switch (basiccalculator_opc) {  //Used a new switch function for the operations in the Basic Calculator 
                    case 1:  
                        cout << "Result: " << num1 + num2 << endl;  //Addition Function (Exercise #1)
                        break;

                    case 2:   
                        cout << "Result: " << num1 - num2 << endl;  //Subtraction Function (Exercise #2)
                        break;

                    case 3:  
                        cout << "Result: " << num1 * num2 << endl;  //Multiplication Function (Exercise #3)
                        break;

                    case 4:
                        if (num2 != 0)  //Used an If Else statement to ensure that you can't divide by 0  (Exercise #4)
                            cout << "Result: " << num1 / num2 << endl;   //Division Function
                        else
                            cout << "Can't Divide by Zero.\n";   //This will come up when 0 is entered
                        break;

                    case 5: 
                        cout << "Average = " << (num1 + num2) / 2 << endl;   //Function to find the average  (Exercise #5)
                        break;

                    case 6:   //Function to check if a number is even, odd, or zero  (Exercise #6)
                        if (static_cast<int>(num1) % 2 == 0)  //Static Cast to turn a decimal into an integer (if needed) and checks if odd
                            cout << "Number 1 (" << num1 << ") is Even.\n"; //If # is even, it will print out even
                        else
                            cout << "Number 1 (" << num1 << ") is Odd.\n";  //If not even, else statement makes it print out that it's odd

                        if (static_cast<int>(num2) % 2 == 0) //Static Cast to turn a decimal into an integer (if needed) and checks if odd
                            cout << "Number 2 (" << num2 << ") is Even.\n"; //If # is even, will print out even
                        else
                            cout << "Number 2 (" << num2 << ") is Odd.\n"; //If not even, else statement makes it print out that it's odd
                        break;

                    case 7:  //Function to check if a number is positive, negative, or zero  (Exercise #7)
                        if (num1 > 0)  //If number is more than 0, it's positive
                            cout << "Number 1 (" << num1 << ") is Positive.\n";
                        else if (num1 < 0)   //If number is less than 0, it's negative
                            cout << "Number 1 (" << num1 << ") is Negative.\n";
                        else  //If it's not less than 0 or more than 0, it's equal to 0
                            cout << "Number 1 (" << num1 << ") is Zero.\n";

                        if (num2 > 0) //If number is more than 0, it's positive
                            cout << "Number 2 (" << num2 << ") is Positive.\n";
                        else if (num2 < 0) //If number is less than 0, it's negative
                            cout << "Number 2 (" << num2 << ") is Negative.\n";
                        else //If it's not less than 0 or more than 0, it's equal to 0
                            cout << "Number 2 (" << num2 << ") is Zero.\n";
                        break;

                    case 8:  //Function to calculate the square root of a number  (Exercise #8)
                        if (num1 >= 0)  //If number is equal to and greater than 0, the function will calculate
                            cout << "The square Root of Number 1 (" << num1 << ") = " << sqrt(num1) << endl;
                        else  //If the number isn't greater or equal to 0 (negative), this will print out
                            cout << "Can't calculate square root of negative numbers (" << num1 << ").\n";
                            
                        if (num2 >= 0)  //If number is equal to and greater than 0, the function will calculate
                            cout << "The square Root of Number 2 (" << num2 << ") = " << sqrt(num2) << endl;
                        else  //If the number isn't greater or equal to 0 (negative), this will print out
                            cout << "Can't calculate square root of negative numbers (" << num2 << ").\n";
                        break;

                    case 9: //Function to calculate a number's absolute value  (Exercise #9)
                        cout << "Absolute Value of Number 1 (" << num1 << ") = " << fabs(num1) << endl; //Using fabs to calculate the absolute value of num1
                        cout << "Absolute Value of Number 2 (" << num2 << ") = " << fabs(num2) << endl; //Using fabs to calculate the absolute value of num2
                        break;

                    case 10: //Function to calculate the Perimeter and area of the square  (Exercise #10)
                        cout << "Perimeter of the Square = " << 4 * num1 << endl; //Calculated the perimeter by taking num1 and multiplying it by 4
                        cout << "Area of the Square = " << num1 * num1 << endl; //Calculated the Area by taking num1 and multiplying it by itself
                        
                        cout << "Perimeter of the Square = " << 4 * num2 << endl; //Calculated the perimeter by taking num2 and multiplying it by 4
                        cout << "Area of the Square = " << num2 * num2 << endl; //Calculated the Area by taking num2 and multiplying it by itself
                        
                        break;

                    default:
                        cout << "Invalid Option!\n";
                }
                break;
            }

            case 3: {   //Advanced Calculator Menu (Exercises #11-20)
                cout << "\nWelcome to Advanced Calculator\n";
                cout << "Choose Which Operation You Wish for me to Perform:\n";
                cout << "1. Multiplication Table of 2\n"; //This will create a Multiplication Table of 2
                cout << "2. Multiplication Table of 12 * Your Input\n"; //This will create a Multiplication Table of 12 * the user's input
                cout << "3. Multiplication Table With BOTH of your Inputs\n"; //This will create a Multiplication of 2 Numbers the user inputs
                cout << "4. Hypotenuse of a Right Triangle (Pythagorean Theorem)\n"; //This will calculate the hypotenuse of a Right Triangle
                cout << "5. Convert Dollars to Euros\n"; //This will convert Dollars To Euros
                cout << "6. Convert Euros to Dollars\n"; //This will convert Euros To Dollars
                cout << "7. Exchange of Two Numbers\n"; //Exchange the Values of 2 Numbers
                cout << "8. Smallest of Three Numbers\n"; //Find the Smallest of Three Numbers
                cout << "9. Largest of Three Numbers\n"; //Find the Largest of Three Numbers
                cout << "10. Calculate the Sum of Squares\n"; //Calculate the Sum of Squares

                cout << "Enter Your Choice (1-10): ";
                int advancedcalculator_opc;
                cin >> advancedcalculator_opc;

                switch (advancedcalculator_opc) {   //Used a new switch function for the operations in the Advanced Calculator 
                    case 1: { //Function to create a Multiplication Table of 2 (Exercise #11)
                        for (int i = 1; i <= 12; i++) {  //We used a for loop to set i = 1 and then multiply * 2 all the way until 12
                            cout << "2 * " << i << " = " << 2 * i << endl; //Multiply 2 * i until i reaches 12
                            }
                        }
                        break;

                    case 2: { //Function to create a Multiplication Table of 12 * user's input (Exercise #12)
                        cout << "Enter Number: "; 
                        cin >> n; //User inputs their number
                        for (int i = 1; i <= 12; i++) {   //We used a for loop again to multiply n (input) all the way until 12
                            cout << n << " * " << i << " = " << n * i << endl; //Multiply n * i until i reaches 12
                            }
                        }
                        break;

                    case 3: {  //Function to create a Multiplication Table of BOTH of your inputs (Exercise #13)
                        cout << "Enter Number #1: ";
                        cin >> n; //User inputs their first number

                        cout << "Enter Number #2: ";
                        cin >> m; //User inputs their second number

                        for (int i = 1; i <= m; i++) {   //We used a for loop again to multiply n (input) and m (second input) all the way until what m is set to
                            cout << n << " * " << i << " = " << n * i << endl; //Multiply n * i to whatever value m is to i until the number is reached
                            }
                        }
                        break;

                    case 4: {//Function to calculate the hypotenuse of a right triangle (Exercise #14)
                        cout << "Enter the two sides of the right triangle: ";
                        cin >> num1 >> num2; //User inputs their two side of the right Triangle

                        cout << "The hypotenuse = " << sqrt(num1 * num1 + num2 * num2) << endl; //Function to calculate the hypotenuse using a square root //Using Sqrt keyword we multiplied num1 by itself then add num2 multiplied by itself then take the square root
                        
                        }
                        break;

                    case 5: { //Function to convert Dollars to Euros (Exercise #15)
                        cout << "Enter amount in Dollars $: ";
                        cin >> num1;

                        cout << num1 << " Dollars = " << num1 * 0.95 << " Euros.\n";  //Function to convert Dollars to Euros using 0.85 * input of Dollars
                        }
                        break;

                    case 6: {  //Function to convert Euros to Dollars (Exercise #16)
                        cout << "Enter amount in Euros: ";
                        cin >> num1;

                        cout << num1 << " Euros is " << num1 * 1.05 << " Dollars $.\n";   //Function to convert Euros to Dollars using 1.18 * input of Euros
                        
                        }
                        break;

                    case 7: { //Function to exchange values of two numbers (Exercise #17)
                        cout << "Enter Number #1: ";
                        cin >> n; //User inputs num1

                        cout << "Enter Number #2: ";
                        cin >> m; //User inputs num2

                        swap(n, m);  //Used Swap keyword to be able to swap the values of number1 and number2
                        cout << "Swap: Number 1 = " << n << ", Number 2 = " << m << endl;  //Function to swap the numbers and show the output
                        
                        }
                        break;

                    case 8: { //Function to find the smallest number of 3 (Exercise #18)
                        cout << "Enter Number #1: ";
                        cin >> n; //User inputs num1

                        cout << "Enter Number #2: ";
                        cin >> m; //User inputs num2

                        cout << "Enter Number #3: ";
                        cin >> x; //User inputs num3

                        cout << "The smallest number is: " << min(n, min(m,x)) << endl;  //Used min to find the smallest of m and x first then n and the smallest of m and x to find the smallest 
                        
                        }
                        break;

                    case 9: {  //Function to find the largest number of 3 (Exercise #19)
                        cout << "Enter Number #1: ";
                        cin >> n; //User inputs num1

                        cout << "Enter Number #2: ";
                        cin >> m; //User inputs num2

                        cout << "Enter Number #3: ";
                        cin >> x; //User inputs num3

                        cout << "The largest number is: " << max(n, max(m,x)) << endl;  //Used max to find the largest of m and x first then n and the largest of m and x to find the largest 
                        
                        }
                        break;

                    case 10: {  //Function to calculate the sum of squares (Exercise #20)
                        cout << "Enter Number #1: ";
                        cin >> num1; //User inputs num1

                        cout << "Enter Number #2: ";
                        cin >> num2; //User inputs num2

                        cout << "The Sum of Squares = " << (num1 * num1) + (num2 * num2) << endl;  //Function to calculate the sum of squares, while first multiplying the numbers with each other and then adding them together
                        
                        }
                        break;

                    default:
                        cout << "Invalid Option!\n";
                }
                break;
            }

             case 4: {   //Games and Equations Menu (Exercises #21 - 30)
                cout << "\nWelcome to Games and Functions!\n";
                cout << "Choose Which Operation You Wish for Me to Perform:\n"; 
                cout << "1. Find the Largest AND Smallest of 3 Numbers\n"; //Find the largest and the smallest of 3 numbers (Exercise #21)
                cout << "2. Find the Sum of the First 100 Integer Numbers\n";  //Find the Sum of the First 100 Integers (Exercise #22)
                cout << "3. Find the Sum of the First 100 EVEN Integer Numbers\n";  //Find the Sum of the First 100 Even Integers (Exercise #23)
                cout << "4. Solve the First Degree Equation (ax + b = 0)\n";  //Solve the First Degree Equation (Exercise #24)
                cout << "5. Solve the Second Degree Equation (ax^2 + bx + c = 0)\n"; //Solve the Second Degree Equation (Exercise #25)
                cout << "6. Find the Sum of the First N Integer Numbers.\n";  //Find the Sum of the First N Integer Numbers (Exercise #26)
                cout << "7. Find the Sum of the First N Even Integers.\n";  //Find the Sum of the First N Even Integer Numbers (Exercise #27)
                cout << "8. Convert Kilometers to Meters and Meters to Kilometers.\n";  //Convert Kilometers to Meters and Meters to Kilometers (Exercise #28)
                cout << "9. Futbol Genius Quiz Game\n";   //Futbol Genius Quiz Game (Exercise #29)
                cout << "10. T-Shirt Personalization Game\n";   //T-Shirt Personalization Game/Survey, to find the right T-Shirt for You! (Exercise #30)

                cout << "Enter Your Choice (1-10): ";
                int gamesandequations_opc;
                cin >> gamesandequations_opc;

                switch (gamesandequations_opc) {
                    case 1: {  //Find the smallest and the largest of a set of 3 numbers (Exercise #21)
                        cout << "Enter Number #1: ";
                        cin >> m; //User inputs num1

                        cout << "Enter Number #2: ";
                        cin >> n; //User inputs num2

                        cout << "Enter Number #3: ";
                        cin >> x; //User inputs num3

                        cout << "The Smallest Number is: " << min(n, min(m, x)) << endl; //Using min keyword on m and x to find the smallest of those numbers to then compare it to n and find the smallest of those 2
                        cout << "The Largest Number is: " << max(n, max(m, x)) << endl; //Using max keyword on m and x to find the largest of those numbers to then compare it to n and find the largest of those 2

                        break;
                    }

                    case 2: {  //Function to find the sum of the first 100 integers (Exercise #22)
                        int sum = 0; //Setting the sum = 0

                        for (int i = 1; i <= 100; i++) { //For every i less than and equal to 100, it keep on adding each other
                            sum += i; //Adds one after every i
                        }
                        cout << "The sum of the first 100 Integers is: " << sum << endl; //Prints out the sum of the first 100 integers

                        break;
                    }

                    case 3: {  //Function to find the sum of the first 100 even integers (Exercise #23)
                        int sum = 0; //Setting the sum = 0

                        for (int i = 1; i <= 100; i++) { //For every i less than and equal to 100, it keeps on adding each other
                            sum += 2 * i; //This is for even numbers only so adds 2 * i
                        }
                        cout << "The sum of the first 100 even Integers is: " << sum << endl; //Prints out the sum of the first 100 even integers

                        break;
                    }

                    case 4: {  //First Degree Equation (Exercise #24)
                        cout << "Enter the coefficients a and b for the equation ax + b = 0: " << endl;

                        cout << "Enter a = ";
                        cin >> a; //User enter a^2

                        cout << "Enter b = ";
                        cin >> b; //User enter b^2

                        if (a == 0) {  //If a = 0,
                            if (b == 0) { //And b = 0, there are infinite solutions
                                cout << "The equation has infinite solutions. " << endl;
                            } else {
                                cout << "No solution exists" << endl;
                            }
                        } else { //If doesn't a = 0, b = 0
                            double x = -b / a; //It will calculate -b / a
                            cout << "The solution is x = " << x << endl; //This prints out the solution
                        }
                        break;
                    }

                    case 5: {  //Second Degree Equation (Exercise #25)
                        cout << "Enter a: ";
                        cin >> a; //User enters a

                        cout << "Enter b: ";
                        cin >> b; //User enters b

                        cout << "Enter c: ";
                        cin >> c; //User enters c 

                        if (a == 0) { //If a = 0, it's not a quadratic equation anymore
                            if (b == 0) { //If b = 0, there's infinite solutions
                                cout << "The equation has infinite solutions." << endl;
                            } else { //If b is not 0, it will solve this for x
                                cout << "Solution = " << -c / b << endl; //Solve for x by performing -c / b and it will display the output
                            }
                        } else {
                            discriminant = (b * b) - (4 * a * c); //This will calculate the discriminant

                            if (discriminant > 0) { //If the discriminant is more than 0, it will perform this equation
                                x1 = (-b + sqrt(discriminant)) / (2 * a);
                                x2 = (-b - sqrt(discriminant)) / (2 * a);
                                cout << "x1 = " << x1 << " and x2 = " << x2 << endl; //Display the results we get for x1 and x2
                            } else if (discriminant == 0) { //If discriminant = 0, there's only one x1 not x2
                                x1 = -b / (2 * a); //It will perform this equation,
                                cout << "x = " << x1 << endl; //Then display the results for x1
                            } else { //If the discriminant is less than 0
                                double realPart = -b / (2 * a); //Calculates two complex answers //First by calculating the Real Part
                                double imaginaryPart = sqrt(-discriminant) / (2 * a); //And then the Imaginary Part
                                cout << "The equation has two complex solutions: " << endl;
                                cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << endl; //Displays the x1 result
                                cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl; //Displays the x2 result
                            }
                        }
                        break;
                    }

                    case 6: {  //Function to find sum of the First N integers (Exercise #26)
                        int sum = 0; //Declaring variable sum = 0

                        cout << "Enter a Number Greater than 0: ";
                        cin >> N; //User enters number greater than 0

                        if (N <= 0) {
                            cout << "The Number Must be Greater Than 0"; //If Number is less than or equal to 0, it won't perform the equation
                            break;
                        }

                        for (int i = 1; i <= N; i++) {  //For every i less than or equal to N
                            sum += i; //It will add each i until it reaches N
                        }

                        cout << "The sum of the First " << N << " integers is: " << sum << endl; //Displays N integers sum
                        break;
                    }

                    case 7: {  //Function to Find the Sum of N Even integers (Exercise #27)
                        int sum = 0;  //Declaring integer sum with value of 0 

                        cout << "Enter a Number Greater than 0: ";
                        cin >> N; //User Enter Number Greater than 0

                        if (N <= 0) {
                            cout << "The Number Must be Greater Than 0"; //If number is less than or equal to 0, it won't perform the equation
                            break;
                        }

                        for (int i = 1; i <= N; i++) {  //For every i less than or equal to N
                            sum += 2 * i; //It will add each integer i * 2 until reaches N
                        }

                        cout << "The sum of the First " << N << " even integers is: " << sum << endl;  //Displays N even integers sum
                        break;
                    }

                    case 8: {   //Kilometers to Meters Calculation and Vice Versa (Exercise #28)
                        cout << "First, Enter Your Kilometers to convert it into Meters.\n";
                        cout << "Enter distance in Kilometers: ";
                        cin >> kilometers; //User Enters Kilometers

                        cout << "Secondly, Enter Your Meters to convert it into Kilometers.\n";
                        cout << "Enter distance in Meters: ";
                        cin >> meters;  //User Enters Meters

                        cout << "\n";
                        cout << "Here's the Inputted Kilometers converted to Meters:\n";
                        cout << kilometers << " Kilometers is equal to: " << kilometers * 1000 << " meters." << endl;  //Displays Kilometers inputted * 1000 to get meters
                        cout << "\n";
                        cout << "Here's the Inputted Meters converted to Kilometers:\n";
                        cout << meters << " Meters is equal to " << meters / 1000.0 << " kilometers." << endl;  //Displays Meters inputted / 1000.0 to get kilometers
                        break;
                    }

                    case 9: {   //Futbol Genius Quiz Game (Exercise #29)
                        int score = 0;  //Declaring integer score with value of 0

                        cout << "Welcome to Futbol Genius Quiz Game!!!\n"; //Introduction to Futbol Genius Quiz Game
                        cout << "Question 1: Who Won the Most Champions League Ever?\n";  //Question 1
                        cout << " 1. Barcelona\n 2. Real Madrid\n 3. AC Milan\n 4. Bayern Munich\n"; //Multiple choice
                        cout << "Your Answer (1-4):  ";
                        cin >> answer; //user inputs their answer

                        if (answer == 2) {  //Answer = 2
                            score += 100; //If the user gets the correct answer they get +100
                        } else {
                            cout << "Wrong, it was Real Madrid. " << endl; //If the user gets the wrong answer, they don't get any points
                        }

                        cout << "Question 2: Who won the Most World Cups in History?\n";  //Question 2
                        cout << " 1. Brazil\n 2. Germany\n 3. Ecuador\n 4. United States\n";  //Multiple Choice
                        cout << "Your Answer (1-4):  ";
                        cin >> answer; //user inputs their answer

                        if (answer == 1) {  //Answer = 1
                            score += 100; //If the user gets the correct answer they get another +100
                        } else {
                            cout << "Wrong it was Brazil. " << endl;  //If the user gets the wrong answer, they don't get any points
                        }

                        cout << "Question 3: Who Won the Most Balon D'or's in History?\n"; //Question 3
                        cout << " 1. Messi🐐\n 2. Ronaldo\n 3. Pele\n 4. Benzema\n"; //Multiple Choice
                        cout << "Your Answer (1-4): ";
                        cin >> answer; //user inputs their answer

                        if (answer == 1) {  //Answer = 1
                            score += 100; //If the user gets the correct answer they get another +100
                        } else {
                            cout << "Wrong, it was Messi. " << endl;  //If the user gets the wrong answer, they don't get any points
                        }

                        cout << "Question 4: Who's the Highest Goal Scorer in History?\n ";  //Question 4
                        cout << "1. Messi🐐\n 2. Neymar\n 3. Ronaldo\n 4. Pele\n";  //Multiple Choice
                        cout << "Your Answer (1-4): ";
                        cin >> answer; //user inputs their answer

                        if (answer == 3) { //Answer = 3
                            score += 100; //If the user gets the correct answer they get another +100
                        } else {
                            cout << "Wrong, it was Ronaldo. " << endl;  //If the user gets the wrong answer, they don't get any points
                        }

                        cout << "Question 5: What is the Team with the Most Europa League in History?\n ";  //Question 5
                        cout << "1. Barcelona\n 2. Man United\n 3. Liverpool\n 4. Sevilla\n";  //Multiple Choice
                        cout << "Your Answer (1-4): ";
                        cin >> answer;  //user inputs their answer

                        if (answer == 4) {  //Answer = 4
                            score += 100;  //If the user gets the correct answer they get another +100
                        } else {
                            cout << "Wrong, it was Sevilla. " << endl; //If the user gets the wrong answer, they don't get any points
                        }

                        cout << "\nYour Final Score is: " << score << endl; //Displays the final tallied score from all the correct answers

                        if (score >= 300) { //If the score is more than or equal to 300 (3 right answers/5)
                            cout << "You Are A FUTBOL GENIUS!\n"; //You are a Certified Futbol Genius
                        } else {
                            cout << "Do you Even Watch Futbol bro?\n"; //If the score is less than 300, Do you even watch Futbol bro
                        }

                        break;
                    }

                    case 10: {   //T-Shirt Personalization Game (Exercise #30)
                        cout << "Welcome to T-Shirt Personalization Game!\n"; //Welcome to T-Shirt Personalization Survey
                        cout << "To be able to find the best T-Shirt For You!\n";

                        //Q1
                        cout << "What Size Do You Wish Your Shirt to Be?\n"; //Ask what shirt size the person wants.
                        cout << " 1. Small\n 2. Medium\n 3. Large\n 4. X-Large\n"; //SHow the choices for sizes.
                        cout << "Your Answer: "; 
                        cin >> choice; 

                        switch (choice) {
                            case 1: size = "Small"; break; //If they picked 1, the size is Small.
                            case 2: size = "Medium"; break; //If they picked 2, the size is Medium.
                            case 3: size = "Large"; break; //If they picked 3, the size is Large.
                            case 4: size = "X-Large"; break; //If they picked 4, the size is X-Large.
                        }

                        //Q2 
                        cout << "What Color Would You Wish Your Shirt to Be?\n"; //Ask the user what color they want their shirt to be.
                        cout << " 1. Red\n 2. Black\n 3. Blue\n 4. Pink\n"; //Show them a list of color options to pick from.
                        cout << "Your Answer: "; 
                        cin >> choice;

                        switch (choice) {
                            case 1: color = "Red"; break; //If they picked 1, the color is Red.
                            case 2: color = "Black"; break; //If they picked 2, the color is Black.
                            case 3: color = "Blue"; break; //If they picked 3, the color is Blue.
                            case 4: color = "Pink"; break; //If they picked 4, the color is Pink.
                        }

                        //Q3
                        cout << "What Material Would You Wish Your Shirt to Be Made Out Of?\n"; //Ask the user what material they want their shirt to be
                        cout << " 1. Cotton\n 2. Polyester\n 3. Silk\n 4. Linen\n"; //Show them a list of material options to pick from.
                        cout << "Your Answer: ";
                        cin >> choice;

                        switch (choice) {
                            case 1: material = "Cotton"; break; //If they picked 1, the material is Cotton
                            case 2: material = "Polyester"; break; //If they picked 2, the material is Polyester
                            case 3: material = "Silk"; break; //If they picked 3, the material is Silk
                            case 4: material = "Linen"; break; //If they picked 4, the material is Linen
                        }

                         //Q4
                        cout << "What Type of Fit Would You Want Your T-Shirt to be?\n"; //Ask the user what fit they want their shirt to be
                        cout << " 1. Loose Fit\n 2. Athletic Fit\n 3. Slim Fit\n 4. Skinny Fit\n"; //Show them a list of fit options to pick from.
                        cout << "Your Answer: ";
                        cin >> choice;

                        switch (choice) { 
                            case 1: fit = "Loose Fit"; break; //If they picked 1, the material is Loose Fit
                            case 2: fit = "Athletic Fit"; break; //If they picked 2, the material is Athletic Fit
                            case 3: fit = "Slim Fit"; break; //If they picked 3, the material is Slim Fit
                            case 4: fit = "Skinny Fit"; break; //If they picked 4, the material is Skinny Fit
                        }

                        //Q5
                        cout << "Do you want long-sleeved shirt or short-sleeved shirt?\n"; //Ask the user what size sleeve they want their shirt to be
                        cout << " 1. Long-Sleeved Shirt\n 2. Short-Sleeved Shirt\n"; //Show them a list of size sleeve to pick from
                        cout << "Your Answer: ";
                        cin >> choice;
                        switch (choice) {
                            case 1: SleeveLength = "Long Sleeved Shirt"; break; //If they picked 1, the sleeve size is Long Sleeved
                            case 2: SleeveLength = "Short-Sleeved Shirt"; break;  //If they picked 2, the sleeve size is Short Sleeved 
                        }

                         //Q6
                        cout << "What Type of Collar Do You Want?\n";  //Ask for the user what type of collar they want their shirt to be
                        cout << " 1. Round-Neck Collar\n 2. V-Shaped Collar\n";  //Show them a list of type collar to pick from
                        cout << "Your Answer: ";
                        cin >> choice;

                        switch (choice) {
                            case 1: CollarType = "Round-Neck Collar"; break; //If they picked 1, the collar type is Round-Neck Collar
                            case 2: CollarType = "V-Shaped Collar"; break; //If they picked 2, the collar type is V-Shaped Collar
                        }

                         //Q7
                        cout << "What Design Would You Like on Your T-Shirt?\n"; //Ask for the user what type of design they want on their shirt
                        cout << " 1. Heart\n 2. C++\n 3. Messi\n 4. Dog\n"; //Show them a list of Design to pick from
                        cout << "Your Answer: ";
                        cin >> choice;

                        switch (choice) {
                            case 1: design = "Heart"; break; //If they picked 1, the design is Heart
                            case 2: design = "C++"; break;  //If they picked 2, the design is C++
                            case 3: design = "Messi"; break; //If they picked 3, the design is Messi
                            case 4: design = "Dog"; break;  //If they picked 4, the design is Dog
                        }

                         //Q8
                        cout << "Do You Want a Single or Multi-Color Pattern?\n"; //Ask for the user what type of pattern they want on their shirt 
                        cout << " 1. Single Pattern\n 2. Multi-Color Pattern\n"; //Show them a list of Pattern to pick from
                        cout << "Your Answer: ";
                        cin >> choice;

                        switch (choice) {
                            case 1: pattern = "Single-Pattern"; break; //If they picked 1, the pattern is Single Pattern
                            case 2: pattern = "Multi-Color Pattern"; break;  //If they picked 2, the pattern is Multi-Color Pattern
                        }

                        //The Choices for each section
                        cout << "\n";
                        cout << "Here is Your Perfect T-Shirt:\n";
                        cout << "Chosen Size: " << size << endl;
                        cout << "Chosen Color: " << color << endl;
                        cout << "Chosen Material: " << material << endl;
                        cout << "Chosen Fit: " << fit << endl; 
                        cout << "Chosen Sleeve Length: " << SleeveLength << endl; 
                        cout << "Chosen Collar Type: " << CollarType << endl; 
                        cout << "Chosen Design: " << design << endl;
                        cout << "Chosen Pattern: " << pattern << endl; 

                        //A combine sentence on each section to find your perfect T-Shirt
                        cout << "\n";
                        cout << "You want a " << color << " " << SleeveLength << ", Size " << size << ", with a " << design 
                        << " print, made out of " << material << ", with a " << CollarType << ", in " << fit << ", and a " << pattern << ".\n";   

                        cout << "\n";
                        cout << "Thank you for using our Questionaire!\n";
                        break;
                    }

                    default:
                        cout << "Invalid option. Please try again." << endl;
                        break;
                }
                break; 
            }

            case 5: {  //Matrices and Arrays Menu (Exercises #31-40)
                cout << "\nWelcome to Arrays and Matrices Menu!\n";
                cout << "Choose Which you Operation, you Wish for me to do!\n";
                cout << "1. Add Array of integers (2, 4, 6, 8, 10)\n";   //Exercise #31
                cout << "2. Add Two Arrays of Integers (2, 4, 6, 8, and 10) and (20, 40, 60, 80, 100) into a new Array\n";  //Exercise #32
                cout << "3. Multiply and Divide Arrays (2, 4, 6, 8, and 10) and (20, 40, 60, 80, 100) into a new Array\n";  //Exercise #33
                cout << "4. Create two Arrays and Add, Subtract, Multiply, and Divide them.\n";  //Exercise #34
                cout << "5. Multiply Your Array by a Number.\n";   //Exercise #35
                cout << "6. Create a 2x2 Matrix and Add The Elements Together.\n";   //Exercise #36
                cout << "7. Create 2 Matrices 2x2 and Add, Subtract and Multiply Them.\n";  //#Exercise #37
                cout << "8. Determine the Greater of Two Numbers.\n";  //Exercise #38
                cout << "9. Add Two Integers.\n";  //Exercise #39
                cout << "10. Subtract Two Integers.\n";  //Exercise #40

                cout << "Enter Your Choice (1-10): ";
                int matricesandarrays_opc;
                cin >> matricesandarrays_opc;

                switch(matricesandarrays_opc) {
                    case 1: {  //Add the elements of the array together (Exercise #31)
                        int i;
                        int a1[5] = {2, 4, 6, 8, 10}; //Declaring my Array
                        int addition = 0;

                        for (int i = 0; i < 5; i++) { //Created a for loop until 5
                            addition += a1[i]; //Add a1 with i for each element
                        }

                        cout << "Sum of Elements in Array a1: " << addition << endl;  //Will print out the result
                        }
                        break;

                    case 2: { //Add two arrays together (Exercise #32)
                        int a1[5] = {2, 4, 6, 8, 10};  //Array #1
                        int a2[5] = {20, 40, 60, 80, 100};  //Array #2
                        int add[5];  //Sum Array

                        for (int i = 0; i < 5; i++) { //Created a for loop unil 5 to perform this function
                            add[i] = a1[i] + a2[i]; //Sum Array = a1 array with i + a2 array with i until reaching 5
                        }
                        
                        cout << "Added Arrays: ";  //Will print out the results of the added arrays
                        for (int i = 0; i < 5; i++) { //For Loop until 5 for the Array
                            cout << add[i] << " "; //Will print out the Sum Array
                        }
                        cout << endl;
                    }
                    break;

                    case 3: {  //Multiply and Divide Two Arrays (Exercise #33)
                        int i;
                        double a1[5] = {2, 4, 6, 8, 10};  //Array #1
                        double b1[5] = {20, 40, 60, 80, 100};  //Array #2
                        int d1[5]; //Multiplication/Product Array
                        double e1[5];  //Float for any decimals //Division/Quotient Array

                        for (i = 0; i < 5; i++) { //Equation for Multiplication Arrays
                            d1[i] = a1[i] * b1[i]; //Takes a1 * b1 arrays to get d1 array (Product Array)
                        }
                        
                        for (i = 0; i < 5; i++) {  //Equation for Dividing Arrays
                            if (a1[i] != 0) { //If a1 array doesn't equal 0,
                                e1[i] = (a1[i] / b1[i]); //It will perform this equation of a1 / b1
                            } else {
                                e1[i] = 0;  //Else Zero, won't divide.
                                cout << "Error. Can't Divide by Zero.";
                            }
                        }

                        cout << "d1 = ";  //Results for product array
                        for (i = 0; i < 5; i++) { //For loop for Array
                            cout << d1[i] << " "; //Displays the result for d1 elements (Product Array)
                        }
                        cout << endl;

                        cout << "e1 = ";   //Results for divided Array
                        for (i = 0; i < 5; i++) {  //For loop for Array
                            cout << e1[i] << " "; //Displays the result for e1 elements (Quotient Array)
                        }
                        cout << endl;
                    }
                    break;

                    case 4: {  //Create two arrays to go through arithmetic operations (Exercise #34)
                        int i;
                        int a1[5];  //First Array 
                        int b1[5];  //Second Array
                        int c1[5];  //Added Array
                        int d1[5];  //Subtracted Array
                        int e1[5];  //Multiplied Array
                        double f1[5];  //Divided Array

                        cout << "Enter Elements of 1st Array: "; //User Input 1st Array
                        for (i = 0; i < 5; i++) {
                            cin >> a1[i];
                        }

                        cout << "Enter Elements of 2nd Array: ";  //User Input 2nd Array
                        for (i = 0; i < 5; i++) {
                            cin >> b1[i];
                        }

                        cout << "\nAdded Arrays: ";  //Function to add the two inputted arrays
                        for (i = 0; i < 5; i++) {
                            c1[i] = a1[i] + b1[i]; //a1 + b1 will be stored in c1 (Sum Array)
                        }
                        for (i = 0; i < 5; i++) {
                            cout << c1[i] << " "; //Displays the Result of Sum Array c1
                        }
                        cout << endl;

                        cout << "\nSubtracted Arrays: ";  //Function to subtract the two inputted arrays
                        for (i = 0; i < 5; i++) {
                            d1[i] = a1[i] - b1[i]; //a1 - b1 will be stored in d1 (Difference Array)
                        }
                        for (i = 0; i < 5; i++) {
                            cout << d1[i] << " "; //Displays the Result of Difference Array d1
                        }
                        cout << endl;

                        cout << "\nMultiplied Arrays: ";  //Function to multiply the two inputted arrays
                        for (i = 0; i < 5; i++) {
                            e1[i] = a1[i] * b1[i]; //a1 * b1 will be stored in e1 (Product Array)
                        }
                        for (i = 0; i < 5; i++) {
                            cout << e1[i] << " "; //Displays the Result of Product Array e1
                        }
                        cout << endl;

                        cout << "\nDivided Arrays: ";  //Function to divide the two inputted arrays
                        for (i = 0; i < 5; i++) {
                            if (b1[i] != 0) { //Checks if b isn't 0,
                                f1[i] = (double)a1[i] / b1[i]; //If it isn't will perform a1 / b1
                            } else {
                                f1[i] = 0; //If it is 0,
                                cout << "Error. Can't Divide by Zero at Value " << i << endl; //This will print out
                            }
                        }
                        for (i = 0; i < 5; i++) {
                            cout << f1[i] << " "; //Displays the Result of Quotient Array f1
                        }
                        cout << endl;
                    }
                    break;

                    case 5: {  //Multiply Your Array with a Number (Exercise #35)
                        int array[5];  //User inputted array
                        int n;  //Number for multiplication
                        int result[5];  //Result of Array * Number

                        cout << "Enter 5 Values for the Array: ";  //User inputs Array
                        for (int i = 0; i < 5; ++i) {
                            cin >> array[i]; //Takes the user inputted array
                        }

                        cout << "Enter the Number to Multiply Each Value in the Array by: ";  //User inputs number to multiply that same array with
                        cin >> n;

                        for (int i = 0; i < 5; ++i) {
                            result[i] = array[i] * n; //Stores result in result[i] and takes the product of inputted array * inputted number
                        }

                        cout << "Results after Multiplication:\n";  //Results after multiplying the array with number
                        for (int i = 0; i < 5; ++i) {
                            cout << "Value " << (i + 1) << ": " << result[i] << "\n"; //Displays the Value of Array * inputted number
                        }
                    }
                    break;
                    
                    case 6: {  //Create a 2x2 Matrix and add the values together (Exercise #36)
                        int matrix[2][2];  //Matrix 2x2
                        int addition = 0;  //Addition of Matrix 2x2 elements

                        cout << "Enter elements for Matrix (2x2):\n";  //Functions to add the elements
                        for (int i = 0; i < 2; i++) {
                            for (int j = 0; j < 2; j++) {
                                cout << "Enter Element [" << i << "][" << j << "]: ";
                                cin >> matrix[i][j];
                                addition += matrix[i][j];  //Takes the elements in Matrix[i][j] and adds them together
                            }
                        }
                        cout << "\nThe sum of the elements in the matrix is: " << addition << endl;  //Prints out the sum of the elements in the Matrix
                    }
                    break;

                    case 7: {  //Create 2 Matrices 2x2 and Add, Subtract, and Multiply them (Exercise #37)
                        int matrixA[2][2];  //Matrix A for User input
                        int matrixB[2][2];  //Matrix B for User Input
                        int matrixSum[2][2];  //Matrix Sum for new Matrix after they've both been added together
                        int matrixDiff[2][2];  //Matrix Diff for new Matrix after they've both been subtracted
                        int matrixProd[2][2];  //Matrix Prod for new Matrix after they've both been multiplied together

                        cout << "Enter Elements for Matrix A (2x2):\n";  //The user will set/create their Array A
                        for (int i = 0; i < 2; i++) {
                            for (int j = 0; j < 2; j++) {
                                cout << "Enter Element A[" << i << "][" << j << "]: ";
                                cin >> matrixA[i][j]; //Takes user input for Matrix A elements
                            }
                        }
                        cout << "\nEnter Elements for Matrix B (2x2):\n";  //The user will set/create their Array B
                        for (int i = 0; i < 2; i++) {
                            for (int j = 0; j < 2; j++) {
                                cout << "Enter Element B[" << i << "][" << j << "]: ";
                                cin >> matrixB[i][j]; //Takes user input for Matrix B elements
                            }
                        }
                        for (int i = 0; i < 2; i++) {  //Function for Matrix Sum, adds Matrix A and Matrix B
                            for (int j = 0; j < 2; j++) {
                                matrixSum[i][j] = matrixA[i][j] + matrixB[i][j]; //Matrix A + Matrix B = MatrixSum
                            }
                        }
                        for (int i = 0; i < 2; i++) {  //Function for Matrix Difference, subtracts Matrix A and Matrix B
                            for (int j = 0; j < 2; j++) {
                                matrixDiff[i][j] = matrixA[i][j] - matrixB[i][j]; //Matrix A - Matrix B = MatrixDiff
                            }
                        }
                        for (int i = 0; i < 2; i++) {  //Function for Matrix Product, multiplies Matrix A and Matrix B
                            for (int j = 0; j < 2; j++) {
                                matrixProd[i][j] = 0;
                                for (int k = 0; k < 2; k++) {
                                    matrixProd[i][j] += matrixA[i][k] * matrixB[k][j]; //Matrix A * Matrix B = MatrixProd
                                }
                            }
                        }
                        cout << "\nMatrix A + Matrix B:\n";  //Results for Sum
                        for (int i = 0; i < 2; i++) {
                            for (int j = 0; j < 2; j++) {
                                cout << matrixSum[i][j] << " "; //Displays the Sum Results Matrix
                            }
                            cout << endl;
                        }
                        cout << "\nMatrix A - Matrix B:\n";  //Results for Difference
                        for (int i = 0; i < 2; i++) {
                            for (int j = 0; j < 2; j++) {
                                cout << matrixDiff[i][j] << " "; //Displays the Difference Results Matrix
                            }
                            cout << endl;
                        }
                        cout << "\nMatrix A * Matrix B:\n";  //Results for Product
                        for (int i = 0; i < 2; i++) {
                            for (int j = 0; j < 2; j++) {
                                cout << matrixProd[i][j] << " "; //Displays the Product Results Matrix
                            }
                            cout << endl;
                        }

                    }
                    break;

                    case 8: {  //Determine the Greater of Two Numbers (Exercise #38)
                        cout << "Enter Two Numbers: ";
                        cin >> n >> m; //User inputs 2 numbers

                        int result = greaterthan(n, m); //Finds the greater than of the two numbers
                        cout << "The Greater Number is: " << result << endl;  //Displays the Greater Number of the two

                    }
                    break;

                    case 9: {  //Add Two Integers together (Exercise #39)
                        cout << "Enter Two Integers: ";
                        cin >> n >> m; //User inputs 2 numbers

                        int result = add(n, m); //Adds the two numbers
                        cout << "Result: " << result << endl; //Displays the sum results
                    }
                    break;

                    case 10: {  //Subtract Two Integers (Exercise #40)
                        cout << "Enter Two Integers: ";
                        cin >> n >> m; //User inputs 2 Numbers

                        int difference = subtract(n, m); //Subtracts the two numbers
                        cout << "Result of Subtraction: " << difference << endl; //Displays the difference results
                    }
                    break;


                     default:
                    cout << "Invalid option. Please try again." << endl;
                    break;
                }
                break;
            }

            case 6: { //Classes in C++ Menu (Exercises #41 - 50)
                cout << "\nWelcome to Classes in C++ Menu!\n"; 
                cout << "Choose Which Operation You wish for me to Perform!\n";
                cout << "1. Futbol Genius 2!!!\n"; //Exercise #41 - Futbol Genius 2
                cout << "2. Futbol Genius 3!!!\n"; //Exercise #42 - Futbol Genius 3
                cout << "3. Ideal Vacation Planner.\n"; //Exercise #43 - Ideal Vacation Planner
                cout << "4. Happiness Game :)\n"; //Exercise #44 - The Happiness Game 
                cout << "5. Inverse Matrix Calculation.\n"; //Exercise #45 - Inverse Matrix Calculation
                cout << "6. Linear Regression to see how many hours you need to Study to Succeed.\n"; //Exercise #46 - Study = Success
                cout << "7. Basic Class.\n"; //Exercise #47 - Basic Class in C++
                cout << "8. Constructor and Destructor in Classes.\n"; //Exercise #48 - Constructor and Destructor in Classes
                cout << "9. Inheritance Class.\n"; //Exercise #49 - Inheritance Class
                cout << "10. Run in the Park.\n"; //Exercise #50 - Run in the Park

                cout << "Enter Your Choice (1-10): ";
                int classes_opc;
                cin >> classes_opc;

                switch (classes_opc) {
                    case 1: { //Futbol Genius 2 (Exercise #41)
                        int score = 0; //Declaring Integer Variable Score setting it equal to 0
                        int answer; //Declaring Integer Variable Answer
                        
                        cout << "Welcome to Futbol Genius 2! Very Similar to the first game, but now with different questions! Good Luck!\n";
                        cout << "\n";

                        cout << "Question 1: Who won the 2010 FIFA World Cup?\n"; //Question 1
                        cout << " 1. Germany\n 2. Spain\n 3. England\n 4. Ecuador\n"; //Multiple Choice Selection
                        cout << "Your Answer (1-4): ";
                        cin >> answer;

                        if (answer == 2) { //If Answer = 2,
                            score += 100; //Add 100 Score to Score
                        } else {
                            cout << "Wrong it was Spain. " << endl; //If wrong, the user gets no points
                        }

                        cout << "Question 2: Who won the 2024 Balon D'or?\n"; //Question 2
                        cout << " 1. Vinicius 😂\n 2. Rodri\n 3. Lamine Yamal\n 4. Jude Bellingham\n"; //Multiple Choice Selection
                        cout << "Your Answer (1-4): ";
                        cin >> answer;

                        if (answer == 2) { //If Answer = 2,
                            score += 100; //Add 100 Score to Score
                        } else {
                            cout << "Wrong it was Rodri." << endl; //If wrong, the user gets no points
                        }

                        cout << "Question 3: Who Won the Premier League in the 2023/2024 season?\n"; //Question 3
                        cout << " 1. Manchester City\n 2. Manchester United\n 3. Arsenal\n 4. Liverpool\n"; //Multiple Choice Selection
                        cout << "Your Answer (1-4): ";
                        cin >> answer;

                        if (answer == 1) { //If Answer = 1,
                            score += 100; //Add 100 Score to Score
                        } else {
                            cout << "Wrong it was Manchester City" << endl; //If wrong, the user gets no points
                        }

                        cout << "Question 4: Who won the Copa America in 2024?\n"; //Question 4
                        cout << " 1. Ecuador\n 2. Colombia\n 3. Argentina\n 4. Brazil\n"; //Multiple Choice Selection
                        cout << "Your Answer (1-4): ";
                        cin >> answer;

                        if (answer == 3) { //If Answer = 3,
                            score += 100; //Add 100 Score to Score
                        } else {
                            cout << "Wrong it was Argentina" << endl; //If wrong, the user gets no points
                        }

                        cout << "Question 5: Who won the 2024 Euros?\n"; //Question 5
                        cout << " 1. England\n 2. France\n 3. Germany\n 4. Spain\n"; //Multiple Choice Selection
                        cout << "Your Answer (1-4): ";
                        cin >> answer;

                        if (answer == 4) { //If Answer = 4,
                            score += 100; //Add 100 Score to Score
                        } else {
                            cout << "Wrong it was Spain" << endl; //If wrong, the user gets no points
                        }

                        cout << "\nYour Total Score was: " << score << " points\n"; //Displays the User's Overall Score based on correct answers
                        if (score >= 300) {
                            cout << "You are a Futbol Genius⚽️!\n"; //If score Greater than or equal to 300, they win!
                        } else {
                            cout << "Do you Even Watch Futbol, lil bro?\n"; //If it's less than 300, they lost.
                        }
                        
                    }
                    break;

                    case 2: { //Futbol Genius 3 (Exercise #42)
                        int score = 0; //Declaring Integer Variable Score with a value of 0
                        int answer; //Declaring Integer Variable Answer

                        cout << "Welcome to Futbol Genius 3! Very Similar to the past 2 games, but now with different questions! Good Luck!\n";
                        cout << "\n";
                        
                        cout << "Question 1: Who won the 2018 FIFA World Cup?\n"; //Question 1
                        cout << " 1. Germany\n 2. Spain\n 3. England\n 4. France\n";  //Multiple Choice Selection
                        cout << "Your Answer (1-4): ";
                        cin >> answer;

                        if (answer == 4) { //If Answer = 4,
                            score += 100; //Add 100 Score to Score
                        } else {
                            cout << "Wrong it was France. " << endl; //If wrong, the user gets no points
                        }

                        cout << "Question 2: Who won the 2023 Balon D'or?\n"; //Question 2
                        cout << " 1. Messi🐐\n 2. Rodri\n 3. Lamine Yamal\n 4. Jude Bellingham\n";  //Multiple Choice Selection
                        cout << "Your Answer (1-4): ";
                        cin >> answer;

                        if (answer == 1) { //If Answer = 1,
                            score += 100; //Add 100 Score to Score
                        } else {
                            cout << "Wrong it was Messi🐐." << endl;  //If wrong, the user gets no points
                        }

                        cout << "Question 3: Who Won LaLiga in the 2022/2023 season?\n"; //Question 3
                        cout << " 1. Barcelona\n 2. Real Madrid\n 3. Sevilla\n 4. Atletico Madrid\n";  //Multiple Choice Selection
                        cout << "Your Answer (1-4): ";
                        cin >> answer;

                        if (answer == 1) { //If Answer = 1,
                            score += 100; //Add 100 Score to Score
                        } else {
                            cout << "Wrong it was Barcelona" << endl; //If wrong, the user gets no points
                        }

                        cout << "Question 4: Who won the Yachine Goalie Award in 2024?\n";  //Question 4
                        cout << " 1. Ederson\n 2. Allison\n 3. Emiliano Martinez\n 4. Ter Stegen\n";  //Multiple Choice Selection
                        cout << "Your Answer (1-4): ";
                        cin >> answer;

                        if (answer == 3) { //If Answer = 3,
                            score += 100; //Add 100 Score to Score
                        } else {
                            cout << "Wrong, it was Emiliano Martinez." << endl;  //If wrong, the user gets no points
                        }

                        cout << "Question 5: Who has 900+ career goals right now?\n";  //Question 5
                        cout << " 1. Messi🐐\n 2. Cristiano Ronaldo\n 3. Ronaldinho\n 4. Neymar Jr.\n";  //Multiple Choice Selection
                        cout << "Your Answer (1-4): ";
                        cin >> answer;

                        if (answer == 2) { //If Answer = 2,
                            score += 100; //Add 100 Score to Score
                        } else {
                            cout << "Wrong, it was Cristiano Ronaldo" << endl; //If wrong, the user gets no points
                        }

                        cout << "\nYour Total Score was: " << score << " points\n"; //Displays the User's Overall Score based on Correct Answers
                        if (score >= 300) { //If Score is greater than or equal to 300,
                            cout << "You are a Futbol Genius⚽️!\n"; //The user wins
                        } else {
                            cout << "Do you Even Watch Futbol, lil bro?\n"; //If less than 300, the user lost
                        }
                         
                    }
                    break;

                    case 3: { //Ideal Vacation Planner (Exercise #43)
                        string destination, climate, accommodation, activities, travelStyle, food, duration, budget;  //String Variables
                        int choice; //Integer Variable Choice

                    cout << "Welcome to Ideal Vacation Planner!\n";
                    cout << "To be able to find the best Vacation for You!\n";

                    //Q1
                    cout << "Where would you like to go?\n";
                    cout << " 1. Beach\n 2. Mountains\n 3. City\n 4. Bed\n"; //Multiple Choice Selection
                    cout << "Your Answer: ";
                    cin >> choice;

                    switch (choice) {
                    case 1: destination = "Beach"; break;  //If they picked 1, the destination would be Beach
                    case 2: destination = "Mountains"; break; //If they picked 2, the destination would be Mountains
                    case 3: destination = "City"; break; //If they picked 3, the destination would be City
                    case 4: destination = "Bed"; break; //If they picked 4, the destination would be your Bed
                    }

                    //Q2
                    cout << "What Climate do you prefer?\n";
                    cout << " 1. Warm and Sunny\n 2. Cold and Snowy\n 3. Mild and Breezy\n 4. Room Temperature\n";  //Multiple Choice Selection
                    cout << "Your Answer: ";
                    cin >> choice;

                    switch (choice) {
                    case 1: climate = "Warm and Sunny"; break;  //If they picked 1, the climate would be Warm and Sunny
                    case 2: climate = "Cold and Snowy"; break;  //If they picked 2, the climate would be Cold and Snowy
                    case 3: climate = "Mild and Breezy"; break;  //If they picked 3, the climate would be Mild and Breezy
                    case 4: climate = "Room Temperature"; break;  //If they picked 4, the climate would be Room Temperature
                    }

                    //Q3
                    cout << "What type of accommodation do you prefer?\n";
                    cout << " 1. Beach House\n 2. Cabin\n 3. Hotel \n 4. Your Home\n";  //Multiple Choice Selection
                    cout << "Your Answer: ";
                    cin >> choice;

                    switch (choice) {
                    case 1: accommodation = "Beach House"; break;  //If they picked 1, the accommodation would be beach house
                    case 2: accommodation = "Cabin"; break;  //If they picked 2, the accommodation would be Cabin
                    case 3: accommodation = "Hotel"; break;  //If they picked 3, the accommodation would be Hotel
                    case 4: accommodation = "Your Home"; break;  //If they picked 4, the accommodation would be Your Home
                    }

                    //Q4
                    cout << "What activities would you like to do?\n";
                    cout << " 1. Swim\n 2. Hike\n 3. Shop\n 4. Sleep\n";  //Multiple Choice Selection
                    cout << "Your Answer: ";
                    cin >> choice;

                    switch (choice) {
                    case 1: activities = "Swim"; break;  //If they picked 1, the activities would be swimming
                    case 2: activities = "Hike"; break;   //If they picked 2, the activities would be Hiking
                    case 3: activities = "Shop"; break;  //If they picked 3, the activities would be Shopping
                    case 4: activities = "Sleep"; break;  //If they picked 4, the activities would be Sleeping
                    }

                    //Q5
                    cout << "Do you prefer a relaxed or an active travel style vacation?\n";
                    cout << " 1. Relaxed\n 2. Active\n";  //Multiple Choice Selection
                    cout << "Your Answer: ";
                    cin >> choice;

                    switch (choice) {
                    case 1: travelStyle = "Relaxed"; break;  //If they picked 1, the travelstyle would be Relaxed
                    case 2: travelStyle = "Active"; break;  //If they picked 2, the travelstyle would be Active
                    }

                    //Q6
                    cout << "What Type of food do you prefer?\n";
                    cout << " 1. Take-out/Fast Food\n 2. Homemade\n";  //Multiple Choice Selection
                    cout << "Your Answer: ";
                    cin >> choice;

                    switch (choice) {
                    case 1: food = "Take-out/Fast Food"; break;  //If they picked 1, the food would be Take-Out/Fast Food
                    case 2: food = "Homemade"; break;  //If they picked 2, the food would be Homemade
                    }

                    //Q7
                    cout << "How long would you like your vacation to be?\n";
                    cout << " 1. Weekend\n 2. One Week\n 3. Two Weeks\n 4. A Month\n";  //Multiple Choice Selection
                    cout << "Your Answer: ";
                    cin >> choice;

                    switch (choice) {
                    case 1: duration = "Weekend"; break;  //If they picked 1, the duration would be a weekend
                    case 2: duration = "One Week"; break;  //If they picked 2, the duration would be a week
                    case 3: duration = "Two Weeks"; break;  //If they picked 3, the duration would be Two Weeks
                    case 4: duration = "A Month"; break;  //If they picked 4, the duration would be a month
                    }

                    //Q8
                    cout << "What's your budget?\n";
                    cout << " 1. Low\n 2. High\n";  //Multiple Choice Selection
                    cout << "Your Answer: ";
                    cin >> choice;
            
                    switch (choice) {
                    case 1: budget = "Low"; break; //If they picked 1, the budget would be low
                    case 2: budget = "High"; break;  //If they picked 2, the budget would be high
                    }

                    //Summary on User's Choice
                    cout << "Here is Your Ideal Vacation Plan:\n";
                    cout << "Destination: " << destination << endl;
                    cout << "Climate: " << climate << endl;
                    cout << "Accommodation: " << accommodation << endl;
                    cout << "Activities: " << activities << endl;
                    cout << "Travel Style: " << travelStyle << endl;
                    cout << "Food: " << food << endl;
                    cout << "Duration: " << duration << endl;
                    cout << "Budget: " << budget << endl;

                    //Another summary/message of the user's choices making it more suitable
                    cout << "\nYou would love a " << duration << " vacation to the " << destination
                    << " in a " << climate << " climate, staying at a " << accommodation
                    << " with " << activities << " activities, following a " << travelStyle
                    << " travel style, enjoying " << food << ", food and keeping within a "
                    << budget << " budget.\n";

                    cout << "Thank you for using our Questionaire!\n";
                        
                        
                    }
                    break;

                    case 4: {  //The Happiness Game (Exercise #44)
                        int score = 0; //Declaring Integer Score with a value of 0
                        int answer;  //Declaring Integer Answer
                        string name; //Declaring String Name

                        cout << "Welcome to the Fun Game :)\n";
                        cout << "Where You can Measure Your Level of Happiness!\n";
                        cout << "To begin please enter Your Name: ";
                        cin >> name;  //User enters their name here
                        cout << "\nHello " << name << endl; //Nova//Happiness Game Greets the User with their name

                        cout << "FOOD CATEGORY\n"; //1st Category - Dealing with the User's Food
                        cout << "Question #1: Have You Eaten Breakfast Today?\n";  //Question 1
                        cout << " 1. Yes\n 2. No\n";  //Multiple Choice Selection
                        cout << "Your Answer (1-2): ";
                        cin >> answer;

                        if (answer == 1) { //If Answer = 1,
                            score += 100; //100 Score will be added to User's total score
                        } else {
                            cout << "Suggestion: Eat Breakfast; It's the MOST important meal of the day!\n"; //If answer was 2, recommendation for user
                        }

                        cout << "Question #2: Have you Eaten Lunch Today?\n";  //Question 2
                        cout << " 1. Yes\n 2. No\n"; //Multiple Choice Selection
                        cout << "Your Answer (1-2): ";
                        cin >> answer;

                        if (answer == 1) { //If Answer = 1,
                            score += 100; //100 Score will be added to User's total score
                        } else {
                            cout << "Suggestion: Eat Lunch; it's the SECOND most important meal of the day!\n";  //If answer was 2, recommendation for user
                        }

                        cout << "Question #3: Have you Eaten Dinner Today?\n";  //Question 3
                        cout << " 1. Yes\n 2. No\n";  //Multiple Choice Selection
                        cout << "Your Answer (1-2): ";
                        cin >> answer;

                        if (answer == 1) { //If Answer = 1,
                            score += 100; //100 Score will be added to User's total score
                        } else {
                            cout << "Suggestion: Eat Dinner; it's the THIRD most important meal of the day!\n"; //If answer was 2, recommendation for user
                        }

                        cout << "SLEEP CATEGORY\n";  //2nd Category - Dealing with User's Sleeping Habits
                        cout << "Question #4: How many hours of sleep did you get last night?\n";  //Question 4
                        cout << " 1. None\n 2. 4 Hours\n 3. 6 Hours\n 4. 8 Hours\n";  //Multiple Choice Selection
                        cout << "Your Answer (1-4): ";
                        cin >> answer;

                        if (answer == 4) {  //If Answer = 4, 
                            score += 100; //100 Score will be added to User's total score
                        } else {
                            cout << "Suggestion: Try to get some more sleep tonight!\n"; //If answer was anything other than 4, recommendation for user
                        }

                        cout << "Question #5: Did you use your phone or other technology devices before going to sleep?\n";  //Question 5
                        cout << " 1. Yes\n 2. No\n";  //Multiple Choice Selection
                        cout << "Your Answer (1-2): ";
                        cin >> answer;

                        if (answer == 2) { //If answer = 2,
                            score += 100; //100 score will be added to User's total score
                        } else {
                            cout << "Suggestion: Try not to use your phone before going to sleep, especially if you're struggling to sleep.\n";  //If answer was 1, recommendation for user
                        }

                        cout << "WORK/SCHOOL CATEGORY\n";  //3rd Category - Work/School Category 
                        cout << "Question #6: How was work or/and school today?\n";  //Question 6
                        cout << " 1. Good\n 2. Bad\n";  //Multiple Choice Selection
                        cout << "Your Answer (1-2): ";
                        cin >> answer;

                        if (answer == 1) {  //If answer = 1,
                            score += 100;  //100 Score will be added to User's total score
                        } else {
                            cout << "Suggestion: Try exercising or do your hobbies.\n";  //If answer was 2, recommendation for user
                        }

                        cout << "Question #7: Did you feel exhausted at work/school today?\n";  //Question 7
                        cout << " 1. Yes\n 2. No\n";  //Multiple Choice Selection
                        cout << "Your Answer (1-2): ";
                        cin >> answer;

                        if (answer == 2) { //If answer = 2,
                            score += 100; //100 score will be added to User's total score 
                        } else {
                            cout << "Question #7 (Part 2): Did you eat lunch at work/school and breakfast before too?\n";  //Question 7 Part 2, if Answer = 1,
                            cout << " 1. Yes\n 2. No\n";  //Multiple Choice Selection
                            cout << "Your Answer (1-2): ";
                            cin >> answer;

                            if (answer == 1) {  //If answer = 1,
                                cout << "Good, make sure to eat, that could be why you're exhausted.\n"; //Tip
                            } else {
                                cout << "Suggestion: Try to eat before and during work to maintain energy and not feel exhausted all the time.\n";  //Recommendation
                            }
                        }

                        cout << "SOCIAL/FAMILY LIFE CATEGORY\n";  //4th Category - Social/Family Life Category
                        cout << "Question #8: Did you talk or hang out with any of your friends today or in the last few days?\n";  //Question 8
                        cout << " 1. Yes\n 2. No\n";  //Multiple Choice Selection
                        cout << "Your Answer (1-2): ";
                        cin >> answer;

                        if (answer == 1) {  //If answer = 1,
                            score += 100;  //100 score will be added to user's overall score
                        } else {
                            cout << "Suggestion: Try talking to your friends or make some new ones :)\n";  //If answer was 2, recommendation for user
                        }

                        cout << "Question #9: Did you talk or hang out with any of your family members today or in the last few days?\n";  //Question 9
                        cout << " 1. Yes\n 2. No\n";  //Multiple Choice Selection
                        cout << "Your Answer (1-2): ";
                        cin >> answer;

                        if (answer == 1) {  //If answer = 1,
                            score += 100; //100 score will be added to user's overall score
                        } else {
                            cout << "Suggestion: Try talking to your family members; they are your family after all, they'll always be there for you!\n"; //If answer = 2, recommendation for user
                        }

                        cout << "FINAL QUESTION!\n";  //Final Question
                        cout << "Question #10: Did you smile today?\n";  //Question 10
                        cout << " 1. Yes\n 2. No\n";  //Multiple Choice Selection
                        cout << "Your Answer (1-2): ";
                        cin >> answer;

                        if (answer == 1) {  //If answer = 1,
                            score += 100;  //The final 100 score will be added to user's overall score
                        } else {
                            cout << "Suggestion: Smile, make the day yours :)\n"; //If answer was 2, recommendation for user
                        }

                        int happinesspercentconvert = score / 10;  //Turned the final score into a percentage %, by dividing it by 10

                        cout << name << " Your Happiness Level is: " << happinesspercentconvert << "%\n";  //Displays the user the happiness percent they got from their answer

                        if (happinesspercentconvert >= 60) {  //If the percentage is greater than or equal to 60
                            cout << "\nYour Day is Filled with Happiness, Keep it Up! :)\n";  //The user passed and is HAPPY
                        } else {
                            cout << "\nTry to follow the provided suggestions to make your day better and filled with Happiness!\n";  //If it's less than 60, the user is sad :(
                        }

                    }
                    break;

                    case 5: {  //Inverse Matrix Calculation (Exercise #45)
                        double MatrixA[2][2]; //This will declare Matrix A for our coefficients 2x2 Matrix
                        double Variables[2]; //This will be for the right-side values after the equals sign 2x1 Matrix

                        //Input coefficients for the first equation a, b, and c
                        cout << "Enter coefficients for the first equations for (a*x + b*y = c): ";
                        cin >> MatrixA[0][0] >> MatrixA[0][1]; //Coefficients for a and b

                        cout << "Enter the constant term (c): ";
                        cin >> Variables[0]; //Value for C after the equal sign

                        //Input coefficients for the second equation d, e, and f
                        cout << "Enter coefficients for the second equation (for d*x + e*y = f): ";
                        cin >> MatrixA[1][0] >> MatrixA[1][1]; //Coefficients d and e

                        cout << "Enter the constant term (f): ";
                        cin >> Variables[1]; //Value for F after the Equal Sign

                        double determinant = MatrixA[0][0] * MatrixA[1][1] - MatrixA[0][1] * MatrixA[1][0]; //Function for calculating the answer using a * d - b * c

                        if (determinant == 0) { //If determinant = 0 then no solutions exist
                            cout << "No Solution Exists." << endl;
                        } else { //If it doesn't, it will perform this function: 
                            double inverseMatrix[2][2] = { //New inverseMatrix for inverse
                                {MatrixA[1][1] / determinant, - MatrixA[0][1] / determinant}, //This will take Matrices and bottom-right divided by determinant, and top-right negative divided by determinant
                                {-MatrixA[1][0] / determinant, MatrixA[0][0] / determinant} //This will take the Matrices and bottom-left negative divided by answer, and top-left divided by determinant
                            };

                            double Y = inverseMatrix[0][0] * Variables[0] + inverseMatrix[0][1] * Variables[1]; //This will calculate the answer for Y
                            double Z = inverseMatrix[1][0] * Variables[0] + inverseMatrix[1][1] * Variables[1]; //This will calculate the answer for Z

                            cout << "The Solutions are: " << endl;
                            cout << "Y = " << Y << endl; //This will print out the value of Y
                            cout << "Z = " << Z << endl; //This will print out the value of Z
                        }
                    }
                    break;

                    case 6: {  //Study = Success (Exercise #46)
                        int m = 10; //For each hour it will multiply 10
                        int b = 0; //If no hours = 0
                        int HoursPrediction; //Function of HoursPrediction to allow the user to input

                        cout << "Enter the number of Hours You Plan to Study (<= 10): ";
                        cin >> HoursPrediction;

                        if (HoursPrediction > 10) { //If the HoursPrediction is greater than 10
                            cout << "Study Hours Must be Less than or Equal to 10." << endl; //This message will print out since the predicted score will go over 100
                        } else {
                            int Score = predict(HoursPrediction, m, b); //Function of score to determine the score of the predicted exam score for hours studied 
                            cout << "If you Study for " << HoursPrediction << " Hours, "; //Output for Hours Studied 
                            cout << "Your predicted Exam Score is: " << Score << endl; //Output for the predicted score after seeing the amount of hours inputted 
                        }
                    }
                    break;

                    case 7: {  //Basic Class (Exercise #47)
                        Animal dog; //Creates a new Variable Dog
                        dog.name = "Chelsea"; //Set 1 of my dog's name to Chelsea
                        dog.speak(); //This will output Animal's name is: Chelsea

                        dog.name = "Princess"; //Set 1 of my dog's name to Princess
                        dog.speak(); //This will output Animal's name is: Princess

                        dog.name = "Chulo"; //Set 1 of my dog's name to Chulo
                        dog.speak(); //This will output Animal's name is: Chulo

                        dog.name = "Rote"; //Set 1 of my dog's name to Rote
                        dog.speak(); //This will output Animal's name is: Rote

                        cout << "Enter the name of your Pet: ";
                        cin >> dog.name; //Allows the User to Enter their pet's name
                        dog.speak(); //Display the User's Entered Pet's Name

                    }
                    break;

                    case 8: { //Constructor and Destructor (Exercise #48)
                        Box myBox; //This will create a new box and later on destroy it too
                    }
                    break;

                    case 9: { //Inheritance Class (Exercise #49)
                        Car myCar("Model S", 2022, 0); //This will create a new Car
                        
                        myCar.honk(); //Then the car will Honk
                        cout << myCar.brand + " " + myCar.getModel() << endl; //This will output the brand of the Car (Tesla) + the Tesla Model (S)
                        myCar.drive(); //This will call the drive function in my Car Class and print out Let's go for a ride
                       
                        cout << "Enter the Brand of the Car: ";
                        cin >> myCar.brand; //User enters their car brand

                        cout << "Enter the Model of the Car: ";
                        string carModel;
                        cin >> carModel; //User enters their car model
                        myCar.setModel(carModel); //Displays the user's car model

                        myCar.honk(); //User's car honks
                        cout << myCar.brand + " " + myCar.getModel() << endl; //This will output the brand of the car + model the user inputted
                        myCar.drive(); //User's car goes out for a ride
                    }
                    break;

                    case 10: {  //Run in the Park (Exercise #50)
                        Person person1("Wilson", 19); //Creates new person Wilson with the age of 19

                        person1.read(); //Wilson reads
                        person1.run(); //Wilson runs in the Park

                        Person person2("Mostafa", 20); //Creates new person Mostafa with the age of 20

                        person2.read(); //Mostafa reads
                        person2.run(); //Mostafa runs in the Park

                        //Allows the input for the user
                        cout << "Enter your name: "; 
                        cin >> name; //Allows the user to input their name
                        
                        cout << "Enter your age:  ";
                        cin >> age; //Allows the user to input their age

                        Person person3(name, age); //Creates new person with the user's name and age
                        person3.read(); //User reads
                        person3.run(); //User runs in the Park

                    }
                    break;

                    default:
                        cout << "Invalid Option!\n";
                }
            }
            break;

            case 7: {  //RandomNova Menu (Exercises #51 - 60)
                cout << "\nWelcome to RandomNova Menu!\n";
                cout << "Choose which Operation you wish for me to perform!\n";
                cout << "1. Car Classes\n";  //Car Classes (Exercise #51)
                cout << "2. Trick-or Treat Game🎃\n";  //Trick-or-Treat Game (Exercise #52)
                cout << "3. Calculate the Factorial of a Number through Recursion\n";  //Calculate Factorial of a Number (Exercise #53)
                cout << "4. Calculate a number in the Fibonacci sequence through Recursion\n";  //Calculate Fibonacci Number (Exercise #54)
                cout << "5. Calculate the sum of the digits of a number through Recursion\n";  //Calculate Sum of Digits  (Exercise #55)
                cout << "6. Encapsulation Class\n";  //Encapsulation Class  (Exercise #56)
                cout << "7. Overloading Constructors Class\n";  //Overloading Constructors (Exercise #57)
                cout << "8. Static Members Class\n";  //Static Members (Exercise #58)
                cout << "9. Inverse Matrix Calculator\n";  //Inverse Matrix Calculator 2 (Exercise #59)
                cout << "10. Freebie :), Pick to see what it does!\n";  //Freebie Past Exercise (Exercise #60)

                cout << "Enter Your Choice (1-10): ";
                int RandomNova_opc;
                cin >> RandomNova_opc;

                switch (RandomNova_opc) {
                    case 1: {  //Car Classes (Exercise #51)
                        string model;  //Declaring a string variable model
                        int year, mileage, newMileage;  //Declaring a integer variable year, mileage, newMileage

                        cout << "Enter Your Car Model: ";
                        cin >> model; //Asks the user for their car model

                        cout << "Enter Your Car Year: ";
                        cin >> year;  //Asks the user for their car year

                        cout << "Enter Initial Mileage: ";
                        cin >> mileage;  //Asks the user for thier car mileage

                        Car myCar(model, year, mileage);  //Saves the User's Car information

                        cout << "\nInitial Car Information:\n";
                        myCar.displaycarinfo(); //Displays the user's car info

                        myCar.honk();  //Car will honk
                        myCar.drive();  //Car will go for a drive

                        cout << "\nEnter New Mileage: ";
                        cin >> newMileage; //User enters their newMileage
                        myCar.updateMileage(newMileage); //Calls the updateMileage function to update mileage, if possible

                        cout << "\nUpdated Car Info:\n";
                        myCar.displaycarinfo(); //Displays Updated Car Info

                    }
                    break;

                    case 2: {  //Trick-or-Treat Game (Exercise #52)
                        int place;  //Declaring Integer Variable Place
                        string upstairs, door, treasure, cornmazestart, cornmazemid, tootsieroll, cornmazeend, wilson;  //Declaring String Variables for Game

                        cout << "Welcome to Trick or Treat!\n";
                        cout << "Pick a place to start your SCARY journey!\n";
                        cout << "1. Haunted House\n"; //Option 1 - Haunted House
                        cout << "2. Creepy Corn Maze\n"; //Option 2 - Creepy Corn Maze
                        cout << "3. Wilson's House\n"; //Option 3 - Wilson's House
                        cout << "Where would you like to go: ";
                        cin >> place; //The user can choose which Halloween Place they want to go trick-or-treating to

                        switch (place) {
                            case 1: //Haunted House
                                cout << "Welcome to the Haunted House!!!\n";
                                cout << "You have entered the Haunted House and are greeted by a statue telling you to pick. Go Upstairs or Downstairs?: ";
                                cin >> upstairs; //User inputs upstairs or downstairs
            
                                if (upstairs == "downstairs" || upstairs == "Downstairs") {  //If user inputs downstairs, they enter the basement
                                    cout << "You have entered the basement.\n";
                                    cout << "You find a key that unlocks a door.\n";
                                    cout << "But you run into 2 doors and can open only 1 with the key.\n";
                                    cout << "Pick a door: Left or Right\n";
                                    cin >> door; //User finds a key and now picks between left or right door
                
                                    if (door == "left" || door == "Left") { //If user inputted left door
                                        cout << "You opened the Left Door.\n";
                                        cout << "You find a Treasure Chest AND the Exit.\n";
                                        cout << "Do you Open the Treasure Chest and Leave or JUST leave?:\n";
                                        cin >> treasure; //They find a treasure chest, and have to choose whether to leave it or not
                    
                                        if (treasure == "open" || treasure == "Open") { //If user opens the treasure chest
                                            cout << "You find a bunch of candy and leave the Haunted House!\n";
                                            cout << "You made it back home and had a nice Halloween and ate all your candy! Delicious.\n"; //The user wins and goes home after a successful trick-or-treating experience 
                                        } else {
                                            cout << "You went home with no candy. What a bad Halloween :(\n"; //If the user leaves without opening the chest, they went home with no candy, it was all for nothing :(
                                        }
                                    } else if (door == "right" || door == "Right") { //If the user went through the right door
                                        cout << "You opened the Right Door.\n";
                                        cout << "Michael Myers was behind the door!\n";
                                        cout << "You died.\n"; //They died and lost.
                                    } else {
                                        cout << "Invalid door choice. Try again next time.\n"; //Invalid door option
                                    }
                                } else if (upstairs == "upstairs" || upstairs == "Upstairs") {  //If user inputted upstairs,
                                    cout << "You went upstairs and were greeted by Art the Clown.\n"; //They go upstairs and died.
                                    cout << "You died.\n"; //Lost.
                                } else {
                                    cout << "Invalid choice. You are lost in the Haunted House.\n"; //Invalid upstairs or downstairs option
                                }
                                break;
            
                            case 2:
                                cout << "Welcome to the Creepy Corn Maze!\n"; //Second Location - Creepy Corn Maze
                                cout << "You start off by having to choose go left or right:\n";
                                cin >> cornmazestart; //User inputs left or right
            
                                if (cornmazestart == "left" || cornmazestart == "Left") {  //If user inputted left, 
                                    cout << "You run into Freddy Krueger and he puts you to sleep.\n";  //They run into Freddy Krueger and died
                                    cout << "You died.\n"; //Lost.
                                } else if (cornmazestart == "right" || cornmazestart == "Right") {  //If user inputted right,
                                    cout << "You went right and have to pick left or right again.\n";
                                    cin >> cornmazemid; //They have to choose again left or right to continue in the corn maze
                
                                    if (cornmazemid == "left" || cornmazemid == "Left") {  //If user inputted second left,
                                        cout << "You run into Jason Voorhees.\n"; //They run into Jason Voorhees and died
                                        cout << "You died.\n"; //Lost.
                                    } else if (cornmazemid == "right" || cornmazemid == "Right") {  //If user inputted second right,
                                        cout << "You have one more path to go, but you find a Tootsie Roll on the floor. What do you do?:\n"; //They run into a Tootsie Roll
                                        cout << "Eat Tootsie Roll or Ignore it and keep going:\n";
                                        cin >> tootsieroll; //User chooses to ignore it or eat it
                    
                                        if (tootsieroll == "eat" || tootsieroll == "Eat") {  //If user eats the tootsie roll
                                            cout << "The tootsie roll was poisoned by a WITCH.\n"; //It was poisoned and they died
                                            cout << "You died.\n"; //Lost.
                                        } else if (tootsieroll == "ignore" || tootsieroll == "Ignore") { //If user ignores the tootsie roll, they continue in the maze
                                            cout << "You have to pick one more left or right:\n";
                                            cin >> cornmazeend; //User inputs one more left or right
                        
                                            if (cornmazeend == "left" || cornmazeend == "Left") {  //If user inputs left,
                                                cout << "You run into Ghostface.\n"; //They run into ghostface and died
                                                cout << "You died.\n"; //Lost.
                                            } else if (cornmazeend == "right" || cornmazeend == "Right") {  //If user inputs right, 
                                            cout << "You escaped and got 100 Reese's Peanut Butter Cups and went home to eat them ALL!\n"; //They go home with a lot of candy, and won!
                                            } else {
                                                cout << "Invalid choice. You got lost in the corn maze.\n"; //Invalid choice, user got lost in the corn maze and died
                                            }
                                        } else {
                                            cout << "Invalid choice. The tootsie roll vanished.\n"; //Invalid choice, the tootsie roll vanished
                                        }
                                    } else {
                                            cout << "Invalid choice. You got lost in the corn maze.\n"; //Invalid Choice, user got lost in corn maze and died
                                    }
                                } else {
                                    cout << "Invalid choice. You got lost in the corn maze.\n"; //Invalid Choice, User got lost in corn maze and died
                                }
                                break;
            
                             case 3:
                                cout << "Welcome to WILSON'S House!\n";  //Third Location - Wilson's House 
                                cout << "You knock on the door and say: Trick or Treat!\n";
                                cout << "You are greeted by Wilson and he says: Which one's better Reese's or M&M's?\n";
                                cin >> wilson; //User picks between Reese's or M&M's 
            
                                if (wilson == "Reese's" || wilson == "reese's") {  //If the user picked Reese's,
                                    cout << "Wilson gives you a handful of candy and you go home very happy with all your candy, Happy Halloween!\n"; //You go home with candy, you Win!
                                } else if (wilson == "M&M's" || wilson == "m&m's") { //If user picked M&M's,
                                    cout << "Wilson closes the door.\n";
                                    cout << "You go home very sad and without any candy :(\n"; //User gets no candy,
                                    cout << "You died.\n"; //User died and lost.
                                } else {
                                    cout << "Invalid choice. Wilson didn't understand you.\n"; //Invalid Choice, you died.
                                }
                                break;
                        }
                    }
                    break;

                    case 3: {  //Calculate Factorial of a number (Exercise #53)
                        int n; //Declaring Integer N

                        cout << "Enter a Positive Integer (+): ";
                        cin >> n; //User enters a positive integer

                        if (n < 0)
                            cout << "Error! Factorial can only be positive (+)." << endl; //Error if user enters a negative number
                        else
                            cout << "The factorial of " << n << " = " << factorial(n) << endl;  //If user inputted a positive integer, calculates the factorial of the positive integer
                    }
                    break;

                    case 4: {  //Calculate Fibonacci Number (Exercise #54)
                        int n; //Declaring Integer N

                        cout << "Enter a Number: ";
                        cin >> n; //User enters a positive integer

                        cout << "The Fibonacci number for " << n << " is: " << Fibonacci(n) << endl;  //If user inputted a positive integer, calculates the Fiboncacci of the positive integer
                    }
                    break;

                    case 5: { //Calculating the Sum of the Digits (Exercise #55)
                        int n; //Declaring Integer N

                        cout << "Enter a Number: ";
                        cin >> n; //User enters a positive integer

                        cout << "The sum of Digits is: " << sumDigit(n) << endl;  //if user inputted a positive integer, calculates the sum of digits of the positive integer
                    }
                    break;

                    case 6: {  //Encapsulation Class (Exercise #56)
                        Circle circle;  //Calls the Circle Class
                        double userRadius;  //Declaring the double user inputted radius

                        cout << "Enter the radius of the circle: ";
                        cin >> userRadius; //User inputs their radius

                        circle.setRadius(userRadius); //Calculates the radius by calling the function in the class

                        cout << "Area: " << circle.getArea() << endl;  //Displays the results of the area of the circle
                    }
                    break;

                    case 7: {  //Overloading Constructors Class (Exercise #57)
                        int userWidth, userHeight;  //Declaring the integer variables, userwidth and userheight

                        Rectangle rect1;  //This will call the function of the rectangle i already made an an example
                        cout << "Area of Rectangle1 (default): " << rect1.getArea() << endl;  //Displays the area, of the rectangle values i already have set

                        cout << "Enter Width for Rectangle2: ";
                        cin >> userWidth;  //user inputs their width for the rectangle

                        cout << "Enter Height for Rectangle2: ";
                        cin >> userHeight;  //user inputs their height for the rectangle

                        Rectangle rect2(userWidth, userHeight);  //Calls and calculate the user inputted rectangle to get the area
                        cout << "Area of Rectangle2: " << rect2.getArea() << endl;  //Displays the area of the rectangle using the values the user inputted
                    }
                    break;

                    case 8: {  //Static Members Class (Exercise #58)
                        int numAccounts;  //Declaring integer variables numaccounts

                        cout << "Enter the number of accounts to create: ";
                        cin >> numAccounts;  //user inputs how many accounts they want to create

                        for (int i = 0; i < numAccounts; i++) {
                            Account account;  //Creates a new account for the amount the user inputted
                        }

                        cout << "Total Accounts Created: " << Account::count << endl;  //Displays the total accounts created
                    }
                    break;

                    case 9: {  //Inverse Matrix Calculator (Exercise #59)
                        double a1, b1, c1, d1;  //Declaring double variable a1, b1, c1, and d1
                        double a2, b2, c2, d2;  //Declaring double variable a2, b2, c2, and d2
                        double a3, b3, c3, d3;  //Declaring double variable a3, b3, c3, and d3

                        cout << "Enter coefficients for the system of equations: " << endl;

                        cout << "Equation 1 (a1 * x + b1 * y + c1 * z = d1): " << endl;
                        cout << "a1: ";
                        cin >> a1;  //User inputs a1

                        cout << "b1: ";
                        cin >> b1;  //User inputs b1

                        cout << "c1: ";
                        cin >> c1;  //user inputs c1

                        cout << "d1: ";
                        cin >> d1;  //user inputs d1

                        cout << "Equation 2 (a2 * x + b2 * y + c2 * z = d2): " << endl;
                        cout << "a2: ";
                        cin >> a2;  //user inputs a2

                        cout << "b2: ";
                        cin >> b2;  //user inputs a2

                        cout << "c2: ";
                        cin >> c2; //user inputs c2

                        cout << "d2: ";
                        cin >> d2;  //user inputs d2

                        cout << "Equation 3 (a3 * x + b3 * y + c3 * z = d3): " << endl;
                        cout << "a3: ";
                        cin >> a3;  //user inputs a3

                        cout << "b3: ";
                        cin >> b3;  //user inputs b3

                        cout << "c3: ";
                        cin >> c3;  //user inputs c3

                        cout << "d3: ";
                        cin >> d3;  //user inputs d3

                        double D[3][3] = {{a1, b1, c1}, //Created a 3x3 matrix
                                          {a2, b2, c2},  //The Rows and Columns of the Matrix
                                          {a3, b3, c3}};  //Now we use this to solve the problems

                        double invD[3][3]; //This is our inverse Matrix
                        if(!inverseMatrix(D, invD)) { //If we can't make the inverse, this will print out
                            cout << "The system has no unique solution (the determinant = 0)." << endl;
                        } else {
                            double rhs[3] = {d1, d2, d3}; //These are some numbers we are solving for.
                            double x = invD[0][0] * rhs[0] + invD[0][1] * rhs[1] + invD[0][2] * rhs[2]; //Calculate the first answer using the inverse Matrix
                            double y = invD[1][0] * rhs[0] + invD[1][1] * rhs[1] + invD[1][2] * rhs[2]; //Calculate the second answer using the Inverse Matrix
                            double z = invD[2][0] * rhs[0] + invD[2][1] * rhs[1] + invD[2][2] * rhs[2]; //Finally, calculate the third answer using the Inverse Matrix

                            cout << "The solution is: " << endl;  //Displays results for x, y, and z
                            cout << "x = " << x << endl; //Displays the results for x
                            cout << "y = " << y << endl;  //Displays the results for y
                            cout << "z = " << z << endl;  //Displays the results for z
                        }
                    }
                    break;

                    case 10: {  //Freebie Exercise (Exercise #60)
                        int m;  //Declaring Integer Variable M
                        int n;  //Declaring Integer Variable N
                        int x;  //Declaring Integer Variable X

                        cout << "Freebie Exercise!\n";
                        cout << "In this exercise, we will:\n";
                        cout << "Find the Largest and Smallest of 3 Numbers!\n";  //Past exercise, largest and smallest of 3 numbers

                        cout << "Enter Number #1: ";
                        cin >> m; //User inputs their 1st number

                        cout << "Enter Number #2: ";
                        cin >> n;  //User inputs their 2nd number

                        cout << "Enter Number #3: ";
                        cin >> x;  //User inputs their 3rd number

                        cout << "The Smallest Number is: " << min(n, min(m, x)) << endl;  //Finds the smallest of m and x first, then the smallest of n and whichever is smaller m or x using min keyword
                        cout << "The Largest Number is: " << max(n, max(m, x)) << endl;  //Finds the largest of m and x first, then the largest of n and whichever is larger m or x using max keyword
                    }
                    break;

                    default:
                        cout << "Invalid Option!\n";
                }
                break;
            }
            break;

            case 8: { //Section #8: GameMaster Nova (Exercise #61 - 71)
                cout << "\nWelcome to GameMaster Nova\n";
                cout << "Choose Which Operation you Wish for me to Perform:\n";
                cout << "1. Calculate the Price of a House of 2000 square meters or feet through Linear Regression\n";  //House Pricer (Exercise #61)
                cout << "2. Calculate how much weekly weight you can lose by exercising throughout the week through Linear Regression\n"; //Weight Loss Helper (Exercise #62)
                cout << "3. Play Tic-Tac-Toe Game with a friend!\n";  //Tic-Tac-Toe (Exercise #63)
                cout << "4. Maze Madness Game!\n"; //Maze Madness Game (Exercise #64)
                cout << "5. Basic Pointers in c++\n";  //Basic Pointers (Exercise #65)
                cout << "6. Accessing Array Elements Using Pointers\n";  //Accessing Array Elements with Pointers (Exercise #66)
                cout << "7. Array Addition With Pointers\n";  //Array Addition with Pointers (Exercise #67)
                cout << "8. Array Multiplication With Pointers\n";  //Array Multiplication with Pointers (Exercise #68)
                cout << "9. Subtracting Arrays with Pointers\n";  //Array Subtraction with Pointers (Exercise #69)
                cout << "10. Passing Arrays to Functions Using Pointers\n";  //Passing Arrays to Functions (Exercise #70)
                cout << "11. Virtual Well-Being Assistant\n";  //Virtual Well-Being Assistant (Exercise #71)

                cout << "Enter Your Choice (1-11): ";
                int GameMasterNova_opc;
                cin >> GameMasterNova_opc;

                switch(GameMasterNova_opc) {
                    case 1: {  //House Pricer (Exercise #61)
                        int m = 150;  //Declaring Integer Variable M with a value of 150
                        int b = 50000;  //Declaring Integer Variable B with a value of 50,000

                        int sizePrediction;
                        cout << "Enter the Size of the House in square meters/feet: ";
                        cin >> sizePrediction;  //User enters the size of the house

                        if (sizePrediction < 0) {
                            cout << "Size must be a positive number." << endl;  //Size has to be more than 0
                        } else {
                            int predictedPrice = predictPrice(sizePrediction, m, b);  //Calls PredictPrice function recursively
                            cout << "For a house " << sizePrediction << " square meters/feet, ";  //Displays the size of the house
                            cout << "the predicted price is: $" << predictedPrice << endl;  //Displays the predicted price of the house 
                        }
                    }
                    break;

                    case 2: {  //Weight Loss Helper (Exercise #62)
                        double m = 0.5;  //Declaring double variable M with a value of 0.5
                        double b = 0;  //Declaring double variable b with a value of 0

                        int hoursPrediction;
                        cout << "Enter the number of hours you exercise per week: ";
                        cin >> hoursPrediction;  //User enters the hours they exercise per week

                        if (hoursPrediction < 0) {
                            cout << "Has to be a positive value." << endl; //Hours has to be more than 0
                        } else {
                            double weightLoss = predictWeightLoss(hoursPrediction, m, b); //Calls predictWeightLoss function recursively
                            cout << "If you exercise for " << hoursPrediction << " hours per week, ";  //Displays the hours you exercise per week
                            cout << "your predicted weekly weight loss is: " << weightLoss << " pounds." << endl; //Displays the predicted weight loss
                        }
                    }
                    break;

                    case 3: {  //Tic-Tac-Toe Game (Exercise #63)
                        cout << "Welcome to Tic-Tac-Toe!\n";
                        char spaces[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}; //Creates the spaces for the game
                        char player1 = 'X';  //Declaring Player1 with shape X
                        char player2 = 'O'; //Declaring Player2 with Shape O
                        bool running = true;  //Declared bool variable While running = true
                        bool player1Turn = true;  //Declared bool variable player1Turn = True
                        bool winnerDeclared = false;  //Declared bool variable winnerDeclared = False

                        drawBoard(spaces);  //This will draw the Tic-Tac-Toe Game board

                        //This is for the game to keep running and switch between turns
                        while (running) {
                            if (player1Turn) {
                                playerMove(spaces, player1);
                            } else {
                                playerMove(spaces, player2);
                            }

                            drawBoard(spaces);  //Draw the board after a player goes

                            if (checkWinner(spaces, player1)) { //Check the winner of the game
                                if (!winnerDeclared) {   //If nobody has won yet,
                                    cout << "Player 1 (X) Wins! :)\n"; //Announce that Player 1 is the winner
                                    winnerDeclared = true; //There is now a winner
                                }
                                running = false; //The game stops running
                            }
                            else if (checkWinner(spaces, player2)) {  //Check the winner of the game
                                if(!winnerDeclared) {  //If nobody has won yet
                                    cout << "Player 2 (O) Wins! :)\n";  //Announce that Player 2 is the winner
                                    winnerDeclared = true;  //There is now a winner
                                }
                                running = false;  //The game stops running
                            }
                            else if (checkTie(spaces)) {  //Check if the game has ended in a tie
                                if (!winnerDeclared) {  //If nobody has won yet,
                                    cout << "It's a Tie!\n";  //Announce that the game ended in a tie
                                    winnerDeclared = true;  //There is no winner, it's a tie
                                }
                                running = false;  //The game stops running
                            }

                            player1Turn = !player1Turn;  //After player1 turn goes, switches to player2's turn
                        }

                        cout << "Thanks for Playing Tic-Tac-Toe!\n";
                        break;
                    }
                    break;

                    case 4: {  //Maze Madness Game (Exercise #64)
                        int maze[10][10] = {0}; //This makes the Maze Map/Layout
                        for (int i = 0; i < 10; i++) {  //This will go through each row of the map
                            for (int j = 0; j < 10; j++) {  //Go through each column in the rows
                                if (rand() % 4 == 0) {  //Randomizer
                                    maze[i][j] = 1; //Put's the obstacle in the maze
                                }
                            }
                        }

                        int playerRow = 0, playerCol = 0;  //Declares the integer variable playerRow and playerCol with the value of 0
                        int goalRow = 9, goalCol = 9; //Declares the integer variable GoalRow and GoalCol with a value of 9

                        maze[playerRow][playerCol] = 0; //Players starts in this spot
                        maze[goalRow][goalCol] = 0; //Spot where the end goal is

                        char move;  //For the player to move
                        bool reachedGoal = false;  //Haven't reached the goal yet, so this is false

                        cout << "Welcome to Maze Madness!" << endl;
                        cout << "Reach the goal at the bottom-right corner!" << endl;

                        while (!reachedGoal) {
                            drawMaze(maze, playerRow, playerCol);  //Draws the Maze
                            cout << "Use WASD to move (W = Up, A = Left, S = Down, D = Right): ";  //Tells the player how to move around the Maze
                            cin >> move; //User inputs the direction they want to move in

                            if (movePlayer(maze, playerRow, playerCol, move)) {
                                if (playerRow == goalRow && playerCol == goalCol) {
                                    reachedGoal = true;
                                }
                            } else {
                                cout << "Invalid move, Try Again!" << endl;  //Invalid Player Move
                            }
                        }

                        cout << "Congratulations! You've reached the goal!" << endl; //The player escaped the Maze
                        break;
                    }
                    break;

                    case 5: {  //Basic Pointers in C++ (Exercise #65)
                        int number1 = 24; //Declaring an integer variable 24
                        int number2; //Declared another integer varible for the user 
                        int *pointer1 = &number1; //Declared a pointer to remember where number1 is stored
                        int *pointer2 = &number2; //Declared another pointer to remember where the user inputted number is stored

                        cout << "The Value of My Number is: " << number1 << endl; //Show the value of number1.
                        cout << "The Address of My Number is: " << &number1 << endl; //Show where number1 is stored in the computer.
                        cout << "Value Stored in Pointer: " << pointer1 << endl; //Show what the pointer is storing the address of number1
                        cout << "Value Pointed to by Pointer: " << *pointer1 << endl; //Show the value the pointer is looking at 24.

                        cout << "Now Input Your Own Number: ";
                        cin >> number2; //User inputs their number

                        cout << "The Value of Your Number is: " << number2 << endl; //Displays the number the user inputted 
                        cout << "The Address of Your Number is: " << &number2 << endl; //Displays where their number is stored in the computer.
                        cout << "Value Stored in Pointer: " << pointer2 << endl; //Displays what the pointer is storing (the address of "number2").
                        cout << "Value Pointed to by Pointer: " << *pointer2 << endl; //Displays the value the pointer is looking at (the user inputted number).

                    }
                    break;

                    case 6: {  //Accessing Array Elements Using Pointers (Exercise #66)
                        int arr1[5] = {10, 20, 30, 40, 50};  //Declared array1 with these values
                        int arr2[5]; //Declared array2 for the user to input
                        int *ptr1 = arr1; //Declared Pointer1 for Array1
                        int *ptr2 = arr2; //Declared Pointer2 for Array2

                        for (int i = 0; i < 5; i++) {
                            cout << "Element Array1[" << i << "] = " << *(ptr1 + i) << endl;  //Displays the Elements of Array1 with Pointers
                        }
                        
                        cout << "\n";

                        cout << "Enter 5 Elements for Array2: " << endl;
                        for (int i = 0; i < 5; i++) {
                            cout << "Element " << i << ": ";
                            cin >> *(ptr2 + i); //User inputs each element in Array2
                        }

                        for (int i = 0; i < 5; i++) {
                            cout << "Element Array2[" << i << "] = " << *(ptr2 + i) << endl;  //Displays the Elements of Array2 with Pointers 
                        }
                    }
                    break;

                    case 7: {  //Array Addition with Pointers (Exercise #67)
                        const int SIZE = 6;  //Setting array size = 6
                        int arr1[SIZE], arr2[SIZE], arr3[SIZE];  //Declaring all the integer variables size
                        int *ptr1 = arr1;  //Declaring Integer variables ptr1 equal to array1
                        int *ptr2 = arr2;  //Declaring Integer variables ptr2 equal to array2
                        int *ptr3 = arr3;  //Declaring Integer variables ptr3 equal to array3

                        cout << "Enter 6 Elements for the First Array: " << endl;
                        for (int i = 0; i < SIZE; i++) {
                            cout << "Element " << i + 1 << ": ";
                            cin >> *(ptr1 + i); //This will use pointers to store input in array1
                        }
                        
                        cout << "\nEnter 6 Elements for the Second Array:" << endl;
                        for (int i = 0; i < SIZE; i++) {
                            cout << "Element " << i + 1 << ": ";
                            cin >> *(ptr2 + i);  //This will use pointers2 to store input in array2
                        }

                        for (int i = 0; i < SIZE; i++) {
                            *(ptr3 + i) = *(ptr1 + i) + *(ptr2 + i);  //This will take pointers1 and pointers2 and add them together into pointers3
                        }

                        cout << "\nThe Sum After Adding the two Arrays is: " << endl;
                        for (int i = 0; i < SIZE; i++) {
                            cout << "Element " << i + 1 << ": " << *(ptr3 + i) << endl;  //Display the sum result (pointers3)
                        }
                    }
                    break;

                    case 8: {  //Array Multiplication with Pointers (Exercise #68)
                        const int SIZE = 6;  //Setting array size = 6
                        int arr1[SIZE], arr2[SIZE], arr3[SIZE];  //Declaring all the integer variables size
                        int *ptr1 = arr1;  //Declaring Integer variables ptr1 equal to array1
                        int *ptr2 = arr2;  //Declaring Integer variables ptr2 equal to array2
                        int *ptr3 = arr3;  //Declaring Integer variables ptr3 equal to array3

                        cout << "Enter 6 Elements for the First Array: " << endl;
                        for (int i = 0; i < SIZE; i++) {
                            cout << "Element " << i + 1 << ": ";
                            cin  >> *(ptr1 + i);  //User inputs the elements for the first array
                        }

                        cout << "\nEnter 6 Elements for the Second Array: " << endl;
                        for (int i = 0; i < SIZE; i++) {
                            cout << "Element " << i + 1 << ": ";
                            cin >> *(ptr2 + i);  //User inputs the elements for the second array
                        }

                        for (int i = 0; i < SIZE; i++) {
                            *(ptr3 + i) = *(ptr1 + i) * *(ptr2 + i); //Takes both ptrs1 and ptrs2 and multiplies them together to then store the product in ptrs3
                        }

                        cout << "\nThe Product After Multiplying the two Arrays is: " << endl;
                        for (int i = 0; i < SIZE; i++) {
                            cout << "Element " << i + 1 << ": " << *(ptr3 + i) << endl;  //Display the product results (pointers3)
                        }
                    }
                    break;

                    case 9: {  //Subtracting Arrays with Pointers (Exercise #69)
                        const int SIZE = 6;  //Setting array size = 6
                        int arr1[SIZE], arr2[SIZE], arr3[SIZE];  //Declaring all the integer variables size
                        int *ptr1 = arr1;  //Declaring Integer variables ptr1 equal to array1
                        int *ptr2 = arr2;  //Declaring Integer variables ptr2 equal to array2
                        int *ptr3 = arr3;  //Declaring Integer variables ptr3 equal to array3

                        cout << "Enter 6 Elements for the First Array: " << endl;
                        for (int i = 0; i < SIZE; i++) {
                            cout << "Element " << i + 1 << ": ";
                            cin >> *(ptr1 + i); //User inputs their first Array elements
                        }

                        cout << "Enter 6 Elements for the Second Array: " << endl;
                        for (int i = 0; i < SIZE; i++) {
                            cout << "Element " << i + 1 << ": ";
                            cin >> *(ptr2 + i);  //User inputs their second Array elements
                        }

                        for (int i = 0; i < SIZE; i++) {
                            *(ptr3 + i) = *(ptr1 + i) - *(ptr2 + i);  //Takes both ptr1 and ptr2 and subtracts them to then store the difference of both numbers in ptr3
                        }

                        cout << "\nThe Difference After Subtraction the Two Arrays is: " << endl;
                        for (int i = 0; i < SIZE; i++) {
                            cout << "Element " << i + 1 << ": " << *(ptr3 + i) << endl; //Displays the elements in Array3 (difference)
                        }
                    }
                    break;

                    case 10: {  //Passing Arrays to Functions Using Pointers (Exercise #70)
                        int arr1[4] = {5, 10, 15, 20};
                        int size = 4;
                        printArray(arr1, 4);

                        cout << "Enter " << size << " elements for the array:" << endl;
                        for (int i = 0; i < size; i++) {
                            cout << "Element " << i << ": ";
                            cin >> arr1[i];
                        }
                        printArray(arr1, size);
                    }
                    break;

                    case 11: {  //Virtual Well-Being Assistant (Exercise #71)
                        string name, gender, actlvl, diet, chc, lifehab, goal;  //Declaring string variables
                        int age, sleep;  //Declaring Integer variables of age and sleep
                        float height, weight;  //Declaring Float Variables height and weight

                        cout << "Welcome to Wilson Wellness!\n";
                        cout << "Please Enter Your Name: " << endl;
                        cin >> name;  //User first has to enter their name

                        cout << "Welcome " << name << "!" << endl;  //Then, Nova introduces the User

                        cout << "Please enter your age: " << endl;
                        cin >> age;  //User enters their age

                        cout << "Enter your gender (Male/Female): " << endl;
                        cin >> gender;  //User enters their gender

                        cout << "Enter your height in centimeters (cm): " << endl;
                        cin >> height;  //User enters their height
                        height /= 100;   //The height will be divided by 100 for cm

                        cout << "Enter your weight in kilograms: " << endl;
                        cin >> weight;  //The user enters their weight

                        cout << "Enter your activity level (sedentary, lightly active, moderately active, very active): " << endl;
                        cin.ignore();  //This will ignore the leftover input
                        getline(cin, actlvl);  //Get the user's inputted activity level

                        cout << "Enter your health goal (maintain weight, gain weight, lose weight): " << endl;
                        getline(cin, goal); //Get the user's inputted goal

                        cout << "Enter average hours of sleep per night: " << endl;
                        cin >> sleep;  //The user enters their sleep

                        cout << "Do you have any dietary preferences or restrictions (e.g., vegetarian, vegan, low-carb)? " << endl;
                        cin.ignore();  //This will ignore the user's leftover input
                        getline(cin, diet);  //Get the user's inputted dietary info

                        cout << "Any current health conditions (diabetes, high blood pressure)? " << endl;
                        getline(cin, chc);  //Get the user's inputted health conditions

                        cout << "Lifestyle habits (smoking, alcohol consumption): " << endl;
                        getline(cin, lifehab);  //Get the user's inputted lifestyle habits

                        float BMI = BMIcalculation(weight, height);  //With those inputs it calculate BMI
                        float BMR = MetabolicRate(weight, height, age, gender);  //With those inputs, it will calculate BMR
                        float dailyCalories = calories(BMR, actlvl);  //With the calculated BMR, we can calculate the calories for each person

                        //A Health Summary of all the inputs the user inputted and BMI calculation based on these responses
                        cout << "\n";
                        cout << "Health Summary\n";
                        cout << "Name: " << name << endl;  //Display user's name
                        cout << "Age: " << age << " years\n";  //Display user's age
                        cout << "Gender: " << gender << "\n";  //Display user's gender
                        cout << "BMI: " << BMI << " ";  //Display user's BMR

                        //Recommendations for each BMI section
                        if (BMI < 18.5) {  //Recommendation for underweight BMI
                            cout << "(Underweight)";
                            cout << " Try to eat more high-calorie foods and protein.\n";
                        } else if (BMI < 24.9) {  //Recommendation for Normal BMI
                            cout << "(Normal)";
                            cout << " Continue your good habits! You're doing great!\n";
                        } else if (BMI >= 25 && BMI < 30) {  //Recommendation for Overweight BMI
                            cout << "(Overweight)";
                            cout << " Try a healthier diet and regular exercise.\n";
                        } else {  //Recommendation for Obese BMI
                            cout << "(Obese)";
                            cout << " Start eating healthier foods and exercising.\n";
                        }

                        cout << "\n";
                        cout << "BMR: " << BMR << " calories/day\n";  //Display the User's calculated BMR
                        cout << "Daily Caloric Needs: " << dailyCalories << " calories/day\n";  //Display the user's calorie needs

                        cout << "Advice for your goal (" << goal << "):\n";  //Give the user advice based on their goal inputted
                        if (goal == "maintain weight") {
                            cout << "Try eating " << dailyCalories << " calories per day.\n";
                        } else if (goal == "gain weight") {
                            cout << "To gain weight, try eating " << dailyCalories + 500 << " calories per day.\n";  //DailyCalories + 500 to gaini weight
                        } else {
                            cout << "To lose weight, try eating " << dailyCalories - 500 << " calories per day.\n";  //DailyCalories - 500 to lose weight
                        }

                        cout << "\n";
                        cout << "Personalized Recommendations\n";

                        cout << "Exercise Recommendations: ";
                        if (BMI >= 25.0) {  //If overweight or obese,
                            cout << "Try doing exercises like running or jogging.\n";  //Gives this recommendation
                        } else {  //If not overweight or obese,
                            cout << "You can try balanced exercises such as strength training and flexibility exercises.\n";  //Gives this recommendation
                            cout << "You're doing great; keep up the healthy lifestyle!\n";  //And tells the user to keep up the good work!
                        }

                        cout << "Sleep Recommendations: ";
                        if (sleep < 7) {  //If sleeping less than 7 hours, gives this recommendation
                            cout << "Try to sleep for 7-8 hours to get the best rest!\n";
                        } else {  //If sleeping 8 hours or more, tells the user great job!
                            cout << "Great job, keep sleeping well!\n";
                        }

                        cout << "\n";
                        cout << "Lifestyle Suggestions: ";
                        if (lifehab == "smoking" || lifehab == "Smoking" || lifehab == "alcohol" || lifehab == "Alcohol" || lifehab == "smoking and alcohol" || lifehab == "Smoking and Alcohol") {
                            cout << "You should quit smoking and limit alcohol intake for a healthier lifestyle.\n";  //Recommendation if someone does any of the above
                        } else {
                            cout << "You have good habits! Keep that up to stay healthy!\n";  //Tells the user to stay healthy because they don't do any of the following
                        }

                        cout << "Dietary Adjustments: ";
                        if (chc == "diabetes" || chc == "Diabetes") {  //If the user has diabetes, 
                            cout << "Try to avoid carbs and high-sugar foods.\n"; //Give this dietary adjustment recommendation
                        } else if (chc == "hypertension" || chc == "Hypertension") {  //If the user has hypertension,
                            cout << "Try a low-sodium diet and avoid processed foods.\n";  //Gives this dietary adjustment recommendation
                        } else {
                            cout << "Maintain a balanced diet with fruits, vegetables, and whole grains.\n";  //If none, recommends the user to still stick to well-balanced healthy diet
                        }

                        cout << "\n";
                        cout << "Daily Macronutrient Breakdown:\n";
                        cout << "Carbohydrates: " << dailyCalories * 0.5 / 4 << " grams\n";  //Calculates the Carbs using dailyCalories needed and displays
                        cout << "Protein: " << dailyCalories * 0.2 / 4 << " grams\n"; //Calculates and displays the protein using dailyCalories needed
                        cout << "Fats: " << dailyCalories * 0.3 / 9 << " grams\n";  //Calculates and displays the fats using dailyCalories needed 

                        cout << "\n";
                        cout << "Motivational Message\n";
                        Motivation(BMI);  //Calls the Motivation function

                    }
                    break;
                }
                break;

            }
            break;

            case 9: {  //Section #9: Final Destination Nova (Exercises #72 - 80)
                cout << "\nWelcome to Final Destination Nova!\n";
                cout << "Choose Which Operation You Wish for Me to Perform\n";
                cout << "1. Reading a CSV File\n";  //Reads a CSV File (Exercise #72)
                cout << "2. Reading a Sales Products CSV Files\n";  //Reads a CSV File Sales about 3 Products (Exercise #73)
                cout << "3. Managing Students' Data\n";  //Managing Students Data (Exercise #74)
                cout << "4. Highest, Lowest, and Average Grades\n";  //Highest, Lowest, and Average Grades (Exercise #75)
                cout << "5. Product Inventory\n";  //Product Inventory (Exercise #76)
                cout << "6. Library System\n";  //Library System (Exercise #77)
                cout << "7. Employee Management System\n";  //Employee Management System (Exercise #78)
                cout << "8. Fishing Fun Game\n";  //The Funny Game (Exercise #79)
                cout << "9. AnxiEase\n";  //Medical Virtual Assistant: AnxiEase (Exercise #80)

                cout << "Enter Your Choice (1-9): ";
                int FinalDestination_opc;
                cin >> FinalDestination_opc;

                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Clear any leftover newline character in the input stream

                switch(FinalDestination_opc) {
                    case 1: {  //Reads a CSV File (Exercise #72)
                        std::string filePath;  //This will store the location of the file
                        std::cout << "Enter the path to the CSV File: ";  //Asks the user for their CSV file
                        std::getline(std::cin, filePath);  //Finds the file inputted from the user

                        std::ifstream file(filePath);  //Opens the file to read it

                        if (!file.is_open()) {  //If the file doesn't open
                            std::cerr << "Error Opening the File." << std::endl;  //Lets the user there was an error opening the file
                            return 1; 
                        } else {
                            std::cout << "File was Opened Successfully!" << std::endl;  //Tell the user the file opened
                        }

                        std::string line;  //This will hold each line from the file
                        int totalAge = 0;  //Declares the integer variable with value of 0

                        while (std::getline(file, line)) {  //Read each line from the file
                            if (line.empty()) {  //If the line is empty,
                                std::cerr << "Skipping empty line." << std::endl;  //Tells the user we are skipping it and going to the next one
                                continue;  //Skip this line and move to the next
                            }
                            std::cout << "Complete Line: " << line << std::endl;  //Displays the line to the user

                            std::stringstream ss(line);  //This breaks the line into smaller pieces
                            std::string column;  //This will hold each piece from the line
                            int columnIndex = 0;  //Declares the integer variable columnIndex with value of 0

                            while (std::getline(ss, column, ',')) {  //Split the line into columns
                                std::cout << "Column [" << columnIndex << "]: " << column << std::endl;  //Displays each piece

                                if (columnIndex == 1) {  //We're looking at the second column (age)
                                    int age = 0;  //Declares the integer variable age with value of 0
                                    bool validAge = true;  //Declares boolean variable validAge with value of age

                                    size_t start = column.find_first_not_of(" ");  //Find the first non-space character
                                    size_t end = column.find_last_not_of(" ");  //Find the last non-space character
                                    column = column.substr(start, end - start + 1);  // rim the spaces

                                    try {
                                        age = std::stoi(column);  //Trys to turn the age into a number
                                        std::cout << "Adding Age: " << age << std::endl;  //Tell the user the age we are adding from the person
                                        totalAge += age;  //Add the age to the total
                                    } catch (const std::invalid_argument& e) {  //If it can't be turned into a number,
                                        std::cerr << "Invalid Age Format: " << column << std::endl;  //Lets the user there's something wrong
                                        validAge = false;  //Marks the age as invalid
                                }
                            }
                            columnIndex++;  //Moves to the next column
                        }
                        std::cout << "-------------------" << std::endl;
                     }

                    std::cout << "Total Age: " << totalAge << std::endl;  //Displays the total of all ages
                    file.close();  //Closes the csv file

                    }
                    break;

                    case 2: {  //Reading a Sales Product CSV File (Exercise #73)
                        std::string filePath; //This is where we will save the CSV File
                        std::cout << "Enter the Path to your CSV File: "; //Asks the user to type the CSV File Name to open it
                        std::getline(std::cin, filePath); //Get the file name from the user

                        std::ifstream file(filePath); //This will open and read the inputted CSV File

                        if (!file.is_open()) {  //This will check if the file opening was successful
                            std::cerr << "Error: Unable to open the file." << std::endl; //If it couldn't open it will say that there was an error
                            return 1; //Stop the program because the file didn't open.
                        } else {
                            std::cout << "File was opened successfully!" << std::endl; //Let the user know that the file was opened successfully
                        }

                       std::string line; //This will hold each line from the file
                       bool isHeader = true; //This tells us if we're looking at the first line (the header)
                       int productCount = 0; //This keeps track of how many products we finish

                       while (std::getline(file, line)) {  //Goes through each line in the File
                        if (isHeader) {  //If it's the first line (the header),
                            isHeader = false;  //Remembers that we are past the header now
                            continue;  //Skips this line and moves on the next
                        }

                        std::cout << "Processing Line: " << line << std::endl; //Show the line/product we're currently working on

                        std::stringstream ss(line); //Break the line into smaller pieces
                        std::string column; //This holds each piece of the line
                        int columnIndex = 0; //Declaring integer variable columnIndex which counts which piece we're on
                        std::string productName; //Declaring string variable productName where we save the product name
                        int totalSales = 0; //Declaring integer variable totalSales with a value of 0
                        int validMonths = 0; //Declaring integer variable validMonths with a value of 0

                        while (std::getline(ss, column, ',')) {  //Breaks the line into pieces at every comma
                            if (columnIndex == 0) {  //The first piece is the product name
                                productName = column; //This will Save the product name
                            } else {
                                int sales = 0; //Declaring the sales integer with value 0 for now
                                bool isValid = true; //Assume the sales number works,
                                for (char c : column) {  //Check every letter in the column
                                    if (isdigit(c)) {  //If it's a number
                                        sales = sales * 10 + (c - '0'); //Add it to the toal number of sales amount
                                    } else {   //If it's not a number,
                                        isValid = false; //The sales data doesn't work
                                        break; //Stop checking this piece and go to the next
                                    }
                                }

                                if (isValid) {  //If the sales number was good and it works,
                                    totalSales += sales; //Add it to the total sales to later on calculate the average
                                    validMonths++; //Count this month as good
                                } else {
                                    std::cerr << "Invalid sales data: " << column << std::endl; //Say the sales data is invalid and doesn't work
                                }
                            }
                            columnIndex++; //Move to the next piece of the line
                        }

                        if (validMonths == 12) {
                            double averageSales = static_cast<double>(totalSales) / validMonths; //This will calculate the average of the sales
                            std::cout << "Average sales for " << productName << ": " << averageSales << std::endl; //Shows the average of sales using the data in the CSV File
                            productCount++; //Count this product as finished and go the next
                        } else {
                            std::cerr << "Incomplete data for " << productName << ". Skipping." << std::endl; //Let the user know that the data is not complete
                        }

                        std::cout << "-------------------"  << std::endl;

                       }

                        std::cout << "Total products processed successfully: " << productCount << std::endl; //Display all the reviewed products in the CSV File
                        file.close(); //This will close the file

                    }
                    break;

                    case 3: {  //Managing Students' Data (Exercise #74)
                        int numberOfStudents = 5;  //Number of Students to input
                        vector<Student> students(numberOfStudents);  //Vector to store the students

                        cout << "Enter the Details of " << numberOfStudents << " students: " << endl;  //Asks User to input details of students

                        for (int i = 0; i < numberOfStudents; i++) {  //Used a for loop as long as i is less than inputted number
                            cout << "Student " << i + 1 << ":" << endl; //Adds the Student + 1 and displays

                            cout << "Enter Student's Name: ";
                            getline(cin, students[i].name);  //This will get the line of the student's inputted name

                            cout << "Enter Student's Age: ";
                            cin >> students[i].age;  //User inputs the student's age

                            cout << "Enter Student's Final Grade: ";
                            cin >> students[i].finalGrade;  //User inputs the student's final grade

                            cin.ignore();  //Clear any newline character

                        }

                        cout << "\nHere's the Student's Information:" << endl;
                        for (int i = 0; i < numberOfStudents; i++) {  //Used a for loop to continue until number of students is reached
                            cout << "Student " << i + 1 << ": ";  //Displays the Vector
                            students[i].displayStudentInfo();  //Displays All the Students info
                        }
                    }
                    break;

                    case 4: {  //Highest, Lowest, and Average Grades (Exercise #75)
                        int numberOfStudents = 5;  //Number of Students to input
                        vector<Student> students(numberOfStudents);  //Vector to store the students

                        cout << "Enter the Details of " << numberOfStudents << " students: " << endl;  //Asks User to input details of students

                        for (int i = 0; i < numberOfStudents; i++) {  //Used a for loop as long as i is less than inputted number
                            cout << "Student " << i + 1 << ":" << endl; //Adds the Student + 1 and displays

                            cout << "Enter Student's Name: ";
                            getline(cin, students[i].name);  //This will get the line of the student's inputted name

                            cout << "Enter Student's Age: ";
                            cin >> students[i].age;  //User inputs the student's age

                            cout << "Enter Student's Final Grade: ";
                            cin >> students[i].finalGrade;  //User inputs the student's final grade

                            cin.ignore();  //Clear any newline character

                        }

                        cout << "\nHere's the Student's Information:" << endl;
                        for (int i = 0; i < numberOfStudents; i++) {  //Used a for loop to continue until number of students is reached
                            cout << "Student " << i + 1 << ": ";  //Displays the Vector
                            students[i].displayStudentInfo();  //Displays All the Students info
                        }

                        float averageGrade = CalculateAverageGrade(students);  //Calls and Calculates the Average Grade of all students
                        cout << "\nAverage Grade of All Students: " << averageGrade << endl;  //Displays the Average Grade

                        Student highest = CalculateHighestGrade(students);  //Calls and Calculates the Highest Grade of all the Students
                        cout << "The Student With The Highest Grade is: ";  //Displays the Student with the Highest Grade
                        highest.displayStudentInfo();  //Calls the highest student grade information

                        Student lowest = CalculateLowestGrade(students);  //Calls and Calculates the Lowest Grade of all the Students 
                        cout << "The Student With The Lowest Grade is: "; //Displays the Student with the Lowest Grade
                        lowest.displayStudentInfo();  //Calls the lowest student grade information

                    }
                    break;

                    case 5: {  //Product Inventory (Exercise #76)
                        vector<Product> inventory(100);  //Declares a vector variable with 100 slots for products
                        int productCount = 0;  //Declares integer variable that will keep track of how many products have been added
                        string userChoice;  //Declares the string variable userChoice

                        do {  //Do to allow the user to continue inputting inventory
                            Product newProduct;  //Creates a new product object

                            cout << "Enter the product name: ";  //Asks the User to enter their product
                            getline(cin, newProduct.name);  //Gets the product inputted name

                            cout << "Enter the quantity of " << newProduct.name << ": "; //Asks the user to enter the quantity of their product
                            cin >> newProduct.quantity;  //Gets the product inputted quantity

                            cout << "Enter the price of " << newProduct.name << ": ";  //Asks the user to enter the price of their product
                            cin >> newProduct.price;  //Gets the product inputted price

                            inventory[productCount] = newProduct;  //Store the new product in the inventory
                            productCount++;  //Add the count of products total

                            cout << "Do you want to add another product? (yes/no): ";  //Asks the user if they want to add something else
                            cin.ignore();  //Ignore any leftover newline character
                            getline(cin, userChoice);  //Gets the user inputted choice if they want to add anything else

                        } while (userChoice == "yes" || userChoice == "y");  //While loop to repeat if the user chooses yes or y

                        //Display all products in the inventory
                        cout << "\nYour Product Inventory:\n";
                        for (int i = 0; i < productCount; i++) {
                        cout << "Product Name: " << inventory[i].name 
                        << ", Quantity: " << inventory[i].quantity 
                        << ", Price: " << inventory[i].price << endl;
                        }

                        //Calculate and display the total value of the inventory
                        float totalValue = 0.0;
                        for (int i = 0; i < productCount; i++) {
                        totalValue += inventory[i].quantity * inventory[i].price;
                        }
                        cout << "\nTotal Value of Inventory: " << totalValue << endl;

                    }
                    break;

                    case 6: {  //Library System (Exercise #77)
                        vector<Book> library;  //Declares a vector variable
                        string userChoice;  //Declares a string userChoice variable

                        //Add books to the library
                        do {
                            Book newBook;  //Create a new book object

                            cout << "Enter the title of the book: ";  //Asks the user for the book title
                            getline(cin, newBook.title);  //Gets the inputted book title

                            cout << "Enter the author of " << newBook.title << ": ";  //Asks the user for the author of the previosuly inputted book
                            getline(cin, newBook.author);  //Gets the inputted book author

                            cout << "Enter the publication year of " << newBook.title << ": ";  //Asks the user for the year the book was published
                            cin >> newBook.publicationYear;  //Gets the inputted publication year

                            //Add the new book to the library
                            library.push_back(newBook);

                            cout << "Do you want to add another book? (yes/no): ";  //Asks the user if they want to add another book
                            cin.ignore();  //Ignore any leftover newline character
                            getline(cin, userChoice);  //Gets the user inputted choice if they want to add anything else

                        } while (userChoice == "yes" || userChoice == "y");  //Repeats if the user chooses yes or y

                        //Display books published after the year 2000
                        cout << "\nBooks published after the year 2000:\n";
                        bool found = false;
                        for (int i = 0; i < library.size(); i++) {
                            if (library[i].publicationYear > 2000) {
                            cout << "Title: " << library[i].title 
                            << ", Author: " << library[i].author 
                            << ", Year: " << library[i].publicationYear << endl;
                            found = true;
                        }
                    }
                    if (!found) {
                        cout << "No books found published after the year 2000.\n";  //Displays if there weren't any books published after the year 2000
                     }

                    string searchTitle;
                    cout << "\nEnter a book title to search for: "; //Asks the User for the book they wish to search for in the library
                    getline(cin, searchTitle);  //Gets the inputted search title

                    bool bookFound = false;
                    for (int i = 0; i < library.size(); i++) {
                        if (library[i].title == searchTitle) {
                            cout << "The book \"" << searchTitle << "\" is in the library.\n";  //Displays the found book in the library
                            bookFound = true;
                            break;
                        }
                    }

                    if (!bookFound) {
                        cout << "The book \"" << searchTitle << "\" was not found in the library.\n";  //Displays if the book isn't available in the library
                    }
                    }
                    break;

                    case 7: {  //Employee Management System (Exercise #78)
                        int maxEmployees = 10;  //Set the maximum number of employees
                        vector<Employee> employees(maxEmployees);  //Create a fixed-size vector to hold employees
                        int employeeCount = 0;  //To track the number of employees
                        string userChoice;  //Declared string variable Userchoice for user to chose if they want to add a new employee

                        do {
                            if (employeeCount >= maxEmployees) {  //Allows us to allow only have max of 10 employees
                            cout << "The employee list is full.\n";
                            break;  //Stop if we've reached the maximum number of employees
                            }

                            Employee newEmployee;  //Creates a new employee

                            cout << "Enter the name of the employee: ";  //Asks the user to input their employee's name
                            getline(cin, newEmployee.name);  //Gets the inputted employee's name

                            cout << "Enter the position of " << newEmployee.name << ": ";  //Asks the user which position that employee works in
                            getline(cin, newEmployee.position);  //Gets the inputted employee's position

                            cout << "Enter the salary of " << newEmployee.name << ": ";  //Asks the user how much that employee makes
                            cin >> newEmployee.salary;  //Gets the inputted employee's salary

                            //Insert the new employee into the vector at the current position
                            employees[employeeCount] = newEmployee;  //Directly assign to the employee at the current count
                            employeeCount++;  //Adds the new employee

                            //Ask the user if they want to add another employee or not
                            cout << "Do you want to add another employee? (yes/no): ";
                            cin.ignore();
                            getline(cin, userChoice);

                        } while (userChoice == "yes" || userChoice == "y");  //Repeat if the user chooses yes or y

                        //Displays the complete list of employees
                        cout << "\nComplete List of Employees:\n";
                        for (int i = 0; i < employeeCount; i++) {
                            cout << "Name: " << employees[i].name 
                            << ", Position: " << employees[i].position 
                            << ", Salary: " << employees[i].salary << endl;
                        }

                        //Calculate and display the average salary
                        float totalSalary = 0;
                        for (int i = 0; i < employeeCount; i++) {
                            totalSalary += employees[i].salary;
                        }
                        float averageSalary = totalSalary / employeeCount;
                        cout << "\nAverage Salary: " << averageSalary << endl;

                        //Display employees earning above the average salary
                        cout << "\nEmployees earning above the average salary:\n";
                        bool foundAboveAverage = false;
                        for (int i = 0; i < employeeCount; i++) {
                            if (employees[i].salary > averageSalary) {
                                cout << "Name: " << employees[i].name 
                                << ", Position: " << employees[i].position 
                                << ", Salary: " << employees[i].salary << endl;
                                foundAboveAverage = true;
                            }
                        }
                        if (!foundAboveAverage) {
                            cout << "No employees earn above the average salary.\n";
                        }

                        //Remove an employee by their name
                        string removeName;
                        cout << "\nEnter the name of the employee to remove: ";
                        getline(cin, removeName);  //Get the name of the employee to remove

                        bool employeeRemoved = false;
                        for (int i = 0; i < employeeCount; i++) {
                            if (employees[i].name == removeName) {
                            //Shift elements left to remove the employee
                            for (int j = i; j < employeeCount - 1; j++) {
                                employees[j] = employees[j + 1];
                                }
                                employeeCount--;  //Decrease the count of employees
                                employeeRemoved = true;
                                cout << "Employee " << removeName << " has been removed.\n";
                                break;
                                }
                            }

                        if (!employeeRemoved) {
                            cout << "Employee with the name " << removeName << " was not found.\n";
                        }

                        //Display the updated list of employees after removal
                        cout << "\nUpdated List of Employees:\n";
                        for (int i = 0; i < employeeCount; i++) {
                            cout << "Name: " << employees[i].name 
                            << ", Position: " << employees[i].position 
                            << ", Salary: " << employees[i].salary << endl;
                        }
                    }
                    break;

                    case 8: {  //Fishing Fun Game (Exercise #79)
                        srand(time(0)); //Declared a random number generator 
                        string fishingchoice; //Declare the fishing choice variable

                        cout << "Welcome to Fishing Fun!\n";
                        cout << "In this game, you have to catch the best Fish in the Sea!\n";  // Tell them what the game is about

                        do {
                            //List of fishes
                            string fishes[] = {"Fish", "Salmon", "Shark", "Whale", "Mermaid"};

                            //Results of fishing
                            string results[] = {
                                "A fish takes the bait! It's a Fish! You cook it and have a nice dinner.",
                                "A Salmon jumps out of the water! You Missed it! Get better lil bro.",
                                "Something bites your line. You reel it in. A Shark jumps out and eats you! You died.",
                                "You see a big wave coming towards you and just stare at it confused. A whale appears and lifts your boat into the sky with you in it. The Whale Eats your boat and you too in one big chomp. You died.",
                                "Something takes your line and your rod falls into the ocean. You look down into the ocean and you see a Mermaid with your fishing rod. She laughs at your face and leaves. You leave in sadness.",
                                "Nothing happens. You stand there waiting for 10 hours."
                            };


                            //Ask the player to pick the fish they want to catch
                            cout << "What Fish do you want to fish for? (Fish, Salmon, Shark, Whale, Mermaid): ";
                            string chosenFish;  //Declared string variable chosenFish for the user to pick one
                            cin >> chosenFish;  //User inputs their fish

                            //Convert the input to lowercase for case-insensitive comparison
                            toLowerCase(chosenFish);

                            //List of fish in lowercase for comparison
                            string lowerFishes[] = {"fish", "salmon", "shark", "whale", "mermaid"};

                            //Find the correct fish index based on the user's input
                            int fishIndex = -1;
                            for (int i = 0; i < 5; ++i) {
                                if (chosenFish == lowerFishes[i]) {
                                fishIndex = i;
                                break;
                                }
                            }

                            if (fishIndex == -1) {
                            cout << "That's not a valid fish choice.\n";  //Invalid choice
                            continue;  //Ask again if the input is invalid
                            }

                            cout << "You cast your line...\n";  //Show the action the user is doing

                            cout << "You are Fishing For: " << fishes[fishIndex] << endl; //Show the fish the user is fishing for

                            cout << results[fishIndex] << endl;  //Show the corresponding result based on the fish they chose

                            cout << "\nWould you like to go fishing again? (yes/no): ";  //Ask the player if they want to go fishing again
                            cin >> fishingchoice; //Get the player's inputted answer

                        } while (fishingchoice == "yes" || fishingchoice == "Yes" || fishingchoice == "y" || fishingchoice == "Y");  //Options for user input if they want to continue fishing or nor

                        cout << "Thanks for playing Fishing Fun!" << endl; 
                    }
                    break;

                    case 9: {  //Medical Virtual Assistant: AnxiEase (Exercise #80)
                        cout << "Welcome to AnxiEase!\n";
                        cout << "By Wilson Quilli and Mostafa Amer\n";

                        string questions[10] = {  //Created a list of 10 questions for the user to answer
                            "1. Do you feel nervous, anxious, or on edge most days?",
                            "2. Do you experience uncontrollable worry?",
                            "3. Do you have difficulty relaxing?",
                            "4. Do you feel easily annoyed or irritable?",
                            "5. Do you feel afraid as though something terrible might happen?",
                            "6. Do you experience dizziness or lightheadedness when anxious?",
                            "7. Do you experience rapid heartbeat or shortness of breath in stressful situations?",
                            "8. Do you have trouble sleeping due to worries?",
                            "9. Do you feel fatigued but unable to rest properly?",
                            "10. Do you avoid social or professional interactions due to fear or anxiety?"
                        };

                        int score = 0;  //Declared integer variable score with a value of 0
                        int response;  //Declared integer variable response

                        for (int i = 0; i < 10; ++i) {  //For loop, to go through each question until reaching 10
                            do {  //A while loop to continue asking the user until they input a valid response
                                cout << questions[i] << "\n";  //Shows the current question the user is on
                                cout << "Choose (0 = Never, 1 = Sometimes, 2 = Often, 3 = Always): ";  //Multiple choice response
                                cin >> response;  //user inputs their response

                                if (response < 0 || response > 3 ) {  //If user picks a number less than 0 or greater than 3
                                    cout << "Invalid input. Please enter a value between 0 and 3.\n";  //It's an invalid option
                                }
                            } while (response < 0 || response > 3);  //Keeps asking until we get a valid response

                            score += response;  //Adds the answer to the total score
                        }

                        string anxietyLevel = determineLevel(score);  //This will call the determine Level function and figure out the anxiety level based on the user's score and responses
                        cout << "\nYour Anxiety Level is: " << anxietyLevel << endl;  //Displays the user their anxiety Level
                        Recommendations(anxietyLevel);  //Finally, Nova will provide recommendations based on the user's anxiety level

                    }
                    break;
                }
                break;

                default:
                    cout << "Invalid Option!\n";
            }
            break;
        }
        
        cout << "Do you want to continue? (Y/N): "; //Allows the User to choose if they want to continue or not using Nova
        cin >> continuechoice;

    } while (continuechoice == 'Y' || continuechoice == 'y'); //If the user inputs y, then the program will continue, if the user inputs n, then Nova will end

    cout << "Thank you for Using Nova!\n"; //Goodbye Message
    
    return 0;
}

void drawBoard(char *spaces) { //This will create the tic-tac-toe board
    cout << "\n";
    cout << "    |    |     " << "\n"; //Draw the top line of the board
    cout << "  " << spaces[0] << " | " << spaces[1] << "  | " << spaces[2] << "\n"; //Put the first row of symbols or empty spaces.
    cout << "____|____|____" << "\n"; //Draw a divider for the rows.
    cout << "    |    |     " << "\n"; //Draw the middle line of the board.
    cout << "  " << spaces[3] << " | " << spaces[4] << "  | " << spaces[5] << "\n"; //Put the second row of symbols or empty spaces.
    cout << "____|____|____" << "\n"; //Draw another divider for the rows.
    cout << "    |    |     " << "\n"; //Draw the bottom line of the board.
    cout << "  " << spaces[6] << " | " << spaces[7] << "  | " << spaces[8] << "\n"; //Put the third row of symbols or empty spaces.
    cout << "    |    |     " << "\n"; //Draw the last line to finish the board.
    cout << "\n";
}

void playerMove(char *spaces, char player) { //This will tell the game what the player is doing
    int number;  //Declaring the integer variable to allow the player to pick where they want to go on the board
    do { //This will keep asking the player to pick a spot
        cout << "Player " << (player == 'X' ? "1 (X)" : "2 (O)") << ", Enter a Spot to Place your Marker (1-9): ";
        cin >> number;  //Player inputs their spot
        if (number < 1 || number > 9) {
            cout << "Invalid input. Please enter a number between 1 and 9.\n"; //Invalid option since spots are 1-9
        } else {
            number--;  //Fix it because the game starts counting spots at 0.
            if(spaces[number] == ' ') {  //If the spot is empty,
                spaces[number] = player;  //Put the player's marker there.
                break;  //Stop asking because it’s a good move.
            } else {  //If the spot is taken,
                cout << "The spot is already taken. Please try again.\n"; //Tell the player the spot is taken
            }
        }
    } while(true);  //Keep looping until the player picks a good spot to play
}

bool checkWinner(char *spaces, char player) { //This will check if someone won the game
    if((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2])) { //Check if the first row has the same marker and is not empty.
        return true; //Someone Won
    }
    else if((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5])) {  //Check if the second row has the same marker and is not empty.
        return true; //Someone Won
    }
    else if((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8])) {  //Check if the third row has the same marker and is not empty.
        return true; //Someone Won
    }
    else if((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6])) { //Check if the first column has the same marker and is not empty.
        return true; //Someone Won
    }
    else if((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7])) {  //Check if the second column has the same marker and is not empty.
        return true; //Someone Won
    }
    else if((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8])) {  //Check if the third column has the same marker and is not empty.
        return true; //Someone Won
    }
    else if((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8])) {  //Check if the diagonal from top-left to bottom-right has the same marker and is not empty.
        return true; //Someone Won
    }
    else if((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6])) {  //Check if the diagonal from top-right to bottom-left has the same marker and is not empty.
        return true; //Someone Won
    }
    return false; //No one has won yet
}

bool checkTie(char *spaces) {  //This checks if the game is a tie.
    for(int i = 0; i < 9; i++){  //Go through each spot on the board.
        if(spaces[i] == ' ') {  //If any spot is empty,
            return false;  // The game is not a tie yet because there’s still space.
        }
    }
    return true;  //The game is a tie because all spots are filled.
}

void drawMaze(int maze[10][10], int playerRow, int playerCol) {  // his draws the maze with the player’s position.
    for (int i = 0; i < 10; i++) {  //Go through each row in the maze.
        for (int j = 0; j < 10; j++) {  //Go through each column in the current row.
            if (i == playerRow && j == playerCol) {  //Check if this spot is where the player is.
                cout << "W ";  //Draw the player’s position as "W".
            } else if (maze[i][j] == 1) {  // heck if this spot is an obstacle.
                cout << "# ";  //Draw an obstacle as "#".
            } else {  //If it's an empty space,
                cout << ". ";  //Draw an empty space as ".".
            }
        }
        cout << endl; 
    }
}

bool isValidMove(int maze[10][10], int row, int col) {  //This checks if the move is okay.
    return row >= 0 && row < 10 && col >= 0 && col < 10 && maze[row][col] != 1;  //Make sure the row and column are inside the maze and the spot is not a obstacle (1 means obstacle).
}

bool movePlayer(int maze[10][10], int &playerRow, int &playerCol, char move) {  //This moves the player based on the direction they choose.
    int newRow = playerRow, newCol = playerCol;  //Start by setting the new position to the current position.

    switch (move) {
        case 'W': case 'w': newRow--; break;  //If the players presses W move up
        case 'A': case 'a': newCol--; break;  //If the player presses A, move left
        case 'S': case 's': newRow++; break;  //If the player presses S, move down
        case 'D': case 'd': newCol++; break;  //If the player presses D, move right
        default:
            cout << "Invalid input!" << endl;  //Invalid input from the player
            return false;  //Don't move the player
    }

    if (isValidMove(maze, newRow, newCol)) {  //Checks if the move is Valid
        playerRow = newRow;  //Update the player's position
        playerCol = newCol;  //Update the player's position
        return true;  //The move was successful
    }
    return false;  //The move was unsuccessful, so the player doesn't move
}