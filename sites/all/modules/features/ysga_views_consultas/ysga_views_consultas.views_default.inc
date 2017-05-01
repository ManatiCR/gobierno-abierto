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
  $handler->display->display_options['title'] = 'Talleres';
  $handler->display->display_options['css_class'] = 'view-consultas-page';
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
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Nodo: Imágenes */
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
  /* Field: Nodo: Fecha de la consulta */
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'views-field-consulta-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Nodo: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'consulta' => 'consulta',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['label'] = 'No se han agregado talleres';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Aún no se ha agregado ningún taller.';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'consulta' => 'consulta',
  );
  /* Filter criterion: Nodo: Plan de acción (field_plan_de_accion) */
  $handler->display->display_options['filters']['field_plan_de_accion_tid']['id'] = 'field_plan_de_accion_tid';
  $handler->display->display_options['filters']['field_plan_de_accion_tid']['table'] = 'field_data_field_plan_de_accion';
  $handler->display->display_options['filters']['field_plan_de_accion_tid']['field'] = 'field_plan_de_accion_tid';
  $handler->display->display_options['filters']['field_plan_de_accion_tid']['value'] = array(
    15 => '15',
  );
  $handler->display->display_options['filters']['field_plan_de_accion_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_plan_de_accion_tid']['vocabulary'] = 'ysga_plan_vocabulary';
  $handler->display->display_options['path'] = 'talleres';

  /* Display: Archivo de consultas */
  $handler = $view->new_display('page', 'Archivo de consultas', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Consultas';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'consulta' => 'consulta',
  );
  /* Filter criterion: Nodo: Plan de acción (field_plan_de_accion) */
  $handler->display->display_options['filters']['field_plan_de_accion_tid']['id'] = 'field_plan_de_accion_tid';
  $handler->display->display_options['filters']['field_plan_de_accion_tid']['table'] = 'field_data_field_plan_de_accion';
  $handler->display->display_options['filters']['field_plan_de_accion_tid']['field'] = 'field_plan_de_accion_tid';
  $handler->display->display_options['filters']['field_plan_de_accion_tid']['value'] = array(
    14 => '14',
  );
  $handler->display->display_options['filters']['field_plan_de_accion_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_plan_de_accion_tid']['vocabulary'] = 'ysga_plan_vocabulary';
  $handler->display->display_options['path'] = 'archivo/consultas';
  $translatables['ysga_consultas'] = array(
    t('Master'),
    t('Talleres'),
    t('más'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('more'),
    t('No se han agregado talleres'),
    t('Aún no se ha agregado ningún taller.'),
    t('Archivo de consultas'),
    t('Consultas'),
  );
  $export['ysga_consultas'] = $view;

  return $export;
}
