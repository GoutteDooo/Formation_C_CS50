SELECT DISTINCT person_id FROM directors WHERE movie_id IN (
  SELECT id FROM movies JOIN ratings ON movie_id = id WHERE rating >= 9.0);