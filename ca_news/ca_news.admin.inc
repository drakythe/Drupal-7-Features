<?php

/** 
 * @file
 * CA_News admin system, which overrides the default feature settings.
 * 
 * Will allow us to make visual changes to the feature without overriding the
 * actual feature.
 */

/**
 * Defines the menu for overriding news feature settings.
 * 
 * @return
 *   Fully formed Form API array.
 */
function ca_news_settings_form() {
  $form = array();
  
  $form['ca_news_menu_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Menu Title'),
    '#default_value' => variable_get('ca_news_menu_title', 'News'),
    '#required' => TRUE,
    '#description' => t('What would you like the menu title to be?'),
  );
    $form['ca_news_panel_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Panel Title'),
    '#default_value' => variable_get('ca_news_panel_title', 'News'),
    '#required' => TRUE,
    '#description' => t('What would you like the panel title to be?'),
  );
  $form['ca_news_list_count'] = array(
    '#type' => 'textfield',
    '#title' => t('News items per page'),
    '#default_value' => variable_get('ca_news_list_count', 5),
    '#required' => TRUE,
    '#description' => t('How many News items would you like displayed per page?'),
  );
  $form['ca_news_block_count'] = array(
    '#type' => 'textfield',
    '#title' => t('News items in the block'),
    '#default_value' => variable_get('ca_news_block_count', 1),
    '#required' => TRUE,
    '#description' => t('How many News items would you like displayed in the block?'),
  );
  
  return system_settings_form($form);
}