<?php
/**
 * @file
 * f_url_alias_pattern.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_url_alias_pattern_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
