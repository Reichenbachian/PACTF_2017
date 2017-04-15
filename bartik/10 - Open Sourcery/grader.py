def grade(key, submission):
    if submission == 'WELCOME_TO_PACTF_2017':
        return True, 'Yer an open sourcerer, Harry.'
    else:
        return False, 'You are not one with open sourcery (yet)!'
