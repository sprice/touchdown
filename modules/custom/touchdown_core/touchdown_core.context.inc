<?php
/**
 * @file
 * touchdown_core.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function touchdown_core_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'touchdown';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array();
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-cto' => array(
          'module' => 'boxes',
          'delta' => 'cto',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['touchdown'] = $context;

  return $export;
}
