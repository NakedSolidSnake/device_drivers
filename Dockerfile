FROM ubuntu:latest 

RUN apt-get update -y\
    && apt install linux-headers-$(uname -r) -y\ 
    && apt-get install build-essential -y \ 
    && apt-get install flex bison -y

WORKDIR /device_drivers/src

CMD ["tail", "-f", "/dev/null"]