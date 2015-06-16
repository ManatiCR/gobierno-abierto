<div class="panel-display panel-one-two-col clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
 <div class="panel-panel panel-top">
    <?php print $content['top']; ?>
  </div>

  <div class="panel-panel panel-content">
    <?php print $content['content']; ?>
  </div>

  <div class="panel-panel panel-sidebar">
    <?php print $content['sidebar']; ?>
  </div>

</div>
