# Dtick

### 1 make&install

```shell
cd dtick
mkdir build
cd build
cmake ..
make 
sudo make install
```

### 2 usage

```shell
dtick <command <params> >
```

**example:**

```shell
dtick ls -l
```

**output information:**

```shell
start tick clock! 
command is :  ls -l 
.......................................................................
total 56
drwxrwxr-x 3 *** ***  4096 7月  25 19:26 build
-rw-rw-r-- 1 *** ***   200 7月  25 19:24 CMakeLists.txt
drwxrwxr-x 2 *** ***  4096 7月  25 19:24 include
-rw-rw-r-- 1 *** *** 34523 7月  25 19:24 LICENSE
-rw-rw-r-- 1 *** ***     7 7月  25 19:24 README.md
drwxrwxr-x 2 *** ***  4096 7月  25 19:24 src
exec shell command:  ls -l 
Elapsed time: 6.10ms 
```

