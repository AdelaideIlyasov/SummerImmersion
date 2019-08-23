import random

potential_words = ["quesadilla","quesadilla"]

guesses=0

letter = 0

used_list=[]

while count != 0 and letter != "q":

    print(" ".join(display_list))

    letter=input("Guess your letter: ")



    if letter.upper() in used_list:

        print("Oops! Already guessed that letter.")

    else:

        for i in range(0,len(secret_word)):

            if letter.upper() == secret_word[i]:

                display_list[i]=letter.upper()
current_word = ["_", "_", "_", "_", "_", "_", "_", "_", "_", "_"]

guesses = [""]

maxfails = 10

fails = 0

while fails < maxfails:

	guess = input("Guess a letter: ")

	print(current_word)

	fails = fails+1

	print("You have " + str(maxfails - fails) + " tries left!")
