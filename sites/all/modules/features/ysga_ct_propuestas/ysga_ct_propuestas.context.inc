<?php
/**
 * @file
 * ysga_ct_propuestas.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ysga_ct_propuestas_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'propuestas';
  $context->description = '';
  $context->tag = 'propuestas';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'propuestas' => 'propuestas',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('propuestas');
  $export['propuestas'] = $context;

  return $export;
}
