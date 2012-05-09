<?php
/**
 * @file
 * ca_sponsors.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ca_sponsors_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function ca_sponsors_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ca_sponsors_node_info() {
  $items = array(
    'ca_sponsor' => array(
      'name' => t('Sponsor'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
