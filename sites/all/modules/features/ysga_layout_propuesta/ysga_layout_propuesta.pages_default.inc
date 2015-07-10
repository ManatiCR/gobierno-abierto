<?php
/**
 * @file
 * ysga_layout_propuesta.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ysga_layout_propuesta_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__propuesta';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Propuesta',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'propuesta',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'propuesta' => 'propuesta',
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
  $display->layout = 'two-col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '74beb1a3-a39b-49ca-8b4f-56c52755c563';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4ce9d5fa-6ba1-4c5e-a712-f44e524704a3';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_propuesta_categoria';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '4ce9d5fa-6ba1-4c5e-a712-f44e524704a3';
    $display->content['new-4ce9d5fa-6ba1-4c5e-a712-f44e524704a3'] = $pane;
    $display->panels['content'][0] = 'new-4ce9d5fa-6ba1-4c5e-a712-f44e524704a3';
    $pane = new stdClass();
    $pane->pid = 'new-706dfdcb-02c3-4b2f-95cc-494d9f8cafa4';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_votes';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'voting_plus_one',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '706dfdcb-02c3-4b2f-95cc-494d9f8cafa4';
    $display->content['new-706dfdcb-02c3-4b2f-95cc-494d9f8cafa4'] = $pane;
    $display->panels['content'][1] = 'new-706dfdcb-02c3-4b2f-95cc-494d9f8cafa4';
    $pane = new stdClass();
    $pane->pid = 'new-97e02a9f-5cf0-43ee-85ef-aecf0b2ad876';
    $pane->panel = 'content';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '97e02a9f-5cf0-43ee-85ef-aecf0b2ad876';
    $display->content['new-97e02a9f-5cf0-43ee-85ef-aecf0b2ad876'] = $pane;
    $display->panels['content'][2] = 'new-97e02a9f-5cf0-43ee-85ef-aecf0b2ad876';
    $pane = new stdClass();
    $pane->pid = 'new-a3046e33-4754-427e-95b5-4df6866b4738';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a3046e33-4754-427e-95b5-4df6866b4738';
    $display->content['new-a3046e33-4754-427e-95b5-4df6866b4738'] = $pane;
    $display->panels['content'][3] = 'new-a3046e33-4754-427e-95b5-4df6866b4738';
    $pane = new stdClass();
    $pane->pid = 'new-f6476fbe-af39-4a89-950e-2339fcbcbd16';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'disqus-disqus_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Comentarios',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'f6476fbe-af39-4a89-950e-2339fcbcbd16';
    $display->content['new-f6476fbe-af39-4a89-950e-2339fcbcbd16'] = $pane;
    $display->panels['content'][4] = 'new-f6476fbe-af39-4a89-950e-2339fcbcbd16';
    $pane = new stdClass();
    $pane->pid = 'new-dd96c575-7659-4e75-bf91-d03e5d188d42';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'ysga_propuestas-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
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
    $pane->uuid = 'dd96c575-7659-4e75-bf91-d03e5d188d42';
    $display->content['new-dd96c575-7659-4e75-bf91-d03e5d188d42'] = $pane;
    $display->panels['sidebar'][0] = 'new-dd96c575-7659-4e75-bf91-d03e5d188d42';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-97e02a9f-5cf0-43ee-85ef-aecf0b2ad876';
  $handler->conf['display'] = $display;
  $export['node_view__propuesta'] = $handler;

  return $export;
}
