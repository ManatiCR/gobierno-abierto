<?php
/**
 * @file
 * ysga_ct_contact.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ysga_ct_contact_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = '¿Cómo ayudar?';
  $fe_block_boxes->format = 'manati_texto_formato';
  $fe_block_boxes->machine_name = 'ysga_comoayudar';
  $fe_block_boxes->body = '<h2><a href="acerca/como-participar">¿Cómo ayudar?</a></h2>';

  $export['ysga_comoayudar'] = $fe_block_boxes;

  return $export;
}
