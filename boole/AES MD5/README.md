**This is an interdisciplinary problem. It requires both web forensics as well as encryption/decryption to solve.**

This problem requires participants to recognize both MD5 hashes and base64 ciphertext, as well as knowledge of online 'hashkiller' tools.

The participant is presented with a list of 128-bit MD5 hashes, as well as some encrypted text in base64. They must first 'unhash' the hashes. Each hash corresponds to a standard English word in lower case (encoded in ASCII). This is easily accomplishable using free online tools. Once they do this, they find the following sentence:


`c7218260ef2b966ab0454e07c55cf4e9 : oh
639bae9ac6b3e1a84cebb7b403297b79 : you
27e76ef6b60400df7c6bedfb807191d6 : wish
0d149b90e7394297301c90191ae775f0 : it
2b016d90959eda144d600e4f870c30ba : were
9e925e9341b490bfd3b4c4ca3b0c1ef2 : this
48bb6e862e54f2a795ffc4e541caed4d : easy
d1457b72c3fb323a2671125aef3eab5d : ?
73cf0e388971ee4ec34e8daedd0d36cc : sorry
01b6e20344b68835c5ed1ddedf20d531 : to
e1686078d1b60d351da5a87543a2a663 : let
639bae9ac6b3e1a84cebb7b403297b79 : you
74e8333ad11685ff3bdae589c8f6e34d : down
37598dad8f8805ce708ba8c4f67ce367 : but
9e925e9341b490bfd3b4c4ca3b0c1ef2 : this
a51e47f646375ab6bf5dd2c42d3e6181 : rabbit
de97e75e5b4604526a2afaed5f5439d7 : hole
89fe7b5ca56cdee4e750f4eb3ab12fbb : goes
c376109ef8d15c46a24936b7d0e0b560 : deeper
9033e0e305f247c0c3c80d0c7848c8b3 : !
8fc42c6ddf9966db3b09e84365034357 : the
c47d187067c6cf953245f128b5fde62a : word
424149e499a7cb738810dc0e537c8490 : 'AES'
0800fc577294c34e0b28ad2839435945 : hash
a2a551a6458a8de22446cc76d639a9e9 : is
8fc42c6ddf9966db3b09e84365034357 : the
3c6e0b8a9c15224a8228b9a98ca1531d : key
97bc592b27a9ada2d9a4bb418ed0ebed : now
9a2d8ce3ffdcdf2123bddd94d79ef200 : decrypt
ab86a1e1ef70dff97959067b723c5c24 : me
b078ffd28db767c502ac367053f6e0ac : START`

As the sentence insinuates, the key is the MD5 hash of `AES`. When the ciphertext `mJRKaaMSR1atUGs0kOkAJP3dty9tjCvXKMzWDHtZdRQ=` is decrypted with AES128 with the key `6d3c5993ca017d0ff169b425d3193f02` (MD5 hash of `AES`), the participant finds the flag.

Flag: `flag{w3_l0v3_3ncrypt10n}`
