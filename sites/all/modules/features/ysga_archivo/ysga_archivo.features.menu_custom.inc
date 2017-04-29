<?php
/**
 * @file
 * ysga_archivo.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ysga_archivo_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-archivo.
  $menus['menu-archivo'] = array(
    'menu_name' => 'menu-archivo',
    'title' => 'Archivo',
    'description' => 'Menú de la sección "Archivo".',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Archivo');
  t('Menú de la sección "Archivo".');

  return $menus;
}
