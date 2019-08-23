def greeter():
    print("Hi i am code, I am bored")

def process_input(answer):
    print("hey")
def say_greeting():
    print("Hey there!")


def main():
    while True:
        greeter()
        answer = input("(What will you say?) ")
        if answer == "hi":
            print("Hi again")
            answer= input("what is your favorite food?")
            print(answer, "is your favorite food !")
            answer= input("yummy, what is your favorite animal?")
            print(answer, "is your favorite animal !")
            answer= input("so cute, what is your favorite color?")
            print(answer, "that is so beautiful !")
            print("Type 'yes' to go read my joke or 'no' to go not. ")
            user_input = input()
            if user_input == "yes":
                print("knock knock.")
                user_input = input("who is there or no? ")
                if user_input == "who is there":
                    print("orange,you glad that you saw this joke")
        else:
            print("thats good")
            answer= input("what is your favorite food?")
            print(answer, "is your favorite food !")
            answer= input("yummy, what is your favorite animal?")
            print(answer, "is your favorite animal !")
            answer= input("omg they are so cute, what is your favorite color?")
            print(answer, "that is so beautiful!")
            print("Type 'yes' to go read my joke or 'no' to go not. ")
            user_input = input()
            if user_input == "yes":
                print("knock knock.")
                user_input = input("who is there or no? ")
                if user_input == "no":
                    print("okay bye now :(")



if __name__ == "__main__":

    main()
