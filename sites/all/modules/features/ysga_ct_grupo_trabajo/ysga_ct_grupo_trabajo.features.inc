<?php
/**
 * @file
 * ysga_ct_grupo_trabajo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ysga_ct_grupo_trabajo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ysga_ct_grupo_trabajo_node_info() {
  $items = array(
    'grupo_de_trabajo' => array(
      'name' => t('Grupo de trabajo'),
      'base' => 'node_content',
      'description' => t('Grupo de trabajo.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
