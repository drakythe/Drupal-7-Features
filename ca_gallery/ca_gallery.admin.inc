<?php

/** 
 * @file
 * CA_Gallery admin system, which overrides the default feature settings.
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
function ca_gallery_settings_form() {
  $form = array();
  
  $form['ca_gallery_menu_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Menu Title'),
    '#default_value' => variable_get('ca_gallery_menu_title', 'Gallery'),
    '#required' => TRUE,
    '#description' => t('What would you like the menu title to be?'),
  );
  $form['ca_gallery_panel_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Panel Title'),
    '#default_value' => variable_get('ca_gallery_panel_title', 'Gallery'),
    '#required' => TRUE,
    '#description' => t('What would you like the panel title to be?'),
  );
    $form['ca_gallery_list_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Number of galleries to display'),
    '#default_value' => variable_get('ca_gallery_list_count', 16),
    '#required' => TRUE,
    '#description' => t('How many blogs would you like displayed per page?'),
  );
  $form['ca_gallery_image_list_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Number of images to display'),
    '#default_value' => variable_get('ca_gallery_image_list_count', 16),
    '#required' => TRUE,
    '#description' => t('How many blogs would you like displayed in the block?'),
  );
  
  return system_settings_form($form);
}
