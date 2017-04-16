def grade(key, submission):
    try:
        if int(submission) == 2:
            return True, "Isn't that neat?"
        else:
            return False, "Nope!"
    except ValueError as e:
        return False, "That isn’t a number!"
