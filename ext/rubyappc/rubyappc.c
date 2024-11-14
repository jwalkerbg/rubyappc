#include "rubyappc.h"

VALUE rb_mRubyappc;

VALUE hello_world(VALUE self) {
    return rb_str_new_cstr("Hello Ruby world from C world!");
}

// C function to calculate the first N Fibonacci numbers
VALUE fibonacci(VALUE self, VALUE n) {
    int i;
    int count = NUM2INT(n); // Convert Ruby Integer to C int
    if (count < 1) {
        rb_raise(rb_eArgError, "N must be a positive integer.");
    }

    // Initialize an array for Fibonacci numbers
    VALUE fib_array = rb_ary_new2(count); // Create a Ruby array with N elements

    // Special cases for the first two Fibonacci numbers
    long a = 0, b = 1;

    for (i = 0; i < count; i++) {
        // Add the current Fibonacci number to the array
        rb_ary_store(fib_array, i, LONG2NUM(a));

        // Compute the next Fibonacci number
        long temp = a + b;
        a = b;
        b = temp;
    }

    return fib_array; // Return the Ruby array
}

RUBY_FUNC_EXPORTED void
Init_rubyappc(void)
{
  rb_mRubyappc = rb_define_module("Rubyappc");
  rb_define_singleton_method(rb_mRubyappc, "hello_world", hello_world, 0);
  rb_define_singleton_method(rb_mRubyappc, "fibonacci", fibonacci, 1); // Define Rubyappc.fibonacci method
}
