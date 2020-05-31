# Pokemon GO Plus reimplementation and firmware patching tool

Note that this is unusable without a Mac address, BLOB and device key

Please read:

http://tinyhack.com/2018/11/21/reverse-engineering-pokemon-go-plus/

Please see the following github project which can reflash a Pokemon GO+
and extract its mac/private key/blob while the flash does work on newer
phones you make need to use an older one to do the extraction like a
samspung S5 mini.

https://github.com/Jesus805/Suota-Go-Plus

Using this information you can populate a valid secrets file link this to
secrets.c in main, any file ending secrets.c will be ignored by git to prevent
accidental upload.
