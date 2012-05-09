<?php

/**
 * Implementation of drush_hook_pre_hosting_task()
 */
function drush_auto_profiler_pre_hosting_task() {
  $task =& drush_get_context('HOSTING_TASK');
  if ($task->ref->type == 'site' && ($task->task_type == 'install' || $task->task_type == 'verify')) {
    $task->options['feature_list'] = $task->ref->feature_list;
  }
}
