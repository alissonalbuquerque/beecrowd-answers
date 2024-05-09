SELECT categories.name, SUM(products.amount) as sum FROM products INNER JOIN categories ON products.id_categories = categories.id GROUP BY categories.id;
