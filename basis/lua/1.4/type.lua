print(type(nil))

print(type(true))
print(type(false))

print(type(12))
print(type(12.654))

print(type("Hello"))

print(type(io.stdin)) -- userdata

print(type(print))

print(type(type)) -- function

print(type({})) -- table

print(type(type(type))) -- string

-- 逻辑运算符

-- and 操作符：如果第一数为 false，则输出它；否则，输出后面的数。
print(4 and 5) -- 5
print(nil and 13) -- nil
print(false and 13) -- false
-- or 操作符：如果第一个数为 true，则输出它；否则，输出后面的数。
print(0 or 5) -- 0
print(false or "Hi") -- Hi
print(nil or false) -- false
