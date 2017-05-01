<?php
/**
 * @file
 * ysga_ct_consulta.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ysga_ct_consulta_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ysga_ct_consulta_node_info() {
  $items = array(
    'consulta' => array(
      'name' => t('Taller'),
      'base' => 'node_content',
      'description' => t('Taller realizada en una región del país.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
