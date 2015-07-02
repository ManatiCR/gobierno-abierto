<?php
/**
 * @file
 * ysga_ct_propuesta.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ysga_ct_propuesta_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_propuesta_categoria'
  $field_bases['field_propuesta_categoria'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_propuesta_categoria',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'categorias_propuestas',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_propuesta_consulta'
  $field_bases['field_propuesta_consulta'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_propuesta_consulta',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'consulta' => 'consulta',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_votes'
  $field_bases['field_votes'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_votes',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'voting_plus_one',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'voting_plus_one',
  );

  return $field_bases;
}
