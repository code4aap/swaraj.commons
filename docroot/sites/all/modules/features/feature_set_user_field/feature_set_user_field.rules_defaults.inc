<?php
/**
 * @file
 * feature_set_user_field.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function feature_set_user_field_default_rules_configuration() {
  $items = array();
  $items['rules_set_facebook_link_field'] = entity_import('rules_config', '{ "rules_set_facebook_link_field" : {
      "LABEL" : "set facebook link field",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "hybridauth" ],
      "ON" : [ "hybridauth_user_insert" ],
      "DO" : [
        { "data_set" : {
            "data" : [ "site:current-user:field-name-first" ],
            "value" : "[hybridauth:firstName]"
          }
        },
        { "data_set" : {
            "data" : [ "site:current-user:field-name-first" ],
            "value" : "[hybridauth:lastName]"
          }
        },
        { "data_set" : {
            "data" : [ "site:current-user:field-facebook-url" ],
            "value" : [ "hybridauth-user:field-facebook-url" ]
          }
        }
      ]
    }
  }');
  return $items;
}
