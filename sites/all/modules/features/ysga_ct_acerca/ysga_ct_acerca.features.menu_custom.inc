<?php
/**
 * @file
 * ysga_ct_acerca.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ysga_ct_acerca_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-acerca.
  $menus['menu-acerca'] = array(
    'menu_name' => 'menu-acerca',
    'title' => 'Acerca',
    'description' => 'Submenú "Acerca".',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Acerca');
  t('Submenú "Acerca".');


  return $menus;
}
