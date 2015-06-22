<?php
/**
 * @file
 * ysga_menu_social.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ysga_menu_social_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-social.
  $menus['menu-social'] = array(
    'menu_name' => 'menu-social',
    'title' => 'Social',
    'description' => 'Enlaces a redes sociales.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Enlaces a redes sociales.');
  t('Social');


  return $menus;
}
