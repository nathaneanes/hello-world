<?php
/**
 * @file
 * hello_world.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function hello_world_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-hello_world_content_here'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'hello_world_content_here',
    'module' => 'block',
    'node_types' => array(
      0 => 'hello_world_article',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -9,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-hello_world_nodes-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'hello_world_nodes-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'hello_world_article',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
