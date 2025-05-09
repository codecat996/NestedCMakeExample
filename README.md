# NestedCMakeExample
这是一个使用嵌套的 CMake 管理结构的完整的 C++ 项目示例。这个项目结构清晰，将加减乘除（calc）、排序算法（sort）等功能模块分别封装为库，测试代码放在 test1、test2 中构建为独立的可执行程序。每个目录中的 CMakeLists.txt 文件都已添加详细注释。

# 项目结构
.
├── CMakeLists.txt          # 顶层 CMake 配置
├── build/                  # 构建输出目录（空目录，用于 CMake 构建）
├── include/                # 公共头文件
│   ├── calc.h
│   └── sort.h
├── lib/                    # 库文件输出目录
├── bin/                    # 可执行文件输出目录
├── calc/                   # 算术库实现
│   ├── add.cpp
│   ├── div.cpp
│   ├── mult.cpp
│   ├── sub.cpp
│   └── CMakeLists.txt
├── sort/                   # 排序库实现
│   ├── insert.cpp
│   ├── select.cpp
│   └── CMakeLists.txt
├── test1/                  # 第一个测试程序
│   ├── calc.cpp
│   └── CMakeLists.txt
└── test2/                  # 第二个测试程序
    ├── sort.cpp
    └── CMakeLists.txt
