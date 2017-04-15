This problem gives the participant a huge (~1.1 MB) JSON file filled with 4096 random Base64 encoded values, and their signature (on a 1024 bit RSA private key). The corresponding public key is included in the file. One of the signatures doesn't match up — the base64 value for the invalid data includes the text:

`You found it! Flag: sometimes_needles_in_a_haystack_can_prick_you`

The flag is `sometimes_needles_in_a_haystack_can_prick_you`.
