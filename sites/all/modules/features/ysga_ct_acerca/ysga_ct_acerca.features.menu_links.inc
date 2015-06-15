<?php
/**
 * @file
 * ysga_ct_acerca.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ysga_ct_acerca_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-acerca_cmo-participar:node/6
  $menu_links['menu-acerca_cmo-participar:node/6'] = array(
    'menu_name' => 'menu-acerca',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'Cómo participar',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-acerca_cmo-participar:node/6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-acerca_gobierno-abierto-en-costa-rica:node/5
  $menu_links['menu-acerca_gobierno-abierto-en-costa-rica:node/5'] = array(
    'menu_name' => 'menu-acerca',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Gobierno Abierto en Costa Rica',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-acerca_gobierno-abierto-en-costa-rica:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-acerca_la-alianza-para-un-gobierno-abierto:node/3
  $menu_links['menu-acerca_la-alianza-para-un-gobierno-abierto:node/3'] = array(
    'menu_name' => 'menu-acerca',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'La Alianza para un Gobierno Abierto',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-acerca_la-alianza-para-un-gobierno-abierto:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-acerca_los-planes-de-accin-pas:node/4
  $menu_links['menu-acerca_los-planes-de-accin-pas:node/4'] = array(
    'menu_name' => 'menu-acerca',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Los planes de acción país',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-acerca_los-planes-de-accin-pas:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-acerca_qu-es-gobierno-abierto:node/2
  $menu_links['menu-acerca_qu-es-gobierno-abierto:node/2'] = array(
    'menu_name' => 'menu-acerca',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => '¿Qué es Gobierno Abierto?',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-acerca_qu-es-gobierno-abierto:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-acerca_yo-soy-gobierno-abierto:node/1
  $menu_links['menu-acerca_yo-soy-gobierno-abierto:node/1'] = array(
    'menu_name' => 'menu-acerca',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Yo Soy Gobierno Abierto',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-acerca_yo-soy-gobierno-abierto:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Cómo participar');
  t('Gobierno Abierto en Costa Rica');
  t('La Alianza para un Gobierno Abierto');
  t('Los planes de acción país');
  t('Yo Soy Gobierno Abierto');
  t('¿Qué es Gobierno Abierto?');


  return $menu_links;
}
