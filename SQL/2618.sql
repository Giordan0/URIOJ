SELECT prod.name, prov.name, c.name
FROM categories c INNER JOIN products prod
ON prod.id_categories = c.id INNER JOIN providers prov
ON prod.id_providers = prov.id
WHERE c.name = 'Imported' AND prov.name = 'Sansul SA'