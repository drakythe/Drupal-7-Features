<?php

/** 
 * @file
 * CA_Testimonials admin system, which overrides the default feature settings.
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
function ca_testimonials_settings_form() {
  $form = array();
  
  $form['ca_testimonials_menu_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Menu Title'),
    '#default_value' => variable_get('ca_testimonials_menu_title', 'Testimonials'),
    '#required' => TRUE,
    '#description' => t('What would you like the menu title to be?'),
  );
  $form['ca_testimonials_panel_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Panel Title'),
    '#default_value' => variable_get('ca_testimonials_panel_title', 'Testimonials'),
    '#required' => TRUE,
    '#description' => t('What would you like the panel title to be?'),
  );
  $form['ca_testimonials_list_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Testimonials per page'),
    '#default_value' => variable_get('ca_testimonials_list_count', 5),
    '#required' => TRUE,
    '#description' => t('How many testimonials would you like displayed per page?'),
  );
  $form['ca_testimonials_block_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Testimonials in the block'),
    '#default_value' => variable_get('ca_testimonials_block_count', 1),
    '#required' => TRUE,
    '#description' => t('How many testimonials would you like displayed in the block?'),
  );
  
  return system_settings_form($form);
}