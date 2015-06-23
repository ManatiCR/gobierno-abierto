<?php
/**
 * @file
 * ysga_views_propuestas.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ysga_views_propuestas_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ysga_propuestas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Propuestas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Propuestas de la consulta';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = '';
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
  /* Encabezado: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Encabezado';
  $handler->display->display_options['header']['area']['content'] = '<div class="header-propuestas">Propuesta</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Pie de página: Global: Área de texto */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Enlace hacia página de propuestas';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<a href="propuestas">Ver todas las propuestas ></a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Comportamiento si no hay resultados: Global: Texto sin filtrar */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['label'] = 'Sin resultados';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No se han agregado propuestas';
  /* Relación: Referencia a entidades: Entidad referenciada */
  $handler->display->display_options['relationships']['field_propuesta_consulta_target_id']['id'] = 'field_propuesta_consulta_target_id';
  $handler->display->display_options['relationships']['field_propuesta_consulta_target_id']['table'] = 'field_data_field_propuesta_consulta';
  $handler->display->display_options['relationships']['field_propuesta_consulta_target_id']['field'] = 'field_propuesta_consulta_target_id';
  $handler->display->display_options['relationships']['field_propuesta_consulta_target_id']['label'] = 'Consulta';
  $handler->display->display_options['relationships']['field_propuesta_consulta_target_id']['required'] = TRUE;
  /* Relación: Referencia a entidades: Referenciando entidad */
  $handler->display->display_options['relationships']['reverse_field_propuesta_consulta_node']['id'] = 'reverse_field_propuesta_consulta_node';
  $handler->display->display_options['relationships']['reverse_field_propuesta_consulta_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_propuesta_consulta_node']['field'] = 'reverse_field_propuesta_consulta_node';
  $handler->display->display_options['relationships']['reverse_field_propuesta_consulta_node']['relationship'] = 'field_propuesta_consulta_target_id';
  $handler->display->display_options['relationships']['reverse_field_propuesta_consulta_node']['label'] = 'Propuesta';
  $handler->display->display_options['relationships']['reverse_field_propuesta_consulta_node']['required'] = TRUE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_propuesta_consulta_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Criterio de ordenación: Contenido: Fecha del envío */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtro contextual: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'propuesta' => 'propuesta',
  );
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
    'propuesta' => 'propuesta',
  );

  /* Display: Propuestas (página de propuesta) */
  $handler = $view->new_display('panel_pane', 'Propuestas (página de propuesta)', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Propuestas (Página de propuesta)';
  $handler->display->display_options['pane_category']['name'] = 'Paneles de vista';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Contenido: Nid',
    ),
  );

  /* Display: Propuestas (página de consulta) */
  $handler = $view->new_display('panel_pane', 'Propuestas (página de consulta)', 'panel_pane_2');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = '';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Contenido: Consulta (field_propuesta_consulta) */
  $handler->display->display_options['arguments']['field_propuesta_consulta_target_id']['id'] = 'field_propuesta_consulta_target_id';
  $handler->display->display_options['arguments']['field_propuesta_consulta_target_id']['table'] = 'field_data_field_propuesta_consulta';
  $handler->display->display_options['arguments']['field_propuesta_consulta_target_id']['field'] = 'field_propuesta_consulta_target_id';
  $handler->display->display_options['arguments']['field_propuesta_consulta_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_propuesta_consulta_target_id']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['field_propuesta_consulta_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_propuesta_consulta_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_propuesta_consulta_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_propuesta_consulta_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_propuesta_consulta_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_propuesta_consulta_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_propuesta_consulta_target_id']['validate_options']['types'] = array(
    'consulta' => 'consulta',
  );
  $handler->display->display_options['pane_title'] = 'Propuestas (Página de consulta)';
  $handler->display->display_options['pane_category']['name'] = 'Paneles de vista';
  $handler->display->display_options['argument_input'] = array(
    'field_propuesta_consulta_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:node.field-propuesta-consulta',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Consulta',
    ),
  );

  /* Display: Página */
  $handler = $view->new_display('page', 'Página', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Propuestas';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-propuestas-page';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_propuesta_categoria',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Categoría */
  $handler->display->display_options['fields']['field_propuesta_categoria']['id'] = 'field_propuesta_categoria';
  $handler->display->display_options['fields']['field_propuesta_categoria']['table'] = 'field_data_field_propuesta_categoria';
  $handler->display->display_options['fields']['field_propuesta_categoria']['field'] = 'field_propuesta_categoria';
  $handler->display->display_options['fields']['field_propuesta_categoria']['label'] = '';
  $handler->display->display_options['fields']['field_propuesta_categoria']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_propuesta_categoria']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_propuesta_categoria']['element_class'] = 'propuestas-categoria';
  $handler->display->display_options['fields']['field_propuesta_categoria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_propuesta_categoria']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_propuesta_categoria']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'propuesta-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'propuesta-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio de ordenación: Contenido: Categoría (field_propuesta_categoria) */
  $handler->display->display_options['sorts']['field_propuesta_categoria_tid']['id'] = 'field_propuesta_categoria_tid';
  $handler->display->display_options['sorts']['field_propuesta_categoria_tid']['table'] = 'field_data_field_propuesta_categoria';
  $handler->display->display_options['sorts']['field_propuesta_categoria_tid']['field'] = 'field_propuesta_categoria_tid';
  /* Criterio de ordenación: Contenido: Fecha del envío */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'propuestas';
  $translatables['ysga_propuestas'] = array(
    t('Master'),
    t('Propuestas de la consulta'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Encabezado'),
    t('<div class="header-propuestas">Propuesta</div>'),
    t('Enlace hacia página de propuestas'),
    t('<a href="propuestas">Ver todas las propuestas ></a>'),
    t('Sin resultados'),
    t('No se han agregado propuestas'),
    t('Consulta'),
    t('Propuesta'),
    t('Todo(s)'),
    t('Propuestas (página de propuesta)'),
    t('más'),
    t('Propuestas (Página de propuesta)'),
    t('Paneles de vista'),
    t('Propuestas (página de consulta)'),
    t('Propuestas (Página de consulta)'),
    t('Página'),
    t('Propuestas'),
  );
  $export['ysga_propuestas'] = $view;

  return $export;
}
