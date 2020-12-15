<?php
namespace App\Controllers;
use App\Models\Users;

class UserController extends ControllerBase
{

    public function initialize(){
        parent::initialize();
    }
    /**
     * IndexAction
     */
    public function indexAction()
    {

    }

    /**
     * Login Action
     */
    public function loginAction(){

    }

    /**
     * Authorize Action
     */
    public function authorizeAction()
    {
        $username = $this->request->getPost('username');
        $pass = $this->request->getPost('password');

        /*$users = Users::find();
        echo count($users);*/

        /*$users = Users::findFirstById(1);
        foreach ($users as $user){
            echo $user->username;
        }*/

        /*$users = Users::query()
            ->where('id = 1')
            ->order('name')
            ->execute();

        var_dump($users);*/

        //$users = Users::findFirst();

        //echo $users->username;

        /*foreach ($users as $user){
            var_dump($user->username);
        }*/

        $users = Users::findFirstByUsername($username);
        echo 123;
        print_r($users); die;
        foreach ($users as $user){
            echo $user->username;
        }
    }
}

