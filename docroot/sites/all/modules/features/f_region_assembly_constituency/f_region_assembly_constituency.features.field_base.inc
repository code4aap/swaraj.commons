<?php
/**
 * @file
 * f_region_assembly_constituency.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function f_region_assembly_constituency_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_region'
  $field_bases['field_region'] = array(
    'active' => '1',
    'cardinality' => '1',
    'deleted' => '0',
    'entity_types' => array(),
    'field_name' => 'field_region',
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
          'vocabulary' => 'region_ac',
          'parent' => '0',
        ),
      ),
    ),
    'translatable' => '0',
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
