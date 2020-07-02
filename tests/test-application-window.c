/*
 * Copyright (C) 2020 Alexander Mikhaylenko <alexm@gnome.org>
 *
 * SPDX-License-Identifier: LGPL-2.1+
 */

#define HANDY_USE_UNSTABLE_API
#include <handy.h>


static void
test_hdy_application_window_new (void)
{
  g_autoptr (GtkWidget) window = NULL;

  window = g_object_ref_sink (hdy_application_window_new ());
  g_assert_nonnull (window);
}


gint
main (gint argc,
      gchar *argv[])
{
  gtk_test_init (&argc, &argv, NULL);
  hdy_init ();

  g_test_add_func("/Handy/ApplicationWindow/new", test_hdy_application_window_new);

  return g_test_run();
}
