This problem asks the participant to either find the SAN (Subject Alternative Name) or do a CT (Certificate Transparency log) scan.

In the TLS certificate used for pactf.com, `pa1cdnp5ocrn977rcqy98ubvkq92o5-flag.pactf.com` is an entry in the SAN field. You can find this by either looking at the certificate served by pactf.com, or checking all certificates issued for PACTF.com by scanning the CT logs using a tool like `https://crt.sh/`.

The flag is anything that contains `pa1cdnp5ocrn977rcqy98ubvkq92o5`.
