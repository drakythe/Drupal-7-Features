<?php
/**
 * @file
 * ca_sub_pages.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ca_sub_pages_user_default_roles() {
  $roles = array();

  // Exported role: sub page admin
  $roles['sub page admin'] = array(
    'name' => 'sub page admin',
    'weight' => '5',
    'machine_name' => 'sub_page_admin',
  );

  return $roles;
}
