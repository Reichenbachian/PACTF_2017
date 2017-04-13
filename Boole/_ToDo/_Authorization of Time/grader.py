def grade(key, submission):
    if submission.replace(" ", "") == '808365':
        return True, 'Authenticated'
    else:
        return False, 'Your authentication code is invalid, please try again.'
