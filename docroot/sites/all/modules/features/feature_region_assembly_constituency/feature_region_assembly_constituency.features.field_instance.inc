<?php
/**
 * @file
 * feature_region_assembly_constituency.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_region_assembly_constituency_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-region_assembly_constituency-field_assembly_constituency_code'
  $field_instances['taxonomy_term-region_assembly_constituency-field_assembly_constituency_code'] = array(
    'bundle' => 'region_assembly_constituency',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_assembly_constituency_code',
    'label' => 'Assembly constituency code',
    'required' => 1,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '8',
      ),
      'type' => 'text_textfield',
      'weight' => '41',
    ),
  );

  // Exported field_instance: 'taxonomy_term-region_assembly_constituency-field_region_country_reference'
  $field_instances['taxonomy_term-region_assembly_constituency-field_region_country_reference'] = array(
    'bundle' => 'region_assembly_constituency',
    'default_value' => array(
      0 => array(
        'tid' => '24541',
      ),
    ),
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_region_country_reference',
    'label' => 'country reference',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => '46',
    ),
  );

  // Exported field_instance: 'taxonomy_term-region_assembly_constituency-field_region_district_reference'
  $field_instances['taxonomy_term-region_assembly_constituency-field_region_district_reference'] = array(
    'bundle' => 'region_assembly_constituency',
    'default_value' => array(
      0 => array(
        'tid' => '25438',
      ),
    ),
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_region_district_reference',
    'label' => 'district reference',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => '42',
    ),
  );

  // Exported field_instance: 'taxonomy_term-region_assembly_constituency-field_region_state_reference'
  $field_instances['taxonomy_term-region_assembly_constituency-field_region_state_reference'] = array(
    'bundle' => 'region_assembly_constituency',
    'default_value' => array(
      0 => array(
        'tid' => '24984',
      ),
    ),
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
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_region_state_reference',
    'label' => 'state reference',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => '48',
    ),
  );

  // Exported field_instance: 'taxonomy_term-region_district-field_region_country_reference'
  $field_instances['taxonomy_term-region_district-field_region_country_reference'] = array(
    'bundle' => 'region_district',
    'default_value' => array(
      0 => array(
        'tid' => '24541',
      ),
    ),
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_region_country_reference',
    'label' => 'country reference',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => '44',
    ),
  );

  // Exported field_instance: 'taxonomy_term-region_district-field_region_district_code'
  $field_instances['taxonomy_term-region_district-field_region_district_code'] = array(
    'bundle' => 'region_district',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_region_district_code',
    'label' => 'district code',
    'required' => 1,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '8',
      ),
      'type' => 'text_textfield',
      'weight' => '41',
    ),
  );

  // Exported field_instance: 'taxonomy_term-region_district-field_region_state_reference'
  $field_instances['taxonomy_term-region_district-field_region_state_reference'] = array(
    'bundle' => 'region_district',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_region_state_reference',
    'label' => 'state reference',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => '45',
    ),
  );

  // Exported field_instance: 'taxonomy_term-region_state-field_region_country_reference'
  $field_instances['taxonomy_term-region_state-field_region_country_reference'] = array(
    'bundle' => 'region_state',
    'default_value' => array(
      0 => array(
        'tid' => '24541',
      ),
    ),
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_region_country_reference',
    'label' => 'country reference',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => '43',
    ),
  );

  // Exported field_instance: 'taxonomy_term-region_state-field_region_state_code'
  $field_instances['taxonomy_term-region_state-field_region_state_code'] = array(
    'bundle' => 'region_state',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_region_state_code',
    'label' => 'state code',
    'required' => 1,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '8',
      ),
      'type' => 'text_textfield',
      'weight' => '41',
    ),
  );

  // Exported field_instance: 'user-user-field_country'
  $field_instances['user-user-field_country'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'tid' => '24541',
      ),
    ),
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_country',
    'label' => 'Country',
    'required' => 1,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => '9',
    ),
  );

  // Exported field_instance: 'user-user-field_user_assembly_constituency'
  $field_instances['user-user-field_user_assembly_constituency'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'tid' => '28502',
      ),
    ),
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_assembly_constituency',
    'label' => 'Assembly constituency',
    'required' => 1,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => '12',
    ),
  );

  // Exported field_instance: 'user-user-field_user_district'
  $field_instances['user-user-field_user_district'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'tid' => '25443',
      ),
    ),
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_district',
    'label' => 'District',
    'required' => 1,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => '11',
    ),
  );

  // Exported field_instance: 'user-user-field_user_state'
  $field_instances['user-user-field_user_state'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'tid' => '24984',
      ),
    ),
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_state',
    'label' => 'State',
    'required' => 1,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => '10',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Assembly constituency');
  t('Assembly constituency code');
  t('Country');
  t('District');
  t('State');
  t('country reference');
  t('district code');
  t('district reference');
  t('state code');
  t('state reference');

  return $field_instances;
}
