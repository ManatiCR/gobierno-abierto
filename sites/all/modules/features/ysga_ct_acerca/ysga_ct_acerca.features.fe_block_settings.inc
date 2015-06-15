<?php
/**
 * @file
 * ysga_ct_acerca.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ysga_ct_acerca_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-acerca'] = array(
    'cache' => -1,
    'css_class' => 'block-sidebar block-sidebar--menu-acerca',
    'custom' => 0,
    'delta' => 'menu-acerca',
    'module' => 'menu',
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
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
