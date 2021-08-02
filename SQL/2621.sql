SELECT prod.name
FROM products prod INNER JOIN providers prov
ON prod.id_providers = prov.id
WHERE prov.name LIKE 'P%' AND prod.amount BETWEEN 10 AND 20