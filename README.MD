# 说明
每个目录都可以通过make或cmake进行构建，每个目录包括bin和build两个目录：
- bin：用于存放生成后的二进制文件
- build：用于cmake的构建

## algo目录
algo目录包含库的源代码，编译时可用DYN和DEBUG两个参数：
- DYN：用于标识生成的是动态库（libalgo.so）还是静态库（libalgo.a）
  - 当DYN=y时，也是默认值，生成动态库（libalgo.so）
  - 当DYN=n时，生成静态库（libalgo.a）
- DEBUG：用于标识生成的库是不是调试版本
  - 当DEBUG=y时，生成调试版本的库
  - 当DEBUG=n时，也是默认值，生成非调试版本的库

make编译方法：
- $ cd ${ALGO}
- $ make DYN=[Y/n] DEBUG=[y/N]

cmake编译方法：
- $ cd ${ALGO}/build
- $ cmake -DDYN=[on/OFF] -DDEBUG=[on/OFF] ..
- $ make

## 编译algo_test测试文件
algo_test目录包含测试程序的源代码，编译时可用DEBUG参数：
- 当DEBUG=y时，生成调试版本的程序
- 当DEBUG=n时，也是默认值，生成非调试版本的程序

make编译方法：
- $ cd ${ALGO_TEST}
- $ make DEBUG=[y/N]

cmake编译方法：
- $ cd ${ALGO_TEST}/build
- $ cmake -DDEBUG=[on/OFF] ..
- $ make

注意：如果使用动态库，则需要指定LD_LIBRARY_PATH参数
- $ cd ${ALGO_TEST}
- $ export LD_LIBRARY_PATH=../algo/bin
