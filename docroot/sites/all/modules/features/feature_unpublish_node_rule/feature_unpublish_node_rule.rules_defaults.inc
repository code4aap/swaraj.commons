<?php
/**
 * @file
 * feature_unpublish_node_rule.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function feature_unpublish_node_rule_default_rules_configuration() {
  $items = array();
  $items['rules_unpublish_node_rule'] = entity_import('rules_config', '{ "rules_unpublish_node_rule" : {
      "LABEL" : "unpublish node rule",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "flag", "rules" ],
      "ON" : [ "flag_flagged_inappropriate_node" ],
      "IF" : [
        { "flag_threshold_node" : {
            "flag" : "inappropriate_node",
            "node" : [ "flagged-node" ],
            "number" : "3",
            "operator" : "\\u003E="
          }
        }
      ],
      "DO" : [ { "node_unpublish" : { "node" : [ "flagged-node" ] } } ]
    }
  }');
  return $items;
}
