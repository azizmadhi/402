def main():
    #This is the code section to evaluate
    print("Please enter userid:")
    user = input();
    print("Please enter password:")
    pwd = input();
    if (validUser(user) == False):
        print("Invalid userid")
        return
    if (validPassword(pwd) == False):
        print("Incorrect password")


def validUser(user):
    #Pretend this does a proper lookup of users
    if (user == 'tom') or (user == 'dave') or (user == 'barry'):
        return True
    else:
        return False


def validPassword(pwd):
    #Pretend this does a proper password check
    if (pwd == 'password'):
        return True
    else:
        return False


if __name__ == "__main__":
    main()