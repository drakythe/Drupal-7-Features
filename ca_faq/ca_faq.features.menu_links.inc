<?php
/**
 * @file
 * ca_faq.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ca_faq_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:faq-page
  $menu_links['main-menu:faq-page'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'faq-page',
    'router_path' => 'faq-page',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('FAQ');


  return $menu_links;
}
