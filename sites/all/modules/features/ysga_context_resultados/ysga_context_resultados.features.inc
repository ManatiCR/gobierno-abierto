<?php
/**
 * @file
 * ysga_context_resultados.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ysga_context_resultados_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
