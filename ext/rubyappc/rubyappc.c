#include "rubyappc.h"

VALUE rb_mRubyappc;

VALUE hello_world(VALUE self) {
    return rb_str_new_cstr("Hello, world from C!");
}

RUBY_FUNC_EXPORTED void
Init_rubyappc(void)
{
  rb_mRubyappc = rb_define_module("Rubyappc");
  rb_define_singleton_method(rb_mRubyappc, "hello_world", hello_world, 0);
}
