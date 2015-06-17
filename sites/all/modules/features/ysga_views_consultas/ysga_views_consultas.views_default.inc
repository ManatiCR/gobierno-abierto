<?php
/**
 * @file
 * ysga_views_consultas.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ysga_views_consultas_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ysga_consultas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Consultas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Consultas';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Campo: Contenido: Imágenes */
  $handler->display->display_options['fields']['field_consulta_imagenes']['id'] = 'field_consulta_imagenes';
  $handler->display->display_options['fields']['field_consulta_imagenes']['table'] = 'field_data_field_consulta_imagenes';
  $handler->display->display_options['fields']['field_consulta_imagenes']['field'] = 'field_consulta_imagenes';
  $handler->display->display_options['fields']['field_consulta_imagenes']['label'] = '';
  $handler->display->display_options['fields']['field_consulta_imagenes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_consulta_imagenes']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_consulta_imagenes']['settings'] = array(
    'image_style' => 'consulta_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_consulta_imagenes']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_consulta_imagenes']['delta_offset'] = '0';
  /* Campo: Contenido: Fecha de la consulta */
  $handler->display->display_options['fields']['field_consulta_fecha']['id'] = 'field_consulta_fecha';
  $handler->display->display_options['fields']['field_consulta_fecha']['table'] = 'field_data_field_consulta_fecha';
  $handler->display->display_options['fields']['field_consulta_fecha']['field'] = 'field_consulta_fecha';
  $handler->display->display_options['fields']['field_consulta_fecha']['label'] = '';
  $handler->display->display_options['fields']['field_consulta_fecha']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_consulta_fecha']['settings'] = array(
    'format_type' => 'ysga_date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Criterio de ordenación: Contenido: Fecha del envío */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criterios de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'consulta' => 'consulta',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'consultas';
  $translatables['ysga_consultas'] = array(
    t('Master'),
    t('Consultas'),
    t('más'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Page'),
  );
  $export['ysga_consultas'] = $view;

  return $export;
}
