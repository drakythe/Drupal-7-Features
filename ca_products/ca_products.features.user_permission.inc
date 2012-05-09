<?php
/**
 * @file
 * ca_products.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ca_products_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ca_product content.
  $permissions['create ca_product content'] = array(
    'name' => 'create ca_product content',
    'roles' => array(
      0 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: create ca_product_category content.
  $permissions['create ca_product_category content'] = array(
    'name' => 'create ca_product_category content',
    'roles' => array(
      0 => 'products admin',
      1 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ca_product content.
  $permissions['delete any ca_product content'] = array(
    'name' => 'delete any ca_product content',
    'roles' => array(
      0 => 'products admin',
      1 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ca_product_category content.
  $permissions['delete any ca_product_category content'] = array(
    'name' => 'delete any ca_product_category content',
    'roles' => array(
      0 => 'products admin',
      1 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ca_product content.
  $permissions['delete own ca_product content'] = array(
    'name' => 'delete own ca_product content',
    'roles' => array(
      0 => 'products admin',
      1 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ca_product_category content.
  $permissions['delete own ca_product_category content'] = array(
    'name' => 'delete own ca_product_category content',
    'roles' => array(
      0 => 'products admin',
      1 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ca_product content.
  $permissions['edit any ca_product content'] = array(
    'name' => 'edit any ca_product content',
    'roles' => array(
      0 => 'products admin',
      1 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ca_product_category content.
  $permissions['edit any ca_product_category content'] = array(
    'name' => 'edit any ca_product_category content',
    'roles' => array(
      0 => 'products admin',
      1 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ca_product content.
  $permissions['edit own ca_product content'] = array(
    'name' => 'edit own ca_product content',
    'roles' => array(
      0 => 'products admin',
      1 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ca_product_category content.
  $permissions['edit own ca_product_category content'] = array(
    'name' => 'edit own ca_product_category content',
    'roles' => array(
      0 => 'products admin',
      1 => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
