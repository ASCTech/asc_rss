<?php
/**
 * @file
 * asc_rss.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function asc_rss_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'asc_socialmedia_url_rss';
  $strongarm->value = '/rss.xml';
  $export['asc_socialmedia_url_rss'] = $strongarm;

  return $export;
}
