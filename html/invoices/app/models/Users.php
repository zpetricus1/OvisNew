<?php

namespace App\Models;
use Phalcon\Mvc\Model;

class Users extends Model
{

    /**
     *
     * @var integer
     */
    public $id;

    /**
     *
     * @var string
     */
    public $name;

    /**
     *
     * @var string
     */
    public $username;

    /**
     *
     * @var string
     */
    public $email_verified_at;

    /**
     *
     * @var string
     */
    public $password;

    /**
     *
     * @var string
     */
    public $remember_token;

    /**
     *
     * @var string
     */
    public $created_at;

    /**
     *
     * @var string
     */
    public $updated_at;

    /**
     * Initialize method for model.
     */
    public function initialize()
    {
        $this->setSchema("ovis");
        $this->setSource("users");
        $this->hasMany('id', 'App\Models\Bills', 'user_id', ['alias' => 'Bills']);
    }


}
