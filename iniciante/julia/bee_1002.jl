using Printf

pi_defined = 3.14159

radius = parse(Float64, readline())

area = pi_defined * (radius^2)

@printf("A=%.4f\n", area)
