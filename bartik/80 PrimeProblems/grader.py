def grade(key, submission):
    if submission == '2147483629':
        return True, 'Almost an overflow!'
    else:
        return False, 'Some of that code may be redundant.'
