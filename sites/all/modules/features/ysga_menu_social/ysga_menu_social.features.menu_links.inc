<?php
/**
 * @file
 * ysga_menu_social.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ysga_menu_social_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-social_contacto:contact
  $menu_links['menu-social_contacto:contact'] = array(
    'menu_name' => 'menu-social',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contacto',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'social-contact',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-social_contacto:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-social_facebook:https://www.facebook.com/yosoygobiernoabierto
  $menu_links['menu-social_facebook:https://www.facebook.com/yosoygobiernoabierto'] = array(
    'menu_name' => 'menu-social',
    'link_path' => 'https://www.facebook.com/yosoygobiernoabierto',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'social-facebook',
        ),
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-social_facebook:https://www.facebook.com/yosoygobiernoabierto',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-social_twitter:https://twitter.com/YoSoyGobAbierto
  $menu_links['menu-social_twitter:https://twitter.com/YoSoyGobAbierto'] = array(
    'menu_name' => 'menu-social',
    'link_path' => 'https://twitter.com/YoSoyGobAbierto',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'social-twitter',
        ),
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-social_twitter:https://twitter.com/YoSoyGobAbierto',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contacto');
  t('Facebook');
  t('Twitter');


  return $menu_links;
}
