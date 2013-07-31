<?php
/**
 * @file
 * f_url_alias_pattern.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function f_url_alias_pattern_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-group-field_group_election_name'
  $field_instances['node-group-field_group_election_name'] = array(
    'bundle' => 'group',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_group_election_name',
    'label' => 'Election Name',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => '41',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Election Name');

  return $field_instances;
}
