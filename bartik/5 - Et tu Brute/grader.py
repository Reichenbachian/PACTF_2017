import base64


def flag(key):
    dynamic_bit = str(base64.encodebytes(bytes(str(key), encoding='utf8')), encoding='utf8')[:6]
    return "veni_vidi_vici_{}".format(dynamic_bit)


def grade(key, submission):
    if submission == flag(key):
        return True, "Nice job!"
    else:
        return False, 'Keep shifting'
