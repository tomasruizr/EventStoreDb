# See here for image contents: https://github.com/microsoft/vscode-dev-containers/tree/v0.134.0/containers/cpp/.devcontainer/base.Dockerfile
ARG VARIANT="bullseye"
# FROM --platform=linux/x86_64 mcr.microsoft.com/vscode/devcontainers/cpp:0-${VARIANT}
FROM --platform=linux/arm64 mcr.microsoft.com/vscode/devcontainers/cpp:dev-${VARIANT}

RUN apt-get purge cmake -y

RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install --no-install-recommends \
        build-essential \
        zsh \
        cppcheck \
        valgrind \
        libcurl4-openssl-dev \
        protobuf-compiler \
        libprotobuf-dev \
        libgrpc++-dev \
        protobuf-compiler-grpc \
        uuid-dev \
    && apt-get autoremove -y && apt-get clean -y && rm -rf /var/lib/apt/lists/*

RUN wget https://github.com/Kitware/CMake/releases/download/v3.22.2/cmake-3.22.2-Linux-x86_64.sh \
# RUN wget https://github.com/Kitware/CMake/releases/download/v3.22.2/cmake-3.22.2-Linux-aarch64.sh \
      -q -O /tmp/cmake-install.sh \
      && chmod u+x /tmp/cmake-install.sh \
      && mkdir /usr/bin/cmake \
      && /tmp/cmake-install.sh --skip-license --prefix=/usr/bin/cmake \
      && rm /tmp/cmake-install.sh

ENV PATH="/usr/bin/cmake/bin:${PATH}"