$(document).ready(function() {
  $('#auto-profiler-blog-fieldset').toggle();
  if ($('#edit-feature-list-blog').attr('checked')) {
    $('#auto-profiler-blog-fieldset').toggle();
  }
  $('#edit-feature-list-blog').change(function() {
    $('#auto-profiler-blog-fieldset').toggle();
  });
});
