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
  $strongarm->value = '.row { 
  margin-left: -15px; 
  margin-right: -15px; 
} 
.row:before, .row:after {
  content: " ";
  display: table;
}
.row:after {
  clear: both;
}
.row > div:first-child{
  padding-left: 0;
}
.row > div:last-child {
  padding-right: 0;
}
.col-md-3, .col-md-4, .col-md-6, .col-md-9 { 
  position: relative; 
  min-height: 1px; 
  float: left; 
  padding: 15px; 
  box-sizing: border-box; 
   -moz-box-sizing: border-box; 
} 
.col-md-6 {
  width: 50%;
}
.col-md-3 {
  width: 25%;
}
.col-md-9 {
  width: 75%;
}
.col-md-4 {
  width: 33.3%;
}
.col-md-6 img,
.col-md-3 img,
.col-md-4 img,
.col-md-9 img {
  display: block;
  max-width: 100%;
  height: auto;
}
.two-col .col-md-6,
.two-col-left .col-md-3,
.two-col-left .col-md-9,
.two-col-right .col-md-3,
.two-col-right .col-md-9,
.three-col .col-md-4 {
  min-height: 5em;
}
.two-col-right .col-sidebar,
.two-col-left .col-sidebar {
  padding: 15px 0;
}
.two-col-left .col-sidebar,
.two-col-right .col-md-9{
  margin: 0;
}
.three-col .col-2{
  padding-left: 7.5px;
  padding-right: 7.5px;
}
.row.four-col {
  display: flex;
}
.four-col .col {
  margin-left: 5px;
  margin-right: 5px;
  padding-left: 0;
  padding-right: 0;
  flex: 1 auto;
}
.four-col .col:first-child {
  margin-left: 0;
}
.four-col .col:last-child {
  margin-right: 0;
}
.box,
.quotebox {
  padding: 8px;
  margin: 10px auto;
}
.box .box-title,
.box .box-content,
.quotebox .quote,
.quotebox .byline {
  margin-left: 0;
  margin-right: 0;
  padding: 2px 5px;
  overflow: hidden;
}
.quotebox .byline {
  text-align: right;
  font-style: italic;
}
.quotebox {
  background: #efefef url(../images/widgetcommonQuotebox.png) 5px 2px no-repeat;
  border: 1px solid #cccccc; 
}
.quotebox .quote {
  margin-left: 20px;
  margin-bottom: 5px;
  font-size: 1.2em;
}
.box {
  border: 1px solid #cccccc; 
  background-color: #efefef;
  padding: 8px;
  display: block;
  overflow: hidden;
}
.box .box-title {
  text-align: center;
  font-size: 1.2em;
  font-weight: bold;
}
.box .box-title p,
.quotebox .byline p {
  margin-bottom: 0;
}
.box .row {
  margin-left: 0;
  margin-right: 0;
}';
  $export['wysiwyg_template_content_view_styles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wysiwyg_template_editor_styles';
  $strongarm->value = '.row { 
  margin-left: -15px; 
  margin-right: -15px; 
  background-color: #eee;
} 
.row:before, .row:after { 
  content: " "; 
  display: table; 
} 
.row:after { 
  clear: both; 
} 
.col-md-3, .col-md-4, .col-md-6, .col-md-9 { 
  position: relative; 
  min-height: 1px; 
  float: left; 
  padding: 15px; 
  box-sizing: border-box; 
   -moz-box-sizing: border-box; 
} 
.col-md-6 { 
  width: 50%; 
} 
.col-md-3 { 
  width: 25%; 
} 
.col-md-9 { 
  width: 75%; 
} 
.col-md-4 { 
  width: 33.3%; 
} 
.col-md-6 img, 
.col-md-3 img, 
.col-md-4 img, 
.col-md-9 img { 
  display: block; 
  max-width: 100%; 
  height: auto; 
} 
.row, 
.two-col, 
.two-col-left, 
.two-col-right, 
.three-col, 
.four-col { 
  padding: 8px; 
  margin: 10px auto; 
  background: #eee; 
  border-radius: 8px; 
  border: 1px solid #ddd; 
  box-shadow: 0 1px 1px #fff inset, 0 -1px 0px #ccc inset; 
} 
.two-col .col-md-6, 
.two-col-left .col-md-3, 
.two-col-left .col-md-9, 
.two-col-right .col-md-3, 
.two-col-right .col-md-9, 
.three-col .col-md-4, 
.four-col .col-md-3, 
.col { 
  box-shadow: 0 1px 1px #ddd inset; 
  border: 1px solid #cccccc; 
  border-radius: 5px; 
  background: #fff; 
  min-height: 5em; 
} 
.two-col .col-md-6, 
.two-col-left .col-md-3, 
.two-col-left .col-md-9, 
.two-col-right .col-md-3, 
.two-col-right .col-md-9 { 
  margin: -3px; 
} 
.two-col-right .col-sidebar, 
.two-col-left .col-sidebar { 
  padding: 15px 0; 
} 
.two-col .col-2 { 
  margin-left: 9px; 
} 
.three-col .col-1 { 
  margin-left: -3px; 
} 
.three-col .col-2 { 
  margin-left: 3px; 
} 
.three-col .col-3 { 
  margin-left: 3px; 
  margin-right: -3px; 
} 
.two-col-left .col-md-9{ 
  margin-left: 8px; 
} 
.two-col-right .col-md-9{ 
  margin-right: 8px; 
} 
.four-col .col-1 { 
  margin-left: -4px; 
} 
.four-col .col-2 { 
  margin-left: 3px; 
} 
.four-col .col-3 { 
  margin-left: 3px; 
} 
.four-col .col-4 { 
  margin-right: -5px; 
  margin-left: 3px; 
} 
.box, 
.quotebox { 
  padding: 8px; 
  margin: 10px auto; 
  background: #eee; 
  border-radius: 8px; 
  border: 1px solid #ddd; 
  box-shadow: 0 1px 1px #fff inset, 0 -1px 0px #ccc inset; 
} 
.box .box-title, 
.box .box-content, 
.quotebox .quote, 
.quotebox .byline { 
  box-shadow: 0 1px 1px #ddd inset; 
  border: 1px solid #cccccc; 
  border-radius: 5px; 
  background: #fff; 
  margin-left: 0; 
  margin-right: 0; 
  padding: 2px 5px; 
  overflow: hidden;
} 
.quotebox .byline { 
  text-align: right; 
  font-style: italic; 
} 
.box .box-content, 
.quotebox .quote { 
  min-height: 3em; 
} 
.box .box-title p, 
.quotebox .byline p { 
  margin-bottom: 0; 
} 
.box .box-title { 
  background: #fff;
  margin-bottom: 10px;
} 
.box .row { 
  margin-left: 0; 
  margin-right: 0; 
} 
.quotebox { 
  background: #efefef url(../images/widgetcommonQuotebox.png) 5px 2px no-repeat; 
} 
.quotebox .quote { 
  margin-left: 20px; 
  margin-bottom: 5px; 
} 
[class*="col-md"] {
  box-shadow: 0 1px 1px #ddd inset;
  border: 1px solid #cccccc;
  border-radius: 5px;
  background: #fff;
  min-height: 5em;
  margin-left: 0.5em;
}
[class*="col-md"]:first-child {
  margin-left: -0.25em;
}
[class*="col-md"]:last-child {
  margin-right: -0.5em;
}
a.button {
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
