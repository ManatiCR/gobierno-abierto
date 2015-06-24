<?php
/**
 * @file
 * ysga_layout_noticia.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ysga_layout_noticia_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__noticia';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Noticia',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'noticia',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'noticia' => 'noticia',
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
  $display->uuid = 'f72bd31b-ed40-40ab-aad4-02edea6f5641';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-880263bd-1b79-4e11-a854-afeb653de742';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '880263bd-1b79-4e11-a854-afeb653de742';
    $display->content['new-880263bd-1b79-4e11-a854-afeb653de742'] = $pane;
    $display->panels['content'][0] = 'new-880263bd-1b79-4e11-a854-afeb653de742';
    $pane = new stdClass();
    $pane->pid = 'new-16f306c3-0438-450c-b31c-48c8e3351685';
    $pane->panel = 'content';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'ysga_date_only',
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
    $pane->uuid = '16f306c3-0438-450c-b31c-48c8e3351685';
    $display->content['new-16f306c3-0438-450c-b31c-48c8e3351685'] = $pane;
    $display->panels['content'][1] = 'new-16f306c3-0438-450c-b31c-48c8e3351685';
    $pane = new stdClass();
    $pane->pid = 'new-58d4fd26-2799-479c-a9d1-49c96ef7d4b6';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '58d4fd26-2799-479c-a9d1-49c96ef7d4b6';
    $display->content['new-58d4fd26-2799-479c-a9d1-49c96ef7d4b6'] = $pane;
    $display->panels['content'][2] = 'new-58d4fd26-2799-479c-a9d1-49c96ef7d4b6';
    $pane = new stdClass();
    $pane->pid = 'new-712ad38e-c115-4d75-8f34-af36a9d5bee6';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '712ad38e-c115-4d75-8f34-af36a9d5bee6';
    $display->content['new-712ad38e-c115-4d75-8f34-af36a9d5bee6'] = $pane;
    $display->panels['content'][3] = 'new-712ad38e-c115-4d75-8f34-af36a9d5bee6';
    $pane = new stdClass();
    $pane->pid = 'new-d9a1d355-e3fd-43f5-b81d-12638ba12814';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'views-ysga_noticias-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'd9a1d355-e3fd-43f5-b81d-12638ba12814';
    $display->content['new-d9a1d355-e3fd-43f5-b81d-12638ba12814'] = $pane;
    $display->panels['sidebar'][0] = 'new-d9a1d355-e3fd-43f5-b81d-12638ba12814';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-58d4fd26-2799-479c-a9d1-49c96ef7d4b6';
  $handler->conf['display'] = $display;
  $export['node_view__noticia'] = $handler;

  return $export;
}
