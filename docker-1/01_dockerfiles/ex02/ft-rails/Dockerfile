FROM ruby

RUN apt-get update -y
RUN apt-get upgrade -y
RUN apt-get install -y nodejs sqlite3 gem
RUN gem install rails bundler
RUN gem install bundler --no-document
RUN gem install rails --no-document
RUN gem install rake -v 12.3.2 --no-document

ONBUILD COPY app /opt/app
ONBUILD WORKDIR /opt/app
ONBUILD EXPOSE 3000
ONBUILD RUN bundle install
ONBUILD RUN rake db:migrate
ONBUILD RUN rake db:seed

# docker build -t ft-rails:on-build .