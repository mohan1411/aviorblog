<?php
/**
 * @file
 * aviorblog.features.inc
 */

/**
 * Implementation of hook_views_api().
 */
function aviorblog_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implementation of hook_node_info().
 */
function aviorblog_node_info() {
  $items = array(
    'avior_blog' => array(
      'name' => t('Avior Blog'),
      'base' => 'node_content',
      'description' => t('Contains Avior Blogs'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
