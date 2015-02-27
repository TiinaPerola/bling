<?php
/**
 * @file
 * ruokalista_feature.features.inc
 */

/**
 * Implements hook_views_api().
 */
function ruokalista_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ruokalista_feature_node_info() {
  $items = array(
    'ruokalista' => array(
      'name' => t('Ruokalista'),
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
