<?php
/**
 * @file
 * ysga_ct_acerca.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ysga_ct_acerca_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
