#include <iostream>
#include <cstdlib>

using namespace std;

struct questionInfo {
    string question;
    string options[3];
};

int askQuestion(const questionInfo listQuestion) {
    int ans;
    cout << listQuestion.question << endl;
    for (int i = 0; i < 3; i++)
        cout << i+1 << ". " << listQuestion.options[i] << endl;
    cout << "Choose 1-3: ";
    cin >> ans;

    return ans;
}

int main()
{
    const int n = 10;
    int res;
    unsigned int answers[n];
    questionInfo questions[n];

    questions[0].question = "Which one is the smallest ocean in the world?";
    questions[0].options[0] = "Indian";
    questions[0].options[1] = "Pacific";
    questions[0].options[2] = "Arctic";
    answers[0] = 3;

    questions[1].question = "Which continent has the highest number of countries?";
    questions[1].options[0] = "Africa"; 
    questions[1].options[1] = "Asia";
    questions[1].options[2] = "Europe";
    answers[1] = 1;

    questions[2].question = "Which country is also known as the 'Land of Tulips'?";
    //questions[2].options[] = {"Netherland", "Italy", "Switzerland"};
    questions[2].options[0] = "Netherland"; 
    questions[2].options[1] = "Italy";
    questions[2].options[2] = "Switzerland";
    answers[2] = 1;

    questions[3].question = "Which country has the world's largest prison population?";
    //questions[3].options[] = {"China", "USA", "India"};
    questions[3].options[0] = "China"; 
    questions[3].options[1] = "USA";
    questions[3].options[2] = "India";
    answers[3] = 2;

    questions[4].question = "Which country has the largest muslim population in the world?";
    //questions[4].options[] = {"Pakisthan", "Iran", "Indonesia"};
    questions[4].options[0] = "Pakisthan"; 
    questions[4].options[1] = "Iran";
    questions[4].options[2] = "Indonesia";
    answers[4] = 3;

    for(int i = 0; i < 5; i++)
    {
        res = askQuestion(questions[i]);
        if (res == answers[i])
            cout << "Correct1!\n" << endl;
        else 
            cout << "Incorrect!\n" << endl;
    }

    return EXIT_SUCCESS;
}