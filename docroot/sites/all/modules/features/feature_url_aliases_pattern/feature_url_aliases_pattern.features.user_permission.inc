<?php
/**
 * @file
 * feature_url_aliases_pattern.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_url_aliases_pattern_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  return $permissions;
}
