<?php
/**
 * @file
 * ca_video_gallery.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ca_video_gallery_user_default_roles() {
  $roles = array();

  // Exported role: video admin
  $roles['video admin'] = array(
    'name' => 'video admin',
    'weight' => '3',
    'machine_name' => 'video_admin',
  );

  return $roles;
}
