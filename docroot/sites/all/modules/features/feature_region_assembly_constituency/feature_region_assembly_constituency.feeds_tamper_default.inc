<?php
/**
 * @file
 * feature_region_assembly_constituency.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function feature_region_assembly_constituency_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'taxonomy_district_importer-district_name-rewrite';
  $feeds_tamper->importer = 'taxonomy_district_importer';
  $feeds_tamper->source = 'district name';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[district name] ([state ref name])',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['taxonomy_district_importer-district_name-rewrite'] = $feeds_tamper;

  return $export;
}
