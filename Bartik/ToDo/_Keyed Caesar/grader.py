def grade(key, submission):
    if submission == 'don\'t_put_the_key_in_the_message':
        return True, "Definitely a bad idea"
    else:
        return False, 'Maybe that wasn\'t the right key...'
