def grade(key, submission):
    if submission == 'those_dinosaurs_sure_are_clever' or submission == 'jthose_dinosaurs_sure_are_clever':
        # some Bitcoin sites put a 'j' at the beginning of the OP_RETURN. But not all?
        return True, 'As are you. Good job.'
    else:
        return False, 'OP_INVALIDOPCODE'
