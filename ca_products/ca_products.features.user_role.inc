<?php
/**
 * @file
 * ca_products.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ca_products_user_default_roles() {
  $roles = array();

  // Exported role: products admin.
  $roles['products admin'] = array(
    'name' => 'products admin',
    'weight' => '6',
    'machine_name' => 'products_admin',
  );

  return $roles;
}
