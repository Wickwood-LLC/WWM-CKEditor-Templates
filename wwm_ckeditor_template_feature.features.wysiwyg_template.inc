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
    'weight' => 0,
    'fid' => 0,
    'body' => '<p>&nbsp;</p>
<div class="ckeditor-template-row two-ckeditor-template-col-left">
<div class="ckeditor-template-col-md-3 ckeditor-template-col-sidebar"><img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p><h1>Left Column</h1></div>
<div class="ckeditor-template-col-md-9 ckeditor-template-col-main"><img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p><h1>Main Column</h1></div>
</div>
<p>&nbsp;</p>',
    'format' => 6,
    'name' => '25_75',
    'content_types' => array(),
  );
  $templates['3_columns'] = array(
    'title' => '3 Columns',
    'description' => 'Three column layout.',
    'weight' => 0,
    'fid' => 0,
    'body' => '<p></p>
<div class="ckeditor-template-row three-col">
<div class="ckeditor-template-col-md-4 ckeditor-template-col-1"><img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p><h1>First Column</h1></div>
<div class="ckeditor-template-col-md-4 ckeditor-template-col-2"><img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p><h1>Second Column</h1></div>
<div class="ckeditor-template-col-md-4 ckeditor-template-col-3"><img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p><h1>Third Column</h1></div>
</div>
<p></p>',
    'format' => 6,
    'name' => '3_columns',
    'content_types' => array(),
  );
  $templates['4_columns'] = array(
    'title' => '4 Columns',
    'description' => '4 Column Layout',
    'weight' => 0,
    'fid' => 0,
    'body' => '<p></p>
<div class="ckeditor-template-row four-col">
<div class="col ckeditor-template-col-md-3 ckeditor-template-col-1"><img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p><h1>Column 1</h1></div>
<div class="col ckeditor-template-col-md-3 ckeditor-template-col-2"><img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p><h1>Column 2</h1></div>
<div class="col ckeditor-template-col-md-3 ckeditor-template-col-3"><img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p><h1>Column 3</h1></div>
<div class="col ckeditor-template-col-md-3 ckeditor-template-col-4"><img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p><h1>Column 4</h1></div>
</div>
<p></p>',
    'format' => 6,
    'name' => '4_columns',
    'content_types' => array(),
  );
  $templates['50_50'] = array(
    'title' => '50/50 Two Columns',
    'description' => '50% / 50% two column layout.',
    'weight' => 0,
    'fid' => 0,
    'body' => '<p></p>
<div class="ckeditor-template-row two-col">
<div class="ckeditor-template-col-md-6 ckeditor-template-col-1"><img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p><h1>First Column</h1></div>
<div class="ckeditor-template-col-md-6 ckeditor-template-col-2"><img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p><h1>Second Column</h1></div>
</div>
<p></p>',
    'format' => 6,
    'name' => '50_50',
    'content_types' => array(),
  );
  $templates['75_25'] = array(
    'title' => '75/25 Two Columns',
    'description' => '75% / 25% two column layout.',
    'weight' => 0,
    'fid' => 0,
    'body' => '<p></p>
<div class="ckeditor-template-row two-ckeditor-template-col-right">
<div class="ckeditor-template-col-md-9 ckeditor-template-col-main"><img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p><h1>Main Column</h1></div>
<div class="ckeditor-template-col-md-3 ckeditor-template-col-sidebar"><img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p><h1>Right Column</h1></div>
</div>
<p></p>',
    'format' => 6,
    'name' => '75_25',
    'content_types' => array(),
  );
  $templates['call_to_action_blue'] = array(
    'title' => 'Call to Action Blue',
    'description' => 'Call to Action Button Blue',
    'weight' => 0,
    'fid' => 0,
    'body' => '<a href="#" class="button primary">Learn More</a>',
    'format' => 6,
    'name' => 'call_to_action_blue',
    'content_types' => array(),
  );
  $templates['callout_list'] = array(
    'title' => 'Callout List',
    'description' => 'A list of important links',
    'weight' => 0,
    'fid' => 0,
    'body' => '<ul class="callout-list">
<li><a href="http://www.google.com">Link Example</a></li>
<li><a href="http://www.google.com">Link Example</a></li>
<li><a href="http://www.google.com">Link Example</a></li>
<li><a href="http://www.google.com">Link Example</a></li>
<li><a href="http://www.google.com">Link Example</a></li>
<li><a href="http://www.google.com">Link Example</a></li>
<li><a href="http://www.google.com">Link Example</a></li>
</ul>',
    'format' => 6,
    'name' => 'callout_list',
    'content_types' => array(),
  );
  $templates['horizontal_line'] = array(
    'title' => 'Horizontal Line',
    'description' => 'Horizontal Line',
    'weight' => 0,
    'fid' => 0,
    'body' => '<hr/>',
    'format' => 6,
    'name' => 'horizontal_line',
    'content_types' => array(),
  );
  $templates['zurb_clearing'] = array(
    'title' => 'Zurb Clearing',
    'description' => 'Add images which can be enlarged on the site.',
    'weight' => 0,
    'fid' => 0,
    'body' => '<div><ul class="clearing-thumbs" data-clearing=""><li><a href="http://placehold.it/1500x1000"><img src="http://placehold.it/500x350"></a><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p></li></ul><p>&nbsp;</p></div><p></p>',
    'format' => 6,
    'name' => 'zurb_clearing',
    'content_types' => array(),
  );
  $templates['zurb_clearing_multiple_images_'] = array(
    'title' => 'Zurb Clearing (Multiple Images)',
    'description' => 'Multiple images with Zurb Clearing.',
    'weight' => 0,
    'fid' => 0,
    'body' => '<div><p>&nbsp;</p>

<ul class="clearing-thumbs clearing-feature" data-clearing>
<li class="clearing-featured-img"><a href="http://placehold.it/1500x1000"><img src="http://placehold.it/1500x1000"></a></li>
<li><a href="http://placehold.it/1500x1000"><img src="http://placehold.it/1500x1000"></a></li>
<li><a href="http://placehold.it/1500x1000"><img src="http://placehold.it/1500x1000"></a></li>
<li><a href="http://placehold.it/1500x1000"><img src="http://placehold.it/1500x1000"></a></li>
<li><a href="http://placehold.it/1500x1000"><img src="http://placehold.it/1500x1000"></a></li>
<li><a href="http://placehold.it/1500x1000"><img src="http://placehold.it/1500x1000"></a></li>
<li><a href="http://placehold.it/1500x1000"><img src="http://placehold.it/1500x1000"></a></li>
<li><a href="http://placehold.it/1500x1000"><img src="http://placehold.it/1500x1000"></a></li>

</ul>

<p>&nbsp;</p></div><p>&nbsp;</p>',
    'format' => 6,
    'name' => 'zurb_clearing_multiple_images_',
    'content_types' => array(),
  );
  return $templates;
}
