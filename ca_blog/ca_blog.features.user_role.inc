<?php
/**
 * @file
 * ca_blog.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ca_blog_user_default_roles() {
  $roles = array();

  // Exported role: blog admin
  $roles['blog admin'] = array(
    'name' => 'blog admin',
    'weight' => '4',
    'machine_name' => 'blog_admin',
  );

  return $roles;
}
