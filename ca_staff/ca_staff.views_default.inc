<?php
/**
 * @file
 * ca_staff.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ca_staff_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'ca_staff';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Staff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '24';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['group_rendered'] = 1;
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_staff_s_image']['id'] = 'field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['table'] = 'field_data_field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['field'] = 'field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ca_staff_s_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_ca_staff_s_title']['id'] = 'field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['table'] = 'field_data_field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['field'] = 'field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['label'] = '';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['text'] = '<i>[field_ca_staff_s_title]</i>';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['settings'] = array(
    'trim_length' => '25',
  );
  $handler->display->display_options['fields']['field_ca_staff_s_title']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'node_weight';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'staff' => 'staff',
  );

  /* Display: CA Staff: Grid View Template One */
  $handler = $view->new_display('panel_pane', 'CA Staff: Grid View Template One', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'CA Staff: Grid View';

  /* Display: CA Staff: Sort */
  $handler = $view->new_display('panel_pane', 'CA Staff: Sort', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['weight']['id'] = 'weight';
  $handler->display->display_options['fields']['weight']['table'] = 'node_weight';
  $handler->display->display_options['fields']['weight']['field'] = 'weight';
  $handler->display->display_options['fields']['weight']['label'] = '';
  $handler->display->display_options['fields']['weight']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['external'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['weight']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['weight']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['html'] = 0;
  $handler->display->display_options['fields']['weight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['weight']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['weight']['hide_empty'] = 0;
  $handler->display->display_options['fields']['weight']['empty_zero'] = 0;
  $handler->display->display_options['fields']['weight']['hide_alter_empty'] = 1;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'staff' => 'staff',
  );
  $handler->display->display_options['pane_title'] = 'CA Staff: Sort';

  /* Display: CA Staff: Admin */
  $handler = $view->new_display('panel_pane', 'CA Staff: Admin', 'panel_pane_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['group_rendered'] = 1;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_ca_staff_s_image' => 'field_ca_staff_s_image',
    'field_ca_staff_s_title' => 'field_ca_staff_s_title',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_ca_staff_s_image' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ca_staff_s_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Bulk operations */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '25';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'node_assign_owner_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_make_sticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_make_unsticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_publish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpublish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'staff' => 'staff',
  );
  $handler->display->display_options['pane_title'] = 'CA Staff: Admin';

  /* Display: CA Staff: Node View Template One */
  $handler = $view->new_display('panel_pane', 'CA Staff: Node View Template One', 'panel_pane_4');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['group_rendered'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_staff_s_image']['id'] = 'field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['table'] = 'field_data_field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['field'] = 'field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['settings'] = array(
    'colorbox_node_style' => 'default',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
  );
  $handler->display->display_options['fields']['field_ca_staff_s_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_ca_staff_s_title']['id'] = 'field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['table'] = 'field_data_field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['field'] = 'field_ca_staff_s_title';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['label'] = '';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['text'] = '<i>[field_ca_staff_s_title]</i>';
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ca_staff_s_title']['settings'] = array(
    'trim_length' => '25',
  );
  $handler->display->display_options['fields']['field_ca_staff_s_title']['field_api_classes'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['id'] = 'field_ca_staff_s_image_1';
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['table'] = 'field_data_field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['field'] = 'field_ca_staff_s_image';
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['settings'] = array(
    'colorbox_node_style' => 'thumbnail',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
  );
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['delta_offset'] = '1';
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ca_staff_s_image_1']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $handler->display->display_options['pane_title'] = 'CA Staff: Node View Template One';
  $export['ca_staff'] = $view;

  return $export;
}
