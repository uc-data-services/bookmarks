<?php

/**
 * Implementation of hook_flag_default_flags().
 */
function bookmarks_flag_default_flags() {
  $flags = array();
  // Exported flag: "Bookmarks".
  $flags['bookmarks'] = array(
    'content_type' => 'node',
    'title' => 'Bookmarks',
    'global' => '0',
    'types' => array(
      '0' => 'data_definition',
      '1' => 'diagram',
      '2' => 'how_to',
      '3' => 'macros',
      '4' => 'procedures',
    ),
    'flag_short' => 'Bookmark this',
    'flag_long' => 'Add this post to your bookmarks',
    'flag_message' => 'This post has been added to your bookmarks',
    'unflag_short' => 'Unbookmark this',
    'unflag_long' => 'Remove this post from your bookmarks',
    'unflag_message' => 'This post has been removed from your bookmarks',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        '0' => 2,
        '1' => 4,
      ),
      'unflag' => array(
        '0' => 2,
        '1' => 4,
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 1,
    'access_author' => '',
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'bookmarks',
    'locked' => array(
      '0' => 'name',
    ),
  );
  return $flags;
}
