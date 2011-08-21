<?php
/**
 * @file
 * touchdown_core.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function touchdown_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
