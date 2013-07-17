<?php
/**
 * @file
 * f_hybridauth_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_hybridauth_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: use hybridauth.
  $permissions['use hybridauth'] = array(
    'name' => 'use hybridauth',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'hybridauth',
  );

  return $permissions;
}
