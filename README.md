# Rubyappc

This is a simple Ruby gem that demostrates how to add C extension module.

## Installation

```bash
bundle install
gem build rubyappc.gemspec
gem install rubyappc-m.n.p.gem
```

## Usage

To use this gem just run it without parameters

```bash
rubyappc
```

## Development

After checking out the repo, run `bin/setup` to install dependencies. Then, run `rake spec` to run the tests. You can also run `bin/console` for an interactive prompt that will allow you to experiment.

To install this gem onto your local machine, run `bundle exec rake install`. To release a new version, update the version number in `version.rb`, and then run `bundle exec rake release`, which will create a git tag for the version, push git commits and the created tag, and push the `.gem` file to [rubygems.org](https://rubygems.org).

C extension is placed in `ext/rubyappc/`. Because this is a very simple gem - it just prints `Hello Ruby world from C world!` - it has two files only `rubyappc.h` and `rubyappc.c`. These names are arbitrary, they do not need to be the same as the name of the gem.

## Contributing

Bug reports and pull requests are welcome on GitHub at https://github.com/jwalkerbg/rubyappc.

## License

The gem is available as open source under the terms of the [MIT License](https://opensource.org/licenses/MIT).
