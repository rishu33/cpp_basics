#include <iostream>

int main(){

    std::string questions[] = {"1. What year was C++ created?",
                               "2. Who invented C++?",
                               "3. What is the predecessor or C++?",
                               "4. Is the Earth flat?"};

    
    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                {"A. Guido Van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerberg"},
                                {"A. C", "B. C+", "C. C--", "D. B++"},
                                {"A. Yes", "B. No", "C. Sometimes", "D. What's Earth?"}};
    
    char answer_key[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score=0;

    for(int i=0; i<size; i++){
        std::cout << "***********************************************\n";
        std::cout << questions[i] << '\n';
        std::cout << "***********************************************\n";

        for(int j=0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] << '\n';
        }

        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answer_key[i]){
            std::cout << "Correct!\n";
            score++;
        }
        else{
            std::cout << "Wrong!\n";
            std::cout << "Correct answer is " << answer_key[i] << '\n';
        }

    }

    std::cout << "************************************************\n";
    std::cout << "*                    RESULT                    *\n";
    std::cout << "************************************************\n";
    std::cout << "Correct Guesses: " << score << '\n';
    std::cout << "# of Questions: " << size << '\n';
    std::cout << "SCORE: " << (score/(double)size)*100 << "%\n";

    return 0;

}
