<?php
/**
 * @file
 * ca_sponsors.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ca_sponsors_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'ca_sponsors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Sponsors';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_sponsors_image']['id'] = 'field_ca_sponsors_image';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['table'] = 'field_data_field_ca_sponsors_image';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['field'] = 'field_ca_sponsors_image';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ca_sponsors_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['field_api_classes'] = 0;
  /* Field: Content: About */
  $handler->display->display_options['fields']['field_ca_sponsors_about']['id'] = 'field_ca_sponsors_about';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['table'] = 'field_data_field_ca_sponsors_about';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['field'] = 'field_ca_sponsors_about';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['label'] = '';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['max_length'] = '600';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['html'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['settings'] = array(
    'trim_length' => '700',
  );
  $handler->display->display_options['fields']['field_ca_sponsors_about']['field_api_classes'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_sponsor' => 'ca_sponsor',
  );

  /* Display: CA Sponsors: List Template One */
  $handler = $view->new_display('panel_pane', 'CA Sponsors: List Template One', 'ca_sponsors_list_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_sponsors_image']['id'] = 'field_ca_sponsors_image';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['table'] = 'field_data_field_ca_sponsors_image';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['field'] = 'field_ca_sponsors_image';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ca_sponsors_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['field_api_classes'] = 0;
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['id'] = 'field_ca_sponsors_dates';
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['table'] = 'field_data_field_ca_sponsors_dates';
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['field'] = 'field_ca_sponsors_dates';
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['label'] = '';
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['field_api_classes'] = 0;
  /* Field: Content: About */
  $handler->display->display_options['fields']['field_ca_sponsors_about']['id'] = 'field_ca_sponsors_about';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['table'] = 'field_data_field_ca_sponsors_about';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['field'] = 'field_ca_sponsors_about';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['label'] = '';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['html'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['settings'] = array(
    'trim_length' => '400',
  );
  $handler->display->display_options['fields']['field_ca_sponsors_about']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More';
  /* Field: Content: AddToAny link */
  $handler->display->display_options['fields']['addtoany_link']['id'] = 'addtoany_link';
  $handler->display->display_options['fields']['addtoany_link']['table'] = 'node';
  $handler->display->display_options['fields']['addtoany_link']['field'] = 'addtoany_link';
  $handler->display->display_options['fields']['addtoany_link']['label'] = '';
  $handler->display->display_options['fields']['addtoany_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['addtoany_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['addtoany_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['addtoany_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['addtoany_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['hide_alter_empty'] = 1;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_sponsor' => 'ca_sponsor',
  );
  /* Filter criterion: Content: Dates -  start date (field_ca_sponsors_dates) */
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value']['id'] = 'field_ca_sponsors_dates_value';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value']['table'] = 'field_data_field_ca_sponsors_dates';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value']['field'] = 'field_ca_sponsors_dates_value';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value']['default_date'] = 'now';
  /* Filter criterion: Content: Dates - end date (field_ca_sponsors_dates:value2) */
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value2']['id'] = 'field_ca_sponsors_dates_value2';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value2']['table'] = 'field_data_field_ca_sponsors_dates';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value2']['field'] = 'field_ca_sponsors_dates_value2';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Dates';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-0:+3';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_ca_sponsors_dates.field_ca_sponsors_dates_value' => 'field_data_field_ca_sponsors_dates.field_ca_sponsors_dates_value',
    'field_data_field_ca_sponsors_dates.field_ca_sponsors_dates_value2' => 'field_data_field_ca_sponsors_dates.field_ca_sponsors_dates_value2',
  );
  $handler->display->display_options['pane_title'] = 'CA Sponsors: List Template One';

  /* Display: CA Sponsors: Node Template One */
  $handler = $view->new_display('panel_pane', 'CA Sponsors: Node Template One', 'ca_sponsors_node_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_sponsors_image']['id'] = 'field_ca_sponsors_image';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['table'] = 'field_data_field_ca_sponsors_image';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['field'] = 'field_ca_sponsors_image';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['settings'] = array(
    'colorbox_node_style' => 'default',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
  );
  $handler->display->display_options['fields']['field_ca_sponsors_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['field_api_classes'] = 0;
  /* Field: Content: About */
  $handler->display->display_options['fields']['field_ca_sponsors_about']['id'] = 'field_ca_sponsors_about';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['table'] = 'field_data_field_ca_sponsors_about';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['field'] = 'field_ca_sponsors_about';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['label'] = 'About Us';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['max_length'] = '600';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['html'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['settings'] = array(
    'trim_length' => '700',
  );
  $handler->display->display_options['fields']['field_ca_sponsors_about']['field_api_classes'] = 0;
  /* Field: Content: AddToAny link */
  $handler->display->display_options['fields']['addtoany_link']['id'] = 'addtoany_link';
  $handler->display->display_options['fields']['addtoany_link']['table'] = 'node';
  $handler->display->display_options['fields']['addtoany_link']['field'] = 'addtoany_link';
  $handler->display->display_options['fields']['addtoany_link']['label'] = '';
  $handler->display->display_options['fields']['addtoany_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['addtoany_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['addtoany_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['addtoany_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['addtoany_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['hide_alter_empty'] = 1;
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
  $handler->display->display_options['pane_title'] = 'CA Sponsors: Node Template One';

  /* Display: CA Sponsors: Gallery */
  $handler = $view->new_display('panel_pane', 'CA Sponsors: Gallery', 'ca_sponsors_gallery');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gallery';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Gallery */
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['id'] = 'field_ca_sponsors_image_gallery';
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['table'] = 'field_data_field_ca_sponsors_image_gallery';
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['field'] = 'field_ca_sponsors_image_gallery';
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['settings'] = array(
    'colorbox_node_style' => 'default',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
  );
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image_gallery']['field_api_classes'] = 0;
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
  $handler->display->display_options['pane_title'] = 'CA Sponsors: Gallery';

  /* Display: CA Sponsors: Administer */
  $handler = $view->new_display('panel_pane', 'CA Sponsors: Administer', 'ca_sponsors_admin');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_ca_sponsors_image' => 'field_ca_sponsors_image',
    'field_ca_sponsors_about' => 'field_ca_sponsors_about',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ca_sponsors_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ca_sponsors_about' => array(
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
  /* Field: Bulk operations: Content */
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
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
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
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['status']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['status']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Dates -  start date (field_ca_sponsors_dates) */
  $handler->display->display_options['sorts']['field_ca_sponsors_dates_value']['id'] = 'field_ca_sponsors_dates_value';
  $handler->display->display_options['sorts']['field_ca_sponsors_dates_value']['table'] = 'field_data_field_ca_sponsors_dates';
  $handler->display->display_options['sorts']['field_ca_sponsors_dates_value']['field'] = 'field_ca_sponsors_dates_value';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_sponsor' => 'ca_sponsor',
  );
  $handler->display->display_options['pane_title'] = 'CA Sponsors: Administer';

  /* Display: CA Sponsors: Archive Template One */
  $handler = $view->new_display('panel_pane', 'CA Sponsors: Archive Template One', 'ca_sponsors_archive_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ca_sponsors_image']['id'] = 'field_ca_sponsors_image';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['table'] = 'field_data_field_ca_sponsors_image';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['field'] = 'field_ca_sponsors_image';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ca_sponsors_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ca_sponsors_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_image']['field_api_classes'] = 0;
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['id'] = 'field_ca_sponsors_dates';
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['table'] = 'field_data_field_ca_sponsors_dates';
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['field'] = 'field_ca_sponsors_dates';
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['label'] = '';
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_ca_sponsors_dates']['field_api_classes'] = 0;
  /* Field: Content: About */
  $handler->display->display_options['fields']['field_ca_sponsors_about']['id'] = 'field_ca_sponsors_about';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['table'] = 'field_data_field_ca_sponsors_about';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['field'] = 'field_ca_sponsors_about';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['label'] = '';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['alter']['html'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ca_sponsors_about']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_ca_sponsors_about']['settings'] = array(
    'trim_length' => '400',
  );
  $handler->display->display_options['fields']['field_ca_sponsors_about']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More';
  /* Field: Content: AddToAny link */
  $handler->display->display_options['fields']['addtoany_link']['id'] = 'addtoany_link';
  $handler->display->display_options['fields']['addtoany_link']['table'] = 'node';
  $handler->display->display_options['fields']['addtoany_link']['field'] = 'addtoany_link';
  $handler->display->display_options['fields']['addtoany_link']['label'] = '';
  $handler->display->display_options['fields']['addtoany_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['addtoany_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['addtoany_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['addtoany_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['addtoany_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['addtoany_link']['hide_alter_empty'] = 1;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_sponsor' => 'ca_sponsor',
  );
  /* Filter criterion: Content: Dates -  start date (field_ca_sponsors_dates) */
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value']['id'] = 'field_ca_sponsors_dates_value';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value']['table'] = 'field_data_field_ca_sponsors_dates';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value']['field'] = 'field_ca_sponsors_dates_value';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value']['default_date'] = 'now';
  /* Filter criterion: Content: Dates - end date (field_ca_sponsors_dates:value2) */
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value2']['id'] = 'field_ca_sponsors_dates_value2';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value2']['table'] = 'field_data_field_ca_sponsors_dates';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value2']['field'] = 'field_ca_sponsors_dates_value2';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value2']['operator'] = '<';
  $handler->display->display_options['filters']['field_ca_sponsors_dates_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Dates';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-5:+0';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_ca_sponsors_dates.field_ca_sponsors_dates_value' => 'field_data_field_ca_sponsors_dates.field_ca_sponsors_dates_value',
    'field_data_field_ca_sponsors_dates.field_ca_sponsors_dates_value2' => 'field_data_field_ca_sponsors_dates.field_ca_sponsors_dates_value2',
  );
  $handler->display->display_options['pane_title'] = 'CA Sponsors: Archive Template One';
  $export['ca_sponsors'] = $view;

  return $export;
}
