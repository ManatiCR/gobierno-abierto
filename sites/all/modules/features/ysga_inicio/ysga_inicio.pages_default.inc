<?php
/**
 * @file
 * ysga_inicio.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ysga_inicio_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ysga_page_inicio';
  $page->task = 'page';
  $page->admin_title = 'Página de inicio';
  $page->admin_description = '';
  $page->path = 'inicio';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ysga_page_inicio__panel_context_37aec595-f6d3-4ae0-b41e-96bd1ee8368c';
  $handler->task = 'page';
  $handler->subtask = 'ysga_page_inicio';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'one-two-col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'content' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd35996d5-fc34-4d97-b1aa-a0f45ca19cf4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ysga_page_inicio__panel_context_37aec595-f6d3-4ae0-b41e-96bd1ee8368c';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ba2373ed-bd58-42b5-a82b-de3e13eecb90';
  $pane->panel = 'content';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Página de inicio temporal',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p>Costa Rica es parte de la Alianza para el Gobierno Abierto, plataforma internacional integrada por 75 países que se han unido para fortalecer la relación entre los gobiernos y las personas, a través del acceso a la información, la transparencia, la participación y la colaboración. Desde el 2012, el país adquirió este compromiso, que implica la presentación e implementación de planes de acción bianuales.</p>
<p class="button button--alpha"><a href="acerca/planes-accion-pais">Conocé más sobre los planes de acción de gobierno abierto</a>
',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'inicio-temporal',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ba2373ed-bd58-42b5-a82b-de3e13eecb90';
  $display->content['new-ba2373ed-bd58-42b5-a82b-de3e13eecb90'] = $pane;
  $display->panels['content'][0] = 'new-ba2373ed-bd58-42b5-a82b-de3e13eecb90';
  $pane = new stdClass();
  $pane->pid = 'new-b5f9319e-9356-411c-a26c-32bbc5ea8e86';
  $pane->panel = 'sidebar';
  $pane->type = 'views';
  $pane->subtype = 'ysga_noticias';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b5f9319e-9356-411c-a26c-32bbc5ea8e86';
  $display->content['new-b5f9319e-9356-411c-a26c-32bbc5ea8e86'] = $pane;
  $display->panels['sidebar'][0] = 'new-b5f9319e-9356-411c-a26c-32bbc5ea8e86';
  $pane = new stdClass();
  $pane->pid = 'new-f1cf2c33-4d91-4132-ba45-82308b1d1af8';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'block-2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Consultas',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f1cf2c33-4d91-4132-ba45-82308b1d1af8';
  $display->content['new-f1cf2c33-4d91-4132-ba45-82308b1d1af8'] = $pane;
  $display->panels['top'][0] = 'new-f1cf2c33-4d91-4132-ba45-82308b1d1af8';
  $pane = new stdClass();
  $pane->pid = 'new-d7a1f1ce-16c6-4dc2-a483-d0fab0429aec';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'block-3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Propuestas',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd7a1f1ce-16c6-4dc2-a483-d0fab0429aec';
  $display->content['new-d7a1f1ce-16c6-4dc2-a483-d0fab0429aec'] = $pane;
  $display->panels['top'][1] = 'new-d7a1f1ce-16c6-4dc2-a483-d0fab0429aec';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-b5f9319e-9356-411c-a26c-32bbc5ea8e86';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ysga_page_inicio'] = $page;

  return $pages;

}
