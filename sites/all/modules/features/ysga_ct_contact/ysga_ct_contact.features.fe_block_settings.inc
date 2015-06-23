<?php
/**
 * @file
 * ysga_ct_contact.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ysga_ct_contact_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-ysga_comoayudar'] = array(
    'cache' => -1,
    'css_class' => 'block-sidebar block-sidebar--como-ayudar',
    'custom' => 0,
    'machine_name' => 'ysga_comoayudar',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'ysga' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ysga',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-ysga_texto_contacto'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'ysga_texto_contacto',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'ysga' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ysga',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
