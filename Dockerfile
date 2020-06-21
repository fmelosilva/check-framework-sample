#
# Build stage
#
FROM gcc:8.3.0 AS build

COPY ./Makefile /opt/app/Makefile
ADD ./src /opt/app/src
ADD ./tests /opt/app/tests

WORKDIR /opt/app

RUN apt-get update && \
    apt-get install -y check && \
    make

ENTRYPOINT [ "/opt/app/test" ]