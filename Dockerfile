FROM ubuntu:latest

#install c++
RUN apt-get update
RUN apt-get install -y \
#        c++-9 \
        g++ \
        zsh \
        cmake \
        wget \
        git \
        valgrind \
        vim

RUN sh -c "$(wget https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh -O -)"
RUN mkdir /test_cpp

COPY entry_script.sh /entry_script.sh
COPY unitary_tests.sh /unitary_tests.sh
COPY Module09 /test_cpp/Module09

#CMD ["/bin/zsh"]
CMD ["/bin/zsh", "/entry_script.sh"]

