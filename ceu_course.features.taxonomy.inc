<?php
/**
 * @file
 * ceu_course.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ceu_course_taxonomy_default_vocabularies() {
  return array(
    'academic_year' => array(
      'name' => 'Academic Year',
      'machine_name' => 'academic_year',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'status' => array(
      'name' => 'Status',
      'machine_name' => 'status',
      'description' => 'Course Status',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'stream' => array(
      'name' => 'Stream',
      'machine_name' => 'stream',
      'description' => 'Stream For Course CT',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
