FROM debian:latest

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update; \
  apt-get -y install locales dialog apt-utils man-db bc zsh fish zip unzip sudo tmux bat vim emacs-nox git iproute2 procps lsb-release build-essential autoconf automake m4 bison flex gettext httpie jq; \
  apt-get -y install libssl-dev libcurl4-openssl-dev zlib1g-dev libbz2-dev libreadline-dev libsqlite3-dev wget curl llvm libncurses5-dev libncursesw5-dev libelf-dev xz-utils tk-dev libffi-dev liblzma-dev python-openssl; \
  apt-get -y install libgmp-dev; \
  apt-get -y dist-upgrade; \
  echo 'en_US.UTF-8 UTF-8' >> /etc/locale.gen; \
  locale-gen; \
  update-locale LANG=en_US.UTF-8; \
  apt-get autoremove -y ;\
  apt-get clean -y; \
  rm -rf /var/lib/apt/lists/*

ENV DEBIAN_FRONTEND=

CMD ["/bin/bash"]