<?php
/**
 * @file
 * ysga_ct_propuestas.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ysga_ct_propuestas_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Propuestas Proponga CTA';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'propuestas_proponga';
  $fe_block_boxes->body = '<p>¿No está tu idea?</p>
<p class="button"><a href="proponga">Proponela</a></p>';

  $export['propuestas_proponga'] = $fe_block_boxes;

  return $export;
}
