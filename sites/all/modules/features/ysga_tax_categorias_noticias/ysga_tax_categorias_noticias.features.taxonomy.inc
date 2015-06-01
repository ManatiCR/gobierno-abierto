<?php
/**
 * @file
 * ysga_tax_categorias_noticias.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ysga_tax_categorias_noticias_taxonomy_default_vocabularies() {
  return array(
    'categorias_noticias' => array(
      'name' => 'Categorías para las noticias',
      'machine_name' => 'categorias_noticias',
      'description' => '',
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
