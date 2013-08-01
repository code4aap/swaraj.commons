<?php
/**
 * @file
 * feature_unpublish_node_rule.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_unpublish_node_rule_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rules_empty_sets';
  $strongarm->value = array(
    'message_insert' => 0,
    'message_update' => 1,
    'message_presave' => 2,
    'message_delete' => 3,
    'message_view' => 4,
    'og_membership_insert' => 5,
    'og_membership_update' => 6,
    'og_membership_presave' => 7,
    'og_membership_delete' => 8,
    'registration_insert' => 9,
    'registration_update' => 10,
    'registration_presave' => 11,
    'registration_delete' => 12,
    'registration_view' => 13,
    'feeds_before_import' => 14,
    'feeds_after_import' => 15,
    'feeds_import_taxonomy_assembly_constituency_importer' => 16,
    'feeds_import_taxonomy_district_importer' => 17,
    'feeds_import_taxonomy_state_importer' => 18,
    'flag_flagged_commons_follow_user' => 19,
    'flag_unflagged_commons_follow_user' => 20,
    'flag_flagged_email_group' => 21,
    'flag_unflagged_email_group' => 22,
    'flag_flagged_commons_follow_node' => 23,
    'flag_unflagged_commons_follow_node' => 24,
    'flag_flagged_commons_follow_term' => 25,
    'flag_unflagged_commons_follow_term' => 26,
    'flag_flagged_abuse_user' => 27,
    'flag_unflagged_abuse_user' => 28,
    'flag_unflagged_inappropriate_comment' => 29,
    'flag_unflagged_inappropriate_node' => 30,
    'flag_flagged_email_term' => 31,
    'flag_unflagged_email_term' => 32,
    'flag_flagged_email_node' => 33,
    'flag_unflagged_email_node' => 34,
    'flag_flagged_commons_follow_group' => 35,
    'flag_unflagged_commons_follow_group' => 36,
    'flag_flagged_email_user' => 37,
    'flag_unflagged_email_user' => 38,
    'hybridauth_identity_added' => 39,
    'hybridauth_identity_deleted' => 40,
    'hybridauth_user_insert' => 41,
    'hybridauth_user_login' => 42,
    'og_user_insert' => 43,
    'og_user_approved' => 44,
    'og_user_blocked' => 45,
    'og_user_delete' => 46,
    'radioactivity_field_cut_off' => 47,
    'node_insert' => 48,
    'node_update' => 49,
    'node_presave' => 50,
    'node_view' => 51,
    'node_delete' => 52,
    'init' => 53,
    'cron' => 54,
    'watchdog' => 55,
    'user_insert' => 56,
    'user_update' => 57,
    'user_presave' => 58,
    'user_view' => 59,
    'user_delete' => 60,
    'user_login' => 61,
    'user_logout' => 62,
    'comment_insert' => 63,
    'comment_update' => 64,
    'comment_presave' => 65,
    'comment_view' => 66,
    'comment_delete' => 67,
    'taxonomy_term_insert' => 68,
    'taxonomy_term_update' => 69,
    'taxonomy_term_presave' => 70,
    'taxonomy_term_delete' => 71,
    'taxonomy_vocabulary_insert' => 72,
    'taxonomy_vocabulary_update' => 73,
    'taxonomy_vocabulary_presave' => 74,
    'taxonomy_vocabulary_delete' => 75,
  );
  $export['rules_empty_sets'] = $strongarm;

  return $export;
}
