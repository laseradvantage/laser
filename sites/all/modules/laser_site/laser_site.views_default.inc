<?php
/**
 * @file
 * laser_site.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function laser_site_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'front_page_slides';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front Page Slides';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Front Page Slides';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_slide' => 0,
    'field_slide_text' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_slide' => 0,
    'field_slide_text' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_slide']['id'] = 'field_slide';
  $handler->display->display_options['fields']['field_slide']['table'] = 'field_data_field_slide';
  $handler->display->display_options['fields']['field_slide']['field'] = 'field_slide';
  $handler->display->display_options['fields']['field_slide']['label'] = '';
  $handler->display->display_options['fields']['field_slide']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slide']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slide']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_slide']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide']['field_api_classes'] = 0;
  /* Field: Content: Text */
  $handler->display->display_options['fields']['field_slide_text']['id'] = 'field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['table'] = 'field_data_field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['field'] = 'field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['label'] = '';
  $handler->display->display_options['fields']['field_slide_text']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_text']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_text']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_text']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slide_text']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slide_text']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slide' => 'slide',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['front_page_slides'] = $view;

  $view = new view;
  $view->name = 'front_slides';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'front_slides';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'front_slides';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_slide']['id'] = 'field_slide';
  $handler->display->display_options['fields']['field_slide']['table'] = 'field_data_field_slide';
  $handler->display->display_options['fields']['field_slide']['field'] = 'field_slide';
  $handler->display->display_options['fields']['field_slide']['label'] = '';
  $handler->display->display_options['fields']['field_slide']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slide']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slide']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_slide']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide']['field_api_classes'] = 0;
  /* Field: Content: Text */
  $handler->display->display_options['fields']['field_slide_text']['id'] = 'field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['table'] = 'field_data_field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['field'] = 'field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['label'] = '';
  $handler->display->display_options['fields']['field_slide_text']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_text']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_text']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_text']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slide_text']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_text']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slide_text']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slide' => 'slide',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['front_slides'] = $view;

  return $export;
}
