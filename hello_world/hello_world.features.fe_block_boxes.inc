<?php
/**
 * @file
 * hello_world.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function hello_world_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Hello World Content Here';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'hello_world_content_here';
  $fe_block_boxes->body = '<p><em>Content starts here!</em></p>';

  $export['hello_world_content_here'] = $fe_block_boxes;

  return $export;
}
