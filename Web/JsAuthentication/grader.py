def grade(key, submission):
    if submission == 'OOPS_YOU_CRACKED_THE_SITE':
        return True, 'Uh oh, I guess it\'s not that secure.'
    else:
        return False, 'Hmmm... maybe the server is uncrackable.'
