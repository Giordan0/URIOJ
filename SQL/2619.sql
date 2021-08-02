SELECT prod.name, prov.name, prod.price
FROM categories c INNER JOIN products prod 
ON prod.id_categories = c.id INNER JOIN providers prov
ON prod.id_providers = prov.id
WHERE c.name = 'Super Luxury' AND prod.price > 1000