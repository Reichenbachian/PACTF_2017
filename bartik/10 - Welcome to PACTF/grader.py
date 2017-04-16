def grade(key, submission):
    if "bonus_points_ftw" in submission:
        return True, "Enjoy your bonus points!"
    else:
        return False, "Did you finish the survey?"