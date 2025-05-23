<?php

namespace Rector\Doctrine\Tests\Set\DoctrineORM219Set\Fixture;

use Doctrine\ORM\Mapping\OneToMany;

class Product
{
    /**
     * @OneToMany(targetEntity="Feature", mappedBy="product")
     */
    private $features;
}

?>
-----
<?php

namespace Rector\Doctrine\Tests\Set\DoctrineORM219Set\Fixture;

use Doctrine\ORM\Mapping\OneToMany;

class Product
{
    #[OneToMany(targetEntity: \Feature::class, mappedBy: 'product')]
    private $features;
}

?>
