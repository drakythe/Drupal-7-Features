<?php
/**
 * @file
 * ca_testimonials.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ca_testimonials_user_default_roles() {
  $roles = array();

  // Exported role: testimonials admin
  $roles['testimonials admin'] = array(
    'name' => 'testimonials admin',
    'weight' => '4',
  );

  return $roles;
}
