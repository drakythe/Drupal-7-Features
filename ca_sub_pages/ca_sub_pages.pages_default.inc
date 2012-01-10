<?php
/**
 * @file
 * ca_sub_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ca_sub_pages_default_page_manager_pages() {
  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_sub_pages_add_sub_page';
  $page->task = 'page';
  $page->admin_title = 'CA Sub Pages: Add Sub Page';
  $page->admin_description = '';
  $page->path = 'node/%node/add_sub_page';
  $page->access = array(
    'plugins' => array(
      5 => array(
        'name' => 'node_menu_depth',
        'settings' => array(
          'menu' => 'main-menu',
          'menu_depth' => 'p3',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      6 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 13007701,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      7 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'page' => 'page',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add Sub Page',
    'name' => 'navigation',
    'weight' => '10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_sub_pages_add_sub_page_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_sub_pages_add_sub_page';
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'node_create_menu',
    'context_admin_options_items' => 'page',
    'context_admin_sub_page' => 1,
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'argument_entity_id:node_1',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_sub_pages_add_sub_page'] = $page;

  return $pages;

}
