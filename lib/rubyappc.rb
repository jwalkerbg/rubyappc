# frozen_string_literal: true

require_relative "rubyappc/version"
# require_relative "rubyappc/rubyappc"

module Rubyappc
  class Error < StandardError; end

  # Mainclass description
  class Mainclass
    def main
      puts "Hello from rubyappc"
    end
  end
end
