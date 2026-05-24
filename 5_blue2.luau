-- we can define our own structural data types
type Point = { x: number, y: number }

-- and we can annotate variables (and function arguments) with them)
local p: Point = { x = 6, y = 7 }

print(p.x, p.y)

-- and we can see that accessing an invalid field from a table raises a type error!
print(p.z)