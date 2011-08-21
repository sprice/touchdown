<?php
/**
 * @file
 * touchdown_core.box.inc
 */

/**
 * Implementation of hook_default_box().
 */
function touchdown_core_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'cto';
  $box->plugin_key = 'simple';
  $box->title = 'Welcome to Touchdown';
  $box->description = 'Call to action';
  $box->options = array(
    'body' => array(
      'value' => 'The landing page Drupal distribution.',
      'format' => 'plain_text',
    ),
  );
  $export['cto'] = $box;

  return $export;
}
