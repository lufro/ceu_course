<?php
/**
 * @file
 * ceu_course.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ceu_course_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'course';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Course';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Level (field_level) */
  $handler->display->display_options['arguments']['field_level_value']['id'] = 'field_level_value';
  $handler->display->display_options['arguments']['field_level_value']['table'] = 'field_data_field_level';
  $handler->display->display_options['arguments']['field_level_value']['field'] = 'field_level_value';
  $handler->display->display_options['arguments']['field_level_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_level_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_level_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_level_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_level_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_level_value']['summary']['human'] = 0;
  $handler->display->display_options['arguments']['field_level_value']['break_phrase'] = 1;
  $handler->display->display_options['arguments']['field_level_value']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
  );

  /* Display: Course List (pane) */
  $handler = $view->new_display('panel_pane', 'Course List (pane)', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_instructor' => 'field_instructor',
    'field_credits' => 'field_credits',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_instructor' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_credits' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Credits */
  $handler->display->display_options['fields']['field_credits']['id'] = 'field_credits';
  $handler->display->display_options['fields']['field_credits']['table'] = 'field_data_field_credits';
  $handler->display->display_options['fields']['field_credits']['field'] = 'field_credits';
  $handler->display->display_options['fields']['field_credits']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_credits']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_credits']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_credits']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_credits']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_credits']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_credits']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_credits']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_credits']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_credits']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_credits']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_credits']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_credits']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_credits']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_credits']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_credits']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_credits']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_credits']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_credits']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_credits']['field_api_classes'] = 0;
  /* Field: Content: Instructor */
  $handler->display->display_options['fields']['field_instructor']['id'] = 'field_instructor';
  $handler->display->display_options['fields']['field_instructor']['table'] = 'field_data_field_instructor';
  $handler->display->display_options['fields']['field_instructor']['field'] = 'field_instructor';
  $handler->display->display_options['fields']['field_instructor']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_instructor']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_instructor']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_instructor']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_instructor']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_instructor']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_instructor']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_instructor']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_instructor']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_instructor']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_instructor']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_instructor']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_instructor']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_instructor']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_instructor']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_instructor']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_instructor']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_instructor']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_instructor']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_instructor']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_instructor']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_instructor']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_instructor']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_instructor']['field_api_classes'] = 0;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_level_value' => array(
      'type' => 'user',
      'context' => 'entity:fieldable_panels_pane.vuuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Level',
    ),
  );
  $export['course'] = $view;

  return $export;
}
