<?php
/**
 * @file
 * wwm_ckeditor_template_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function wwm_ckeditor_template_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_template_content_view_styles';
  $strongarm->value = '.wt-row { 
  margin-left: -15px; 
  margin-right: -15px; 
} 
.wt-row:before, .wt-row:after {
  content: " ";
  display: table;
}
.wt-row:after {
  clear: both;
}
.wt-row > div:first-child{
  padding-left: 0;
}
.wt-row > div:last-child {
  padding-right: 0;
}
.wt-col-md-3, .wt-col-md-4, .wt-col-md-6, .wt-col-md-9 { 
  position: relative; 
  min-height: 1px; 
  float: left; 
  padding: 15px; 
  box-sizing: border-box; 
   -moz-box-sizing: border-box; 
} 
.wt-col-md-6 {
  width: 50%;
}
.wt-col-md-3 {
  width: 25%;
}
.wt-col-md-9 {
  width: 75%;
}
.wt-col-md-4 {
  width: 33.3%;
}
.wt-col-md-6 img,
.wt-col-md-3 img,
.wt-col-md-4 img,
.wt-col-md-9 img {
  display: block;
  max-width: 100%;
  height: auto;
}
.wt-two-col .wt-col-md-6,
.wt-two-col-left .wt-col-md-3,
.wt-two-col-left .wt-col-md-9,
.wt-two-col-right .wt-col-md-3,
.wt-two-col-right .wt-col-md-9,
.wt-three-col .wt-col-md-4 {
  min-height: 5em;
}
.wt-two-col-right .wt-col-sidebar,
.wt-two-col-left .wt-col-sidebar {
  padding: 15px 0;
}
.wt-two-col-left .wt-col-sidebar,
.wt-two-col-right .wt-col-md-9{
  margin: 0;
}
.wt-three-col .wt-col-2{
  padding-left: 7.5px;
  padding-right: 7.5px;
}
.wt-row.wt-four-col {
  display: flex;
}
.wt-four-col .wt-col {
  margin-left: 5px;
  margin-right: 5px;
  padding-left: 0;
  padding-right: 0;
  flex: 1 auto;
}
.wt-four-col .wt-col:first-child {
  margin-left: 0;
}
.wt-four-col .wt-col:last-child {
  margin-right: 0;
}
.wt-box,
.wt-quotebox {
  padding: 8px;
  margin: 10px auto;
}
.wt-box .wt-box-title,
.wt-box .wt-box-content,
.wt-quotebox .wt-quote,
.wt-quotebox .wt-byline {
  margin-left: 0;
  margin-right: 0;
  padding: 2px 5px;
  overflow: hidden;
}
.wt-quotebox .wt-byline {
  text-align: right;
  font-style: italic;
}
.wt-quotebox {
  background: #efefef url(../images/widgetcommonQuotebox.png) 5px 2px no-repeat;
  border: 1px solid #cccccc; 
}
.wt-quotebox .wt-quote {
  margin-left: 20px;
  margin-bottom: 5px;
  font-size: 1.2em;
}
.wt-box {
  border: 1px solid #cccccc; 
  background-color: #efefef;
  padding: 8px;
  display: block;
  overflow: hidden;
}
.wt-box .wt-box-title {
  text-align: center;
  font-size: 1.2em;
  font-weight: bold;
}
.wt-box .wt-box-title p,
.wt-quotebox .wt-byline p {
  margin-bottom: 0;
}
.wt-box .wt-row {
  margin-left: 0;
  margin-right: 0;
}';
  $export['wysiwyg_template_content_view_styles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_template_editor_styles';
  $strongarm->value = '.wt-row { 
  margin-left: -15px; 
  margin-right: -15px; 
  background-color: #eee;
} 
.wt-row:before, .wt-row:after { 
  content: " "; 
  display: table; 
} 
.wt-row:after { 
  clear: both; 
} 
.wt-col-md-3, .wt-col-md-4, .wt-col-md-6, .wt-col-md-9 { 
  position: relative; 
  min-height: 1px; 
  float: left; 
  padding: 15px; 
  box-sizing: border-box; 
   -moz-box-sizing: border-box; 
} 
.wt-col-md-6 { 
  width: 50%; 
} 
.wt-col-md-3 { 
  width: 25%; 
} 
.wt-col-md-9 { 
  width: 75%; 
} 
.wt-col-md-4 { 
  width: 33.3%; 
} 
.wt-col-md-6 img, 
.wt-col-md-3 img, 
.wt-col-md-4 img, 
.wt-col-md-9 img { 
  display: block; 
  max-width: 100%; 
  height: auto; 
} 
.wt-row, 
.wt-two-col, 
.wt-two-col-left, 
.wt-two-col-right, 
.wt-three-col, 
.wt-four-col { 
  padding: 8px; 
  margin: 10px auto; 
  background: #eee; 
  border-radius: 8px; 
  border: 1px solid #ddd; 
  box-shadow: 0 1px 1px #fff inset, 0 -1px 0px #ccc inset; 
} 
.wt-two-col .wt-col-md-6, 
.wt-two-col-left .wt-col-md-3, 
.wt-two-col-left .wt-col-md-9, 
.wt-two-col-right .wt-col-md-3, 
.wt-two-col-right .wt-col-md-9, 
.wt-three-col .wt-col-md-4, 
.wt-four-col .wt-col-md-3, 
.wt-col { 
  box-shadow: 0 1px 1px #ddd inset; 
  border: 1px solid #cccccc; 
  border-radius: 5px; 
  background: #fff; 
  min-height: 5em; 
} 
.wt-two-col .wt-col-md-6, 
.wt-two-col-left .wt-col-md-3, 
.wt-two-col-left .wt-col-md-9, 
.wt-two-col-right .wt-col-md-3, 
.wt-two-col-right .wt-col-md-9 { 
  margin: -3px; 
} 
.wt-two-col-right .wt-col-sidebar, 
.wt-two-col-left .wt-col-sidebar { 
  padding: 15px 0; 
} 
.wt-two-col .wt-col-2 { 
  margin-left: 9px; 
} 
.wt-three-col .wt-col-1 { 
  margin-left: -3px; 
} 
.wt-three-col .wt-col-2 { 
  margin-left: 3px; 
} 
.wt-three-col .wt-col-3 { 
  margin-left: 3px; 
  margin-right: -3px; 
} 
.wt-two-col-left .wt-col-md-9{ 
  margin-left: 8px; 
} 
.wt-two-col-right .wt-col-md-9{ 
  margin-right: 8px; 
} 
.wt-four-col .wt-col-1 { 
  margin-left: -4px; 
} 
.wt-four-col .wt-col-2 { 
  margin-left: 3px; 
} 
.wt-four-col .wt-col-3 { 
  margin-left: 3px; 
} 
.wt-four-col .wt-col-4 { 
  margin-right: -5px; 
  margin-left: 3px; 
} 
.wt-box, 
.wt-quotebox { 
  padding: 8px; 
  margin: 10px auto; 
  background: #eee; 
  border-radius: 8px; 
  border: 1px solid #ddd; 
  box-shadow: 0 1px 1px #fff inset, 0 -1px 0px #ccc inset; 
} 
.wt-box .wt-box-title, 
.wt-box .wt-box-content, 
.wt-quotebox .wt-quote, 
.wt-quotebox .wt-byline { 
  box-shadow: 0 1px 1px #ddd inset; 
  border: 1px solid #cccccc; 
  border-radius: 5px; 
  background: #fff; 
  margin-left: 0; 
  margin-right: 0; 
  padding: 2px 5px; 
  overflow: hidden;
} 
.wt-quotebox .wt-byline { 
  text-align: right; 
  font-style: italic; 
} 
.wt-box .wt-box-content, 
.wt-quotebox .wt-quote { 
  min-height: 3em; 
} 
.wt-box .wt-box-title p, 
.wt-quotebox .wt-byline p { 
  margin-bottom: 0; 
} 
.wt-box .wt-box-title { 
  background: #fff;
  margin-bottom: 10px;
} 
.wt-box .wt-row { 
  margin-left: 0; 
  margin-right: 0; 
} 
.wt-quotebox { 
  background: #efefef url(../images/widgetcommonQuotebox.png) 5px 2px no-repeat; 
} 
.wt-quotebox .wt-quote { 
  margin-left: 20px; 
  margin-bottom: 5px; 
} 
[class*="wt-col-md"] {
  box-shadow: 0 1px 1px #ddd inset;
  border: 1px solid #cccccc;
  border-radius: 5px;
  background: #fff;
  min-height: 5em;
  margin-left: 0.5em;
}
[class*="wt-col-md"]:first-child {
  margin-left: -0.25em;
}
[class*="wt-col-md"]:last-child {
  margin-right: -0.5em;
}
a.wt-button {
  background: #fff;
  border: 1px solid #e4e4e4;
  border-bottom: 1px solid #b4b4b4;
  border-left-color: #d2d2d2;
  border-right-color: #d2d2d2;
  color: #3a3a3a;
  cursor: pointer;
  font-size: 90%;
  font-weight: normal;
  text-align: center;
  margin-bottom: 1em;
  padding: 4px 17px;
  -khtml-border-radius: 15px;
  -moz-border-radius: 20px;
  -webkit-border-radius: 15px;
  border-radius: 15px;
  text-decoration: none;
  cursor:	text;
}';
  $export['wysiwyg_template_editor_styles'] = $strongarm;

  return $export;
}
