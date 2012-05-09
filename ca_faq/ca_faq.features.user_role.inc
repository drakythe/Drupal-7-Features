<?php
/**
 * @file
 * ca_faq.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ca_faq_user_default_roles() {
  $roles = array();

  // Exported role: faq admin.
  $roles['faq admin'] = array(
    'name' => 'faq admin',
    'weight' => '5',
    'machine_name' => 'faq_admin',
  );

  return $roles;
}
