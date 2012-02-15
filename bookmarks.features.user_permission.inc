<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function bookmarks_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer flags
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  return $permissions;
}
