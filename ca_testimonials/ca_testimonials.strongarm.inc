<?php
/**
 * @file
 * ca_testimonials.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ca_testimonials_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_ca_testimonial';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_ca_testimonial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cacheexclude_list';
  $strongarm->value = '<front>';
  $export['cacheexclude_list'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ca_testimonial';
  $strongarm->value = 0;
  $export['comment_anonymous_ca_testimonial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ca_testimonial';
  $strongarm->value = '1';
  $export['comment_ca_testimonial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ca_testimonial';
  $strongarm->value = 1;
  $export['comment_default_mode_ca_testimonial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ca_testimonial';
  $strongarm->value = '50';
  $export['comment_default_per_page_ca_testimonial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ca_testimonial';
  $strongarm->value = 1;
  $export['comment_form_location_ca_testimonial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ca_testimonial';
  $strongarm->value = '1';
  $export['comment_preview_ca_testimonial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ca_testimonial';
  $strongarm->value = 1;
  $export['comment_subject_field_ca_testimonial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ca_testimonial';
  $strongarm->value = array();
  $export['menu_options_ca_testimonial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ca_testimonial';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ca_testimonial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_testimonial';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ca_testimonial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ca_testimonial';
  $strongarm->value = '1';
  $export['node_preview_ca_testimonial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ca_testimonial';
  $strongarm->value = 0;
  $export['node_submitted_ca_testimonial'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ca_testimonial_pattern';
  $strongarm->value = 'testimonial/[node:title]';
  $export['pathauto_node_ca_testimonial_pattern'] = $strongarm;

  return $export;
}
