def grade(key, flag):
    if "4boxdpa21ogonzkcrs9p" in flag:
        return True, "HSTS is a good security measure. If you have a website, consider using it."
    else:
        return False, "This is not it. Keep looking."
