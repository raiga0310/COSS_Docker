FROM quay.io/centos/centos:stream9
WORKDIR /home/dev
ENV mirrorlist=http://mirror.stream.centos.org/9-stream/BaseOS/x86_64/os/repodata/repomd.xml

RUN ["/bin/bash", "-c", "dnf update -y && dnf install -y epel-release"]
RUN ["/bin/bash", "-c", "dnf install -y gcc vim tree"]
RUN ["/bin/bash", "-c", "dnf install -y 'dnf-command(config-manager)' && dnf config-manager --add-repo https://cli.github.com/packages/rpm/gh-cli.repo && dnf install -y git gh"]

ENV TINI_VERSION v0.19.0
ADD https://github.com/krallin/tini/releases/download/${TINI_VERSION}/tini /tini
RUN chmod +x /tini
ENTRYPOINT ["/tini", "--"]

CMD ["/bin/bash"]
