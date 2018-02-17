# QuizUsingC
It is a simple quiz which generates random questions. The file has 4 c files and one (custom)header file. The quiz has scores, the more question you answer correctly, the harder the quiz gets. so enjoy the challenge :)
It uses 4 c files. 
1. printRandoms.c is for generating a random number 
2. questions.c has the questions for the quiz.
3. answer.c has the answers for that question.
4 interface has the menu that makes the UI of the quiz to work. it uses the questions from questions.c and random number from printRandom.c
the "quiz.h" header file is what used to interface all the function in the questions.c, answer.c, printRandom.c. 
the "quiz.h" header file is used in the interface and question.c, so that the functions can be accessed. 
