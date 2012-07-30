<?php
/**
 * @file
 * ceu_course.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ceu_course_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_info|node|course|form';
  $field_group->group_name = 'group_course_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Course information',
    'weight' => '5',
    'children' => array(
      0 => 'field_instructor',
      1 => 'field_stream',
      2 => 'field_credits',
      3 => 'field_status',
      4 => 'field_year',
      5 => 'field_level',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_course_info|node|course|form'] = $field_group;

  return $export;
}
