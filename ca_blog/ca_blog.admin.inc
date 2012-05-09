<?php

/** 
 * @file
 * CA_Blog admin system, which overrides the default feature settings.
 * 
 * Will allow us to make visual changes to the feature without overriding the 
 * actual feature.
 */

/**
 * Defines the menu for overriding blog feature settings.
 * 
 * @return
 *   Fully formed Form API array.
 */
function ca_blog_settings_form() {
  $form = array();

  $form['ca_blog_menu_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Menu Title'),
    '#default_value' => variable_get('ca_blog_menu_title', 'Blog'),
    '#required' => TRUE,
    '#description' => t('What would you like the menu title to be?'),
  );
  $form['ca_blog_panel_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Menu Title'),
    '#default_value' => variable_get('ca_blog_panel_title', 'Blog'),
    '#required' => TRUE,
    '#description' => t('What would you like the panel title to be?'),
  );
  $form['ca_blog_list_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Blogs per page'),
    '#default_value' => variable_get('ca_blog_list_count', 5),
    '#required' => TRUE,
    '#description' => t('How many blogs would you like displayed per page?'),
  );
  $form['ca_blog_block_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Blogs in the block'),
    '#default_value' => variable_get('ca_blog_block_count', 1),
    '#required' => TRUE,
    '#description' => t('How many blogs would you like displayed in the block?'),
  );

  return system_settings_form($form);
}