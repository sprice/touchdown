api = 2
core = 7.x

; Build Kit 7.x-2-x Distro http://drupal.org/project/buildkit
includes[] = http://drupalcode.org/project/buildkit.git/blob_plain/refs/heads/7.x-2.x:/drupal-org.make

; Build Kit overrides

projects[rubik][subdir] = contrib
projects[tao][subdir] = contrib

; Additional Contrib

projects[boxes][subdir] = contrib
projects[boxes][version] = 1.0-beta4
