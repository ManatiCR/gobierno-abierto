<?php
/**
 * @file
 * ysga_ct_contact.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ysga_ct_contact_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contacto';
  $context->description = 'Bloques del formulario de contacto';
  $context->tag = 'contacto';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact' => 'contact',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'content',
          'weight' => '-10',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-ysga_noticias-block' => array(
          'module' => 'views',
          'delta' => 'ysga_noticias-block',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Bloques del formulario de contacto');
  t('contacto');
  $export['contacto'] = $context;

  return $export;
}
