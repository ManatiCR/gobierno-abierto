<?php
/**
 * @file
 * ysga_archivo.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ysga_archivo_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'archivo';
  $context->description = 'Archivo del Segundo Plan de Acción';
  $context->tag = 'archivo';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'archivo*' => 'archivo*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-archivo' => array(
          'module' => 'menu',
          'delta' => 'menu-archivo',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Archivo del Segundo Plan de Acción');
  t('archivo');
  $export['archivo'] = $context;

  return $export;
}
