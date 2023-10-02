using Printf

n = parse(Int64, readline())

for i = 1:n
    value = readline()
    @printf("resposta %d: %s\n", i, value)
end
