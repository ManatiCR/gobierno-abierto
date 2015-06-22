<?php
/**
 * @file
 * ysga_inicio.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ysga_inicio_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-ysga_block_consultas_inicio'] = array(
    'cache' => -1,
    'css_class' => 'block-consultas-inicio',
    'custom' => 0,
    'machine_name' => 'ysga_block_consultas_inicio',
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
    'title' => 'Consultas',
    'visibility' => 0,
  );

  $export['block-ysga_block_propuestas_inicio'] = array(
    'cache' => -1,
    'css_class' => 'block-propuestas-inicio',
    'custom' => 0,
    'machine_name' => 'ysga_block_propuestas_inicio',
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
    'title' => 'Propuestas',
    'visibility' => 0,
  );

  return $export;
}
