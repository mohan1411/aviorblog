<?php

/**
 * Implementation of hook_node_info().
 */
function aviorblog_node_info() {
  $items = array(
    'aviorblog' => array(
      'name' => t('Aviorblog'),
      'module' => 'features',
      'description' => t('Blog content and view'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function aviorblog_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
