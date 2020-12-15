<?php

/***
 * @var Phalcon\Mvc\Router $router
 */

$router->setDefaultController('index')
    ->setDefaultAction('index')
    ->setDefaultNamespace('App\Controllers')
    ->removeExtraSlashes(true);

$router->add('/user', [
    'controller' => 'user',
    'action' => 'index'
]);
