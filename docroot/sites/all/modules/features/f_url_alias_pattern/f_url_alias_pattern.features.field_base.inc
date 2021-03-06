<?php
/**
 * @file
 * f_url_alias_pattern.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function f_url_alias_pattern_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_group_election_name'
  $field_bases['field_group_election_name'] = array(
    'active' => '1',
    'cardinality' => '1',
    'deleted' => '0',
    'entity_types' => array(),
    'field_name' => 'field_group_election_name',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => '0',
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'target_election',
          'parent' => '0',
        ),
      ),
    ),
    'translatable' => '0',
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
