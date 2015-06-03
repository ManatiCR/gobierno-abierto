<?php
/**
 * @file
 * ysga_tax_regiones.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ysga_tax_regiones_taxonomy_default_vocabularies() {
  return array(
    'regiones' => array(
      'name' => 'Regiones',
      'machine_name' => 'regiones',
      'description' => 'Regiones socioeconómicas de Costa Rica',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
