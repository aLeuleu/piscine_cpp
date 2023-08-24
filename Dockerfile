FROM ubuntu:latest

#install clang++
RUN apt-get update && apt-get install -y \
    clang++-9 \
    zsh \
    cmake \
    curl \

RUN sh -c "$(curl -fsSL https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"

COPY ./Module00 /Module00
COPY ./Module01 /Module01
COPY ./Module02 /Module02
COPY ./Module03 /Module03
COPY ./Module04 /Module04
COPY ./Module05 /Module05
COPY ./Module06 /Module06


ENTRYPOINT ["/bin/zsh"]