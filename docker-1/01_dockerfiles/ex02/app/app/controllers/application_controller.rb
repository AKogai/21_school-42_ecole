class ApplicationController < ActionController::Base
  protect_from_forgery with: :exception 
  def hello
    render html: "ijanie have done this bitch"
  end
end
