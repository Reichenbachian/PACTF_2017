def grade(key, submission):
    if submission == 'either_this_or_that':
        return True, r'MA\\KMZ'
    else:
        return False, 'Not quite...'
