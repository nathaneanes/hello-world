<?php
/**
 * @file
 * hello_world.features.inc
 */

/**
 * Implements hook_views_api().
 */
function hello_world_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
