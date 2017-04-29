<?php
/**
 * @file
 * ysga_archivo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ysga_archivo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
