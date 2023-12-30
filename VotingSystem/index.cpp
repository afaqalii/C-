#include <iostream>

using namespace std;

int calculateVotesPercentage(int votes, int totalVotes)
{
    float votePercentage = votes * 100 / totalVotes;
    return votePercentage;
};
int main()
{
    // arr0y for storin 5 people names and their votes receiced
    string candidates[5];
    int votes[5];
    int totalVotes = 0;
    int previousNumber = 0;         // for comparison between hight and low number of votes
    int highestVotesArrayIndex = 0; // for getting highest candidate name
    // taking user info about name and votes.
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter " << i + 1 << " candidate name" << endl;
        cin >> candidates[i];
        cout << "Enter " << i + 1 << " candidate votes" << endl;
        cin >> votes[i];
        if (previousNumber < votes[i])
        {
            previousNumber = votes[i];
            //   setting index number so get in the below code
            highestVotesArrayIndex = i;
        }
    }
    cout << "Candidate Name \t";
    cout << "Votes \t";
    cout << "Votes percnetage \t";
    cout << endl;

    // calculating total votes
    for (int i = 0; i < 5; i++)
    {
        totalVotes += votes[i];
    }
    //   displaying candidate info
    for (int i = 0; i < 5; i++)
    {
        // vote percentage for each person

        // displaying each candidate
        cout << candidates[i] << "\t \t ";
        cout << votes[i] << "\t \t ";
        cout << calculateVotesPercentage(votes[i], totalVotes) << "%";
        cout << endl;
    }

    // highest number of votes
    cout << "The winner of the election is " << candidates[highestVotesArrayIndex] << " with total of " << calculateVotesPercentage(votes[highestVotesArrayIndex], totalVotes) << "%";

    return 0;
}