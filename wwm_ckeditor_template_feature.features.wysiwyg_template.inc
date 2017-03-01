<?php
/**
 * @file
 * wwm_ckeditor_template_feature.features.wysiwyg_template.inc
 */

/**
 * Implements hook_wysiwyg_template_default_templates().
 */
function wwm_ckeditor_template_feature_wysiwyg_template_default_templates() {
  $templates = array();
  $templates['25_75'] = array(
    'title' => '25/75 Two Columns',
    'description' => '25% / 75% two column layout',
    'weight' => 2,
    'fid' => 0,
    'body' => '<p>&nbsp;</p>
<div class="row two-col-left">
<div class="col-md-3 col-sidebar"><img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p><h1>Left Column</h1></div>
<div class="col-md-9 col-main"><img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p><h1>Main Column</h1></div>
</div>
<p>&nbsp;</p>',
    'format' => 6,
    'name' => '25_75',
    'content_types' => array(),
  );
  $templates['3_columns'] = array(
    'title' => '3 Columns',
    'description' => 'Three column layout.',
    'weight' => 5,
    'fid' => 0,
    'body' => '<p></p>
<div class="row three-col">
<div class="col-md-4 col-1"><img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p><h1>First Column</h1></div>
<div class="col-md-4 col-2"><img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p><h1>Second Column</h1></div>
<div class="col-md-4 col-3"><img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p><h1>Third Column</h1></div>
</div>
<p></p>',
    'format' => 6,
    'name' => '3_columns',
    'content_types' => array(),
  );
  $templates['4_columns'] = array(
    'title' => '4 Columns',
    'description' => '4 Column Layout',
    'weight' => 6,
    'fid' => 0,
    'body' => '<p></p>
<div class="row four-col">
<div class="col col-md-3 col-1"><img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p><h1>Column 1</h1></div>
<div class="col col-md-3 col-2"><img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p><h1>Column 2</h1></div>
<div class="col col-md-3 col-3"><img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p><h1>Column 3</h1></div>
<div class="col col-md-3 col-4"><img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p><h1>Column 4</h1></div>
</div>
<p></p>',
    'format' => 6,
    'name' => '4_columns',
    'content_types' => array(),
  );
  $templates['50_50'] = array(
    'title' => '50/50 Two Columns',
    'description' => '50% / 50% two column layout.',
    'weight' => 3,
    'fid' => 0,
    'body' => '<p></p>
<div class="row two-col">
<div class="col-md-6 col-1"><img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p><h1>First Column</h1></div>
<div class="col-md-6 col-2"><img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p><h1>Second Column</h1></div>
</div>
<p></p>',
    'format' => 6,
    'name' => '50_50',
    'content_types' => array(),
  );
  $templates['75_25'] = array(
    'title' => '75/25 Two Columns',
    'description' => '75% / 25% two column layout.',
    'weight' => 4,
    'fid' => 0,
    'body' => '<p></p>
<div class="row two-col-right">
<div class="col-md-9 col-main"><img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p><h1>Main Column</h1></div>
<div class="col-md-3 col-sidebar"><img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p><h1>Right Column</h1></div>
</div>
<p></p>',
    'format' => 6,
    'name' => '75_25',
    'content_types' => array(),
  );
  $templates['block_with_title'] = array(
    'title' => 'Block with Title',
    'description' => 'Layout to provide a block of text with a Title above it',
    'weight' => 0,
    'fid' => 0,
    'body' => '<div class="row box">
<div class="box-title">Title</h2></div>
<div class="box-content">Content</div>
</div>',
    'format' => 1,
    'name' => 'block_with_title',
    'content_types' => array(),
  );
  $templates['call_to_action_blue'] = array(
    'title' => 'Button Link',
    'description' => 'Create a Link that Looks Like a Button',
    'weight' => 7,
    'fid' => 0,
    'body' => '<a href="#" class="button primary call-to-action">"Insert Button Text Here"</a> <p><font color="#ff0000">Instructions: Change “Insert Button Text Here” but don’t remove the quotes until after you change the text.  Then select the link text and change the link with LinkIt from the Editor and remove these instructions</font></p>',
    'format' => 6,
    'name' => 'call_to_action_blue',
    'content_types' => array(),
  );
  $templates['quote_block'] = array(
    'title' => 'Quote Block',
    'description' => 'Layout to provide a block of text styled as a quote with an attribution below it',
    'weight' => 1,
    'fid' => 0,
    'body' => '<div class="row quotebox">
<div class="row quote">Quote</div>
<div class="row byline">&mdash; Person</div>
</div>',
    'format' => 1,
    'name' => 'quote_block',
    'content_types' => array(),
  );
  return $templates;
}
