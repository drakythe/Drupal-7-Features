<?php
/**
 * @file
 * ca_events.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ca_events_user_default_roles() {
  $roles = array();

  // Exported role: event admin
  $roles['event admin'] = array(
    'name' => 'event admin',
    'weight' => '4',
    'machine_name' => '',
  );

  return $roles;
}
