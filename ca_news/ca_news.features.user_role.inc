<?php
/**
 * @file
 * ca_news.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ca_news_user_default_roles() {
  $roles = array();

  // Exported role: news admin
  $roles['news admin'] = array(
    'name' => 'news admin',
    'weight' => '4',
    'machine_name' => 'news_admin',
  );

  return $roles;
}
