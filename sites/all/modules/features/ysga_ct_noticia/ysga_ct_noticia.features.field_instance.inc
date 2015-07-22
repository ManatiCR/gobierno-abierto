<?php
/**
 * @file
 * ysga_ct_noticia.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ysga_ct_noticia_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-noticia-body'
  $field_instances['node-noticia-body'] = array(
    'bundle' => 'noticia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-noticia-field_noticia_adjuntos'
  $field_instances['node-noticia-field_noticia_adjuntos'] = array(
    'bundle' => 'noticia',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_noticia_adjuntos',
    'label' => 'Archivos adjuntos',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'adjuntos',
      'file_extensions' => 'pdf doc docx xls xlsx ppt pptx',
      'max_filesize' => '',
      'user_register_form' => FALSE,
      'wysiwyg_fields' => array(
        'settings' => array(
          'advanced' => array(
            'delete' => 1,
            'hide' => 1,
          ),
          'formatters' => array(),
          'icon' => '6f7621a02161e347e66d99d8ace540a3',
          'label' => 'Archivos adjuntos',
        ),
        'status' => 0,
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-noticia-field_noticia_categoria'
  $field_instances['node-noticia-field_noticia_categoria'] = array(
    'bundle' => 'noticia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_noticia_categoria',
    'label' => 'Categoría',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
      'wysiwyg_fields' => array(
        'settings' => array(
          'advanced' => array(
            'delete' => 1,
            'hide' => 1,
          ),
          'formatters' => array(),
          'icon' => '6f7621a02161e347e66d99d8ace540a3',
          'label' => 'Categoría',
        ),
        'status' => 0,
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-noticia-field_noticia_imagenes'
  $field_instances['node-noticia-field_noticia_imagenes'] = array(
    'bundle' => 'noticia',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_noticia_imagenes',
    'label' => 'Imágenes',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'imagenes/noticias',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
      'wysiwyg_fields' => array(
        'settings' => array(
          'advanced' => array(
            'delete' => 1,
            'hide' => 1,
          ),
          'formatters' => array(
            'image' => 'image',
          ),
          'icon' => 'd50522754f0bc7cc44d2f5231a467fe8',
          'label' => 'Imágenes',
        ),
        'status' => 1,
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Archivos adjuntos');
  t('Body');
  t('Categoría');
  t('Imágenes');

  return $field_instances;
}
