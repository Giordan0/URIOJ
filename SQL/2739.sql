SELECT name, cast(EXTRACT(DAY FROM payday) AS integer) as day
FROM loan