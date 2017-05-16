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
  $fe_block_boxes->body = '<p>Gobierno abierto no es un proyecto con fecha de finalización, es un proceso que busca un cambio cultural en las instituciones y las personas, abriendo espacios para buscar juntas, opciones innovadoras para resolver los problemas que nos afectan.</p>
<p class="button button--delta"><a href="acerca/que-es-gobierno-abierto">¿Querés conocer más?</a></p>';

  $export['ysga_block_propuestas_inicio'] = $fe_block_boxes;

  return $export;
}
