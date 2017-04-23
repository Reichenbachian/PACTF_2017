def grade(key, flag):
    if "impactfestival.be" in flag:
        return True, "HSTS is a good security measure. If you have a website, consider using it. By the way, we are not affiliated with that website."
    else:
        return False, "This is not it. Keep looking."
