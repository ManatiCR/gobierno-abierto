<?php
/**
 * @file
 * ysga_context_resultados.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ysga_context_resultados_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-resultados-consulta.
  $menus['menu-resultados-consulta'] = array(
    'menu_name' => 'menu-resultados-consulta',
    'title' => 'Resultados de la consulta',
    'description' => 'Menú sección "Resultados de la consulta".',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Menú sección "Resultados de la consulta".');
  t('Resultados de la consulta');


  return $menus;
}
