<?php
/**
 * @file
 * ca_gallery.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ca_gallery_user_default_roles() {
  $roles = array();

  // Exported role: gallery admin
  $roles['gallery admin'] = array(
    'name' => 'gallery admin',
    'weight' => '3',
    'machine_name' => 'gallery_admin',
  );

  return $roles;
}
