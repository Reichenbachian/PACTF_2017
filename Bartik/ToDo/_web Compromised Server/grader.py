def grade(arg, key):
	if "you've_got_to_watch_out_for_backdoored_software" in key:
		return True, "Good job"
	else:
		return False, "Keep searching"
