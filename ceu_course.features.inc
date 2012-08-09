<?php
/**
 * @file
 * ceu_course.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ceu_course_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ceu_course_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ceu_course_node_info() {
  $items = array(
    'course' => array(
      'name' => t('Course'),
      'base' => 'node_content',
      'description' => t('To describe an education course which can be linked to teachers, academic units '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
