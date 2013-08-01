<?php
/**
 * @file
 * feature_unpublish_comment_rule.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_unpublish_comment_rule_strongarm() {
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
    'flag_flagged_inappropriate_node' => 30,
    'flag_unflagged_inappropriate_node' => 31,
    'flag_flagged_email_term' => 32,
    'flag_unflagged_email_term' => 33,
    'flag_flagged_email_node' => 34,
    'flag_unflagged_email_node' => 35,
    'flag_flagged_commons_follow_group' => 36,
    'flag_unflagged_commons_follow_group' => 37,
    'flag_flagged_email_user' => 38,
    'flag_unflagged_email_user' => 39,
    'hybridauth_identity_added' => 40,
    'hybridauth_identity_deleted' => 41,
    'hybridauth_user_insert' => 42,
    'hybridauth_user_login' => 43,
    'og_user_insert' => 44,
    'og_user_approved' => 45,
    'og_user_blocked' => 46,
    'og_user_delete' => 47,
    'radioactivity_field_cut_off' => 48,
    'node_insert' => 49,
    'node_update' => 50,
    'node_presave' => 51,
    'node_view' => 52,
    'node_delete' => 53,
    'init' => 54,
    'cron' => 55,
    'watchdog' => 56,
    'user_insert' => 57,
    'user_update' => 58,
    'user_presave' => 59,
    'user_view' => 60,
    'user_delete' => 61,
    'user_login' => 62,
    'user_logout' => 63,
    'comment_insert' => 64,
    'comment_update' => 65,
    'comment_presave' => 66,
    'comment_view' => 67,
    'comment_delete' => 68,
    'taxonomy_term_insert' => 69,
    'taxonomy_term_update' => 70,
    'taxonomy_term_presave' => 71,
    'taxonomy_term_delete' => 72,
    'taxonomy_vocabulary_insert' => 73,
    'taxonomy_vocabulary_update' => 74,
    'taxonomy_vocabulary_presave' => 75,
    'taxonomy_vocabulary_delete' => 76,
  );
  $export['rules_empty_sets'] = $strongarm;

  return $export;
}
