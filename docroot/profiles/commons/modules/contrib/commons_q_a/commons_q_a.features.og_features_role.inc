<?php
/**
 * @file
 * commons_q_a.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function commons_q_a_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:group:aap candidate'.
  $roles['node:group:aap candidate'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'group',
    'name' => 'aap candidate',
  );

  return $roles;
}
