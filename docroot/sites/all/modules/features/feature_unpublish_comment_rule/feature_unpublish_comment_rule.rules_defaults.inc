<?php
/**
 * @file
 * feature_unpublish_comment_rule.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function feature_unpublish_comment_rule_default_rules_configuration() {
  $items = array();
  $items['rules_unpublish_comment_rule'] = entity_import('rules_config', '{ "rules_unpublish_comment_rule" : {
      "LABEL" : "unpublish comment rule",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "flag", "rules" ],
      "ON" : [ "flag_flagged_inappropriate_comment" ],
      "IF" : [
        { "flag_threshold_comment" : {
            "flag" : "inappropriate_comment",
            "comment" : [ "flagged-comment" ],
            "number" : "3",
            "operator" : "\\u003E="
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "flagged-comment:status" ], "value" : "0" } }
      ]
    }
  }');
  return $items;
}
