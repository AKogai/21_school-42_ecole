FROM debian

WORKDIR /home/teamspeak

RUN apt-get update -y
RUN apt-get upgrade -y
RUN apt-get install -y wget bzip2
RUN wget http://dl.4players.de/ts/releases/3.8.0/teamspeak3-server_linux_amd64-3.8.0.tar.bz2
RUN tar -xvf teamspeak3-server_linux_amd64-3.8.0.tar.bz2
WORKDIR teamspeak3-server_linux_amd64
RUN touch .ts3server_license_accepted

ENTRYPOINT sh ts3server_minimal_runscript.sh

# docker build -t ex01 .
# docker run --rm -p 9987:9987/udp -p 10011:10011 -p 30033:30033 ex01
