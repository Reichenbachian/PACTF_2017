import base64

DESCRIPTION = """
I found a message from Julius. Can you get the flag?
Huk aopz pz aol mshn: {}
"""

HINT = """
Look up what a Caesar cipher is. Can you make sense of the encrypted text above? Once you do, enter the ‘flag’ in the text box below and check if you’re right!    
"""

ROT_LEVEL = 7


def flag(key):
    dynamic_bit = str(base64.encodebytes(bytes(str(key), encoding='utf8')), encoding='utf8')[:6]
    return "veni_vidi_vici_{}".format(dynamic_bit)


def rot_factory(n):
    from string import ascii_lowercase as lc, ascii_uppercase as uc
    lookup = str.maketrans(lc + uc, lc[n:] + lc[:n] + uc[n:] + uc[:n])
    return lambda s: s.translate(lookup)


rot = rot_factory(ROT_LEVEL)


def generate(key):
    return DESCRIPTION.format(rot(flag(key))).replace("_", "\_"), HINT
