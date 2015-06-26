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
  $fe_block_boxes->body = '<h2><a href="acerca/como-participar">¡Quiero Participar!</a></h2>
';

  $export['ysga_comoayudar'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Texto Contacto';
  $fe_block_boxes->format = 'manati_texto_formato';
  $fe_block_boxes->machine_name = 'ysga_texto_contacto';
  $fe_block_boxes->body = '<p>¿Desea saber más sobre nuestra iniciativa o las formas en que puede participar? ¿Tiene alguna sugerencia sobre este proceso? Escríbanos a yosoygobiernoabierto@gmail.com o bien, a través de este formulario.</p>
<p>También estamos en Facebook (<a href="https://www.facebook.com/yosoygobiernoabierto" target="_blank">yosoygobiernoabierto</a>) y en Twitter (<a href="https://twitter.com/YoSoyGobAbierto" target="_blank">@yosoygobabierto</a>).</p>
';

  $export['ysga_texto_contacto'] = $fe_block_boxes;

  return $export;
}
