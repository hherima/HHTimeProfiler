# HHTimeProfiler
完全参考maniackk的工程，在需要测量的方法中添加这个代码。
    #import "TimeProfiler.h"
    [[TimeProfiler shareInstance] TPStartTrace:"xxx"];
    .....
    [[TimeProfiler shareInstance] TPStopTrace];

会在沙盒doc目录下，生成一个xxx.json文件。用chrome的tracing://打开就能看到火焰图
https://user-images.githubusercontent.com/6124021/117528821-c23cf800-b006-11eb-8ed6-2dc90e7f80ef.png

# 9月7号更新
修复14.7 崩溃问题
