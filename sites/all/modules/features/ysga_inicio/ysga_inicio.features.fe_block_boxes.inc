<?php
/**
 * @file
 * ysga_inicio.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ysga_inicio_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Consultas Página de inicio';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'ysga_block_consultas_inicio';
  $fe_block_boxes->body = '<p>Se desarrollan consultas a nivel nacional…</p>
<p class="button"><a href="consultas/cronograma">Ver cronograma</a></p>';

  $export['ysga_block_consultas_inicio'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Propuestas página de inicio';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'ysga_block_propuestas_inicio';
  $fe_block_boxes->body = '<p>… de los cuales se generarán propuestas que podrás comentar por acá para dar tus aportes.</p>
<p class="button button--delta"><a href="propuestas">¡Conocé las propuestas!</a></p>';

  $export['ysga_block_propuestas_inicio'] = $fe_block_boxes;

  return $export;
}
