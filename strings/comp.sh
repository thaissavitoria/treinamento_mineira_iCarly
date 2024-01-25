#/bin/env sh
CXX=g++
CXXFLAGS="-std=c++17 -fsanitize=address,undefined -fno-omit-frame-pointer -g -Wall -Wshadow -Wno-unused-result -Wno-sign-compare -Wno-char-subscripts"

${CXX} ${CXXFLAGS} -o ${1} ${1}.cpp

if [ $# -lt 2 ]; then
    ./${1}
else
    ./${1} < ${2}
fi
