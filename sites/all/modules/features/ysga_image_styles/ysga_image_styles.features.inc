<?php
/**
 * @file
 * ysga_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function ysga_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: noticia_thumbnail.
  $styles['noticia_thumbnail'] = array(
    'label' => 'Noticia Thumbnail',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 85,
          'height' => 60,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
