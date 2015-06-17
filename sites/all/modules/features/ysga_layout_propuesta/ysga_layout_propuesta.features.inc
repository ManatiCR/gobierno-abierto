<?php
/**
 * @file
 * ysga_layout_propuesta.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ysga_layout_propuesta_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
