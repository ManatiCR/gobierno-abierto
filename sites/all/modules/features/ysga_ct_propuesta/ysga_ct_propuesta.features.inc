<?php
/**
 * @file
 * ysga_ct_propuesta.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ysga_ct_propuesta_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ysga_ct_propuesta_node_info() {
  $items = array(
    'propuesta' => array(
      'name' => t('Propuesta'),
      'base' => 'node_content',
      'description' => t('Propuesta para el Plan de acción de Gobierno Abierto.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
