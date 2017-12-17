#include <pebble.h>
static Window *s_main_window;

static void main_window_load(Window *window) {
  
}

static void  main_window_unload(Window *window) {
  
}

static void init() {
  //create main window element
  s_main_window = window_create();
  
  //create handlers to manage elements inside the window
  window_set_window_handlers(s_main_window, (WindowHandlers) {
    .load = main_window_load,
    .unload = main_window_unload
  });
  
  window_stack_push(s_main_window, true);
}

static void deinit() {
  //destroy window
  window_destroy(s_main_window);
}

int main(void) {
  init();
  app_event_loop();
  deinit();
}

