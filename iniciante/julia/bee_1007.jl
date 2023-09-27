using Printf

a = parse(Int64, readline())
b = parse(Int64, readline())
c = parse(Int64, readline())
d = parse(Int64, readline())

diff = a * b - c * d

@printf("DIFERENCA = %d\n", diff)
