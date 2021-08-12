(SELECT concat('Podium: ', team) as name 
FROM league 
WHERE position <= 3)
UNION ALL(
SELECT concat('Demoted: ', team) as name 
FROM league
WHERE position > ANY(SELECT count(*)-2 FROM league))