api = 2
core = 7.x

; Build Kit 7.x-2-x Distro http://drupal.org/project/buildkit
includes[] = http://drupalcode.org/project/buildkit.git/blob_plain/refs/heads/7.x-2.x:/distro.make

projects[touchdown][type] = profile
projects[touchdown][download][type] = git
projects[touchdown][download][url] = http://github.com/sprice/touchdown.git
