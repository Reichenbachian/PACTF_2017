def grade(key, submission):
    if submission == 'flag{w3_l0v3_3ncrypt10n}':
        return True, '+1 Internets'
    else:
        return False, 'It\'s almost like you have to... "dehash" it!'
