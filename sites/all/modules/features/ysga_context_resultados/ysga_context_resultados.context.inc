<?php
/**
 * @file
 * ysga_context_resultados.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ysga_context_resultados_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resultados-consulta';
  $context->description = 'Sección "Resultados de la consulta"';
  $context->tag = 'resultados';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'resultados*' => 'resultados*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-resultados-consulta' => array(
          'module' => 'menu',
          'delta' => 'menu-resultados-consulta',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sección "Resultados de la consulta"');
  t('resultados');
  $export['resultados-consulta'] = $context;

  return $export;
}
