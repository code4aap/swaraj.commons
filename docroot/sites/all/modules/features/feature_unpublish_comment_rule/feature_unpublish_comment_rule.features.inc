<?php
/**
 * @file
 * feature_unpublish_comment_rule.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_unpublish_comment_rule_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
