<?php

namespace Rector\Doctrine\Tests\Set\DoctrineORM219Set\Fixture;

use Doctrine\ORM\Mapping\OrderBy;

class User
{
    /**
     * @OrderBy({"name" = "ASC"})
     */
    private $groups;
}

?>
-----
<?php

namespace Rector\Doctrine\Tests\Set\DoctrineORM219Set\Fixture;

use Doctrine\ORM\Mapping\OrderBy;

class User
{
    #[OrderBy(['name' => 'ASC'])]
    private $groups;
}

?>
