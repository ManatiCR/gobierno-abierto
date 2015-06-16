<?php
/**
 * @file
 * ysga_views_noticias.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ysga_views_noticias_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ysga_noticias';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Noticias';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Noticias';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Campo: Contenido: Imágenes */
  $handler->display->display_options['fields']['field_noticia_imagenes']['id'] = 'field_noticia_imagenes';
  $handler->display->display_options['fields']['field_noticia_imagenes']['table'] = 'field_data_field_noticia_imagenes';
  $handler->display->display_options['fields']['field_noticia_imagenes']['field'] = 'field_noticia_imagenes';
  $handler->display->display_options['fields']['field_noticia_imagenes']['label'] = '';
  $handler->display->display_options['fields']['field_noticia_imagenes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_noticia_imagenes']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_noticia_imagenes']['settings'] = array(
    'image_style' => 'noticia_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_noticia_imagenes']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_noticia_imagenes']['delta_offset'] = '0';
  /* Campo: Contenido: Fecha del envío */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'ysga_date_only';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Campo: Contenido: Categoría */
  $handler->display->display_options['fields']['field_noticia_categoria']['id'] = 'field_noticia_categoria';
  $handler->display->display_options['fields']['field_noticia_categoria']['table'] = 'field_data_field_noticia_categoria';
  $handler->display->display_options['fields']['field_noticia_categoria']['field'] = 'field_noticia_categoria';
  $handler->display->display_options['fields']['field_noticia_categoria']['label'] = '';
  $handler->display->display_options['fields']['field_noticia_categoria']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_noticia_categoria']['alter']['text'] = '<span class="noticia-info-fecha">[created]</span> <span class="noticia-info-categoria">[field_noticia_categoria]</span>';
  $handler->display->display_options['fields']['field_noticia_categoria']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_noticia_categoria']['element_class'] = 'noticia-info';
  $handler->display->display_options['fields']['field_noticia_categoria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_noticia_categoria']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_noticia_categoria']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Enlace */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = 'p';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'button button--alpha';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Leer noticia';
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
    'noticia' => 'noticia',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'noticias';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Imágenes */
  $handler->display->display_options['fields']['field_noticia_imagenes']['id'] = 'field_noticia_imagenes';
  $handler->display->display_options['fields']['field_noticia_imagenes']['table'] = 'field_data_field_noticia_imagenes';
  $handler->display->display_options['fields']['field_noticia_imagenes']['field'] = 'field_noticia_imagenes';
  $handler->display->display_options['fields']['field_noticia_imagenes']['label'] = '';
  $handler->display->display_options['fields']['field_noticia_imagenes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_noticia_imagenes']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_noticia_imagenes']['settings'] = array(
    'image_style' => 'noticia_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_noticia_imagenes']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_noticia_imagenes']['delta_offset'] = '0';
  /* Campo: Contenido: Fecha del envío */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'ysga_date_only';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Campo: Contenido: Categoría */
  $handler->display->display_options['fields']['field_noticia_categoria']['id'] = 'field_noticia_categoria';
  $handler->display->display_options['fields']['field_noticia_categoria']['table'] = 'field_data_field_noticia_categoria';
  $handler->display->display_options['fields']['field_noticia_categoria']['field'] = 'field_noticia_categoria';
  $handler->display->display_options['fields']['field_noticia_categoria']['label'] = '';
  $handler->display->display_options['fields']['field_noticia_categoria']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_noticia_categoria']['alter']['text'] = '<span class="noticia-info-fecha">[created]</span> <span class="noticia-info-categoria">[field_noticia_categoria]</span>';
  $handler->display->display_options['fields']['field_noticia_categoria']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_noticia_categoria']['element_class'] = 'noticia-info';
  $handler->display->display_options['fields']['field_noticia_categoria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_noticia_categoria']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_noticia_categoria']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Campo: Contenido: Enlace */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = 'p';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'button button--alpha';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Leer noticia';
  $translatables['ysga_noticias'] = array(
    t('Master'),
    t('Noticias'),
    t('más'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Elementos por página'),
    t('- Todos -'),
    t('Desplazamiento'),
    t('« primera'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('<span class="noticia-info-fecha">[created]</span> <span class="noticia-info-categoria">[field_noticia_categoria]</span>'),
    t('Leer noticia'),
    t('Page'),
    t('Block'),
  );
  $export['ysga_noticias'] = $view;

  return $export;
}
