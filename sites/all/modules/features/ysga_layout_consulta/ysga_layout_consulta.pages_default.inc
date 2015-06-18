<?php
/**
 * @file
 * ysga_layout_consulta.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ysga_layout_consulta_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__consulta';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Consulta',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'consulta',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'consulta' => 'consulta',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->uuid = '50e4ee17-9992-4151-b8b7-46486058988e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8d715786-eaee-48fc-b581-26d4407bb310';
    $pane->panel = 'content';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
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
    $pane->uuid = '8d715786-eaee-48fc-b581-26d4407bb310';
    $display->content['new-8d715786-eaee-48fc-b581-26d4407bb310'] = $pane;
    $display->panels['content'][0] = 'new-8d715786-eaee-48fc-b581-26d4407bb310';
    $pane = new stdClass();
    $pane->pid = 'new-974f3e4d-f6a2-4c93-99b5-3673b6de6c84';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'ysga_propuestas-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'view-propuestas-consulta',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '974f3e4d-f6a2-4c93-99b5-3673b6de6c84';
    $display->content['new-974f3e4d-f6a2-4c93-99b5-3673b6de6c84'] = $pane;
    $display->panels['sidebar'][0] = 'new-974f3e4d-f6a2-4c93-99b5-3673b6de6c84';
    $pane = new stdClass();
    $pane->pid = 'new-38d0cba8-621e-4690-b6bd-a35b7c71a0c9';
    $pane->panel = 'top';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => 'page-title',
      'class' => 'title',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
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
    $pane->uuid = '38d0cba8-621e-4690-b6bd-a35b7c71a0c9';
    $display->content['new-38d0cba8-621e-4690-b6bd-a35b7c71a0c9'] = $pane;
    $display->panels['top'][0] = 'new-38d0cba8-621e-4690-b6bd-a35b7c71a0c9';
    $pane = new stdClass();
    $pane->pid = 'new-7fd54a52-ec9b-4671-82c3-52ca889e559a';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_consulta_fecha';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'ysga_date_only',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
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
    $pane->uuid = '7fd54a52-ec9b-4671-82c3-52ca889e559a';
    $display->content['new-7fd54a52-ec9b-4671-82c3-52ca889e559a'] = $pane;
    $display->panels['top'][1] = 'new-7fd54a52-ec9b-4671-82c3-52ca889e559a';
    $pane = new stdClass();
    $pane->pid = 'new-e54eeb3c-5ac6-40a4-b6c6-b1b306bccd2f';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_consulta_imagenes';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'colorbox',
      'delta_limit' => '1',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
        'colorbox_node_style' => 'slideshow_consultas',
        'colorbox_node_style_first' => '',
        'colorbox_image_style' => '',
        'colorbox_gallery' => 'post',
        'colorbox_gallery_custom' => '',
        'colorbox_caption' => 'title',
        'colorbox_caption_custom' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e54eeb3c-5ac6-40a4-b6c6-b1b306bccd2f';
    $display->content['new-e54eeb3c-5ac6-40a4-b6c6-b1b306bccd2f'] = $pane;
    $display->panels['top'][2] = 'new-e54eeb3c-5ac6-40a4-b6c6-b1b306bccd2f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-8d715786-eaee-48fc-b581-26d4407bb310';
  $handler->conf['display'] = $display;
  $export['node_view__consulta'] = $handler;

  return $export;
}
