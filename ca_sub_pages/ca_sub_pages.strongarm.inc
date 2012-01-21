<?php
/**
 * @file
 * ca_sub_pages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ca_sub_pages_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '[node:menu-link:parent:url:path]/[node:title]';
  $export['pathauto_node_page_pattern'] = $strongarm;

  return $export;
}
