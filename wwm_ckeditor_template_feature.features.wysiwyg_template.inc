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
    'title' => '25/75',
    'description' => 'Two column layout. ',
    'weight' => 0,
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
    'weight' => 0,
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
    'weight' => 0,
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
    'title' => '50/50',
    'description' => 'Two column layout.',
    'weight' => 0,
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
    'title' => '75/25',
    'description' => 'Two column layout.',
    'weight' => 0,
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
  $templates['image_align_center'] = array(
    'title' => 'Image Align Center',
    'description' => 'Insert image aligned center.',
    'weight' => 0,
    'fid' => 0,
    'body' => '<p class="align-center">
<img src="http://placehold.it/500x280&text=Image"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p>
</p>',
    'format' => 1,
    'name' => 'image_align_center',
    'content_types' => array(),
  );
  $templates['image_align_left'] = array(
    'title' => 'Image Align Left',
    'description' => 'Insert image aligned left.',
    'weight' => 0,
    'fid' => 0,
    'body' => '<p>
<img src="http://placehold.it/500x280&text=Image" class="align-left"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p>
</p>',
    'format' => 1,
    'name' => 'image_align_left',
    'content_types' => array(),
  );
  $templates['image_align_right'] = array(
    'title' => 'Image Align Right',
    'description' => 'Insert image aligned right.',
    'weight' => 0,
    'fid' => 0,
    'body' => '<p>
<img src="http://placehold.it/500x280&text=Image" class="align-right"><p class="rtecenter"><strong><font color="#ff0000">Delete the above image place holder and this text, then insert any media you want or none at all.</font></strong></p>
</p>',
    'format' => 1,
    'name' => 'image_align_right',
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
