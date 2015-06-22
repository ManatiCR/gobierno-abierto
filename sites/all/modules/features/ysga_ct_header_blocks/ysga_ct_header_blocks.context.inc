<?php
/**
 * @file
 * ysga_ct_header_blocks.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ysga_ct_header_blocks_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ysga-sitewide-header';
  $context->description = 'Sitewide header blocks';
  $context->tag = 'sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-social' => array(
          'module' => 'menu',
          'delta' => 'menu-social',
          'region' => 'header',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'navigation',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide header blocks');
  t('sitewide');
  $export['ysga-sitewide-header'] = $context;

  return $export;
}
