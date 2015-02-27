<?php
/**
 * @file
 * blogpost.features.inc
 */

/**
 * Implements hook_node_info().
 */
function blogpost_node_info() {
  $items = array(
    'blogpost' => array(
      'name' => t('blogpost'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
