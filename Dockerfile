FROM ubuntu:latest

#install clang++
RUN apt-get update && apt-get install -y \
    clang++-9 \
    g++ \
    zsh \
    cmake \
    wget \
    git \
    valgrind \
    vim

RUN sh -c "$(wget https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh -O -)"

COPY entry_script.sh /entry_script.sh

RUN git clone https://github.com/aLeuleu/piscine_cpp.git test_cpp

#CMD ["/bin/zsh", "/entry_script.sh"]
CMD ["/bin/zsh", "/test_cpp"]

