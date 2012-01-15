<?php
/**
 * @file
 * ca_staff.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ca_staff_user_default_roles() {
  $roles = array();

  // Exported role: staff admin
  $roles['staff admin'] = array(
    'name' => 'staff admin',
    'weight' => '4',
    'machine_name' => '',
  );

  return $roles;
}
