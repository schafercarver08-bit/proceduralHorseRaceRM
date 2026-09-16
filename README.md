# proceduralHorseRaceRM
The procedural horse race assignment but with a readme because I forgot to switch that on

'''
make a constant int NUM\_HORSES
make a constant TRACK\_LENGTH
while keepGoing:
    run through each each horse in array
    advance(horseNum,horseArray)
'''

#advance(int hn, int* horses)
'''
{
    int turn = dist(rd);
    horse[rn] += turn;
}
'''
'''
    Given an array of horses
    loop through each horse in the array with a for loop, generate a random number thats 1 or 0, add it to horse position
    srand(time(NULL));
    coin = rand() % 1;
'''

#printlane()
'''
    given a horse number and the array of horses
    loop from zero to TRACK\_LENGTH
    if the current loop index is equal to the horse's value
        print the horse's id
    otherwise
        print a .
'''

#isWinner()
'''
{
    result = false
    given a horse number and the array is equal to the TRACK\_LENGTH
        result = true
        cout >> horse{id}
}
'''
