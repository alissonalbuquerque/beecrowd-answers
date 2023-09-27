using Printf

weight_a = 2
weight_b = 3
weight_c = 5

a = parse(Float64, readline())
b = parse(Float64, readline())
c = parse(Float64, readline())

average = (a * weight_a + b * weight_b + c * weight_c) / (weight_a + weight_b + weight_c)

@printf("MEDIA = %.1f\n", average)
