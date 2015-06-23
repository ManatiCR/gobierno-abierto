<?php
/**
 * @file
 * ysga_views_noticias.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ysga_views_noticias_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-ysga_noticias-block'] = array(
    'cache' => -1,
    'css_class' => 'block-sidebar block-sidebar--noticias',
    'custom' => 0,
    'delta' => 'ysga_noticias-block',
    'module' => 'views',
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
