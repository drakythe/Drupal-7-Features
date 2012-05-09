<?php
/**
 * @file
 * ca_sponsors.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ca_sponsors_user_default_roles() {
  $roles = array();

  // Exported role: sponsors admin
  $roles['sponsors admin'] = array(
    'name' => 'sponsors admin',
    'weight' => '6',
    'machine_name' => 'sponsors_admin',
  );

  // Exported role: sponsors user
  $roles['sponsors user'] = array(
    'name' => 'sponsors user',
    'weight' => '7',
    'machine_name' => 'sponsors_user',
  );

  return $roles;
}
