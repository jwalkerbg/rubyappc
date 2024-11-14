#include "rubyappc.h"

VALUE rb_mRubyappc;

RUBY_FUNC_EXPORTED void
Init_rubyappc(void)
{
  rb_mRubyappc = rb_define_module("Rubyappc");
}
