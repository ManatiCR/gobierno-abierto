<?php
/**
 * @file
 * ysga_archivo.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ysga_archivo_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-archivo_acerca-del-segundo-plan:node/90.
  $menu_links['menu-archivo_acerca-del-segundo-plan:node/90'] = array(
    'menu_name' => 'menu-archivo',
    'link_path' => 'node/90',
    'router_path' => 'node/%',
    'link_title' => 'Acerca del Segundo Plan',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-archivo_acerca-del-segundo-plan:node/90',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-archivo_consultas:archivo/consultas.
  $menu_links['menu-archivo_consultas:archivo/consultas'] = array(
    'menu_name' => 'menu-archivo',
    'link_path' => 'archivo/consultas',
    'router_path' => 'archivo/consultas',
    'link_title' => 'Consultas',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-archivo_consultas:archivo/consultas',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-archivo_noticias:archivo/noticias.
  $menu_links['menu-archivo_noticias:archivo/noticias'] = array(
    'menu_name' => 'menu-archivo',
    'link_path' => 'archivo/noticias',
    'router_path' => 'archivo/noticias',
    'link_title' => 'Noticias',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-archivo_noticias:archivo/noticias',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-archivo_propuestas:archivo/propuestas.
  $menu_links['menu-archivo_propuestas:archivo/propuestas'] = array(
    'menu_name' => 'menu-archivo',
    'link_path' => 'archivo/propuestas',
    'router_path' => 'archivo/propuestas',
    'link_title' => 'Propuestas',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-archivo_propuestas:archivo/propuestas',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Acerca del Segundo Plan');
  t('Consultas');
  t('Noticias');
  t('Propuestas');

  return $menu_links;
}
