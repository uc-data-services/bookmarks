<?php

/**
 * Implementation of hook_strongarm().
 */
function bookmarks_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_default_flag_status';
  $strongarm->value = array(
    'fl_template' => TRUE,
  );
  $export['flag_default_flag_status'] = $strongarm;

  return $export;
}
