<?php
/**
 * @file
 * ysga_ct_acerca.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ysga_ct_acerca_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ysga-acerca';
  $context->description = 'Bloques sección Acerca';
  $context->tag = 'acerca';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'acerca/*' => 'acerca/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-acerca' => array(
          'module' => 'menu',
          'delta' => 'menu-acerca',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Bloques sección Acerca');
  t('acerca');
  $export['ysga-acerca'] = $context;

  return $export;
}
