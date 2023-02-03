<?php

declare(strict_types=1);

namespace Rector\Doctrine\Tests\Set\DoctrineDBAL210Set;

use Iterator;
use Rector\Testing\PHPUnit\AbstractRectorTestCase;

final class DoctrineDBAL210SetTest extends AbstractRectorTestCase
{
    /**
     * @dataProvider provideData()
     */
    public function test(string $filePath): void
    {
        $this->doTestFile($filePath);
    }

    public function provideData(): Iterator
    {
        return self::yieldFilesFromDirectory(__DIR__ . '/Fixture');
    }

    public function provideConfigFilePath(): string
    {
        return __DIR__ . '/config/configured_set.php';
    }
}
