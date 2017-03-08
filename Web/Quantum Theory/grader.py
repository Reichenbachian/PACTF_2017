def grade(key, submission):
    if submission == 'NINJANIC' or submission == 'ninjanic':
        return True, 'Shhh...'
    else:
        return False, 'NOT quantum computing...'
