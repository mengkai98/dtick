# DTick 

### 1 build&install

```shell
mkdir build
cd buid
cmake ..
sudo make install
```

### 2 use

```shell
dtick <command <params> >
```

**example:**

```shell
dtick ls -l
```

**output:**

```
#output messages：

start tick clock! 
command is :  ls -l 
.......................................................................
total 56
drwxrwxr-x 4 dawanzi dawanzi  4096 7月  25 19:10 build
-rw-rw-r-- 1 dawanzi dawanzi   200 7月  25 18:16 CMakeLists.txt
drwxrwxr-x 2 dawanzi dawanzi  4096 7月  25 17:28 include
-rw-rw-r-- 1 dawanzi dawanzi 34523 7月  25 16:53 LICENSE
-rw-rw-r-- 1 dawanzi dawanzi   167 7月  25 19:12 readme.md
drwxrwxr-x 2 dawanzi dawanzi  4096 7月  25 17:28 src
exec shell command:  ls -l 
Elapsed time: 6.20ms 
```

