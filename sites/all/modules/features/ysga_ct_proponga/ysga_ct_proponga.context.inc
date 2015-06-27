<?php
/**
 * @file
 * ysga_ct_proponga.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ysga_ct_proponga_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'proponga';
  $context->description = 'Páginas relacionadas con propuestas de los usuarios';
  $context->tag = 'proponga';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'proponga*' => 'proponga*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-ysga_noticias-block' => array(
          'module' => 'views',
          'delta' => 'ysga_noticias-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Páginas relacionadas con propuestas de los usuarios');
  t('proponga');
  $export['proponga'] = $context;

  return $export;
}
