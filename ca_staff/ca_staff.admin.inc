<?php

/** 
 * @file
 * CA_Staff admin system, which overrides the default feature settings.
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
function ca_staff_settings_form() {
  $form = array();
  
  $form['ca_staff_menu_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Menu Title'),
    '#default_value' => variable_get('ca_staff_menu_title', 'Staff'),
    '#required' => TRUE,
    '#description' => t('What would you like the menu title to be?'),
  );
  $form['ca_staff_panel_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Panel Title'),
    '#default_value' => variable_get('ca_staff_panel_title', 'Staff'),
    '#required' => TRUE,
    '#description' => t('What would you like the panel title to be?'),
  );
  $form['ca_staff_grid_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Staff members per page'),
    '#default_value' => variable_get('ca_staff_grid_count', 16),
    '#required' => TRUE,
    '#description' => t('How many staff members would you like displayed per page? (must be in increments of 4)'),
  );
  
  return system_settings_form($form);
}

