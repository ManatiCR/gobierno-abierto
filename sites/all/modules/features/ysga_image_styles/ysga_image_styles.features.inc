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

  // Exported image style: noticia_inline.
  $styles['noticia_inline'] = array(
    'label' => 'Noticia Inline',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 635,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

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

  // Exported image style: slideshow_consultas.
  $styles['slideshow_consultas'] = array(
    'label' => 'Slideshow consultas',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
