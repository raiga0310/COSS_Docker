FROM quay.io/centos/centos:stream9

WORKDIR /home/dev
ENV mirrorlist=http://mirror.stream.centos.org/9-stream/BaseOS/x86_64/os/repodata/repomd.xml

RUN ["/bin/bash", "-c", "yum install -y gcc vim"]