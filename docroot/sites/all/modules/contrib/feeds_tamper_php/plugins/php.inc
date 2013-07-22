<?php

/**
 * @file
 */

$plugin = array(
  'form'     => 'feeds_tamper_php_form',
  'callback' => 'feeds_tamper_php_callback',
  'name'     => 'Execute php code',
  'multi'    => 'direct',
  'category' => 'Other',
);

/**
 * Implementing hook_form().
 */
function feeds_tamper_php_form($importer, $element_key, $settings) {
  $form = array();
  $mappings = $importer->processor->config['mappings'];
  $replace = array();

  foreach ($mappings as $mapping) {
    $replace[] = '[' . $mapping['source'] . ']';
  }
  $form['php'] = array(
    '#type' => 'textarea',
    '#title' => t('PHP code'),
    '#default_value' => isset($settings['php']) ? $settings['php'] : '',
    '#description' => t('This code will be executed. Use $field as value of this field. Do not use < ?php and ? >. <br />For example, use:      return substr($field, 0, 10);'),
  );
  $form['help'] = array(
    '#type' => 'fieldset',
    '#title' => t('Available Replacement Patterns'),
    '#collapsed' => TRUE,
    '#collapsible' => TRUE,
    '#value' => theme('item_list', array('items' => $replace)),
  );
  return $form;
}

/**
 * Callback function for PHP plugin
 */
function feeds_tamper_php_callback($result, $item_key, $element_key, &$field, $settings) {

  $output = feeds_tamper_php_value($settings['php'], $field);
  // The tokens supplied are with first letter uppercase whereas during replacement, they are replaced by lower case.
  //Remove this line if feeds tamper module fixes that piece of code
  $output = strtolower($output);
  // Replace the token values with what is supplied in the Feeds Importer
  $trans = array();
  $item = $result->items[$item_key];
  foreach ($item as $key => $value) {
    $trans['[' . $key . ']'] = $value;
  }
  $field = strtr($output, $trans);
}

/**
 * Callback function for executing PHP code provided by administrator
 */
function feeds_tamper_php_value($code, $field) {
  ob_start();
  $code = eval($code);
  ob_end_clean();
  return $code;
}