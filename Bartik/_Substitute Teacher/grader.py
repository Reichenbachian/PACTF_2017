def grade(key, submission):
    if submission == 'only_slightly_better_than_caesar':
        return True, 'Substitution accepted!'
    else:
        return False, 'Substitute this flag for something else...'
