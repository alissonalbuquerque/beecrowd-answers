using Printf

weight_a = 3.5
weight_b = 7.5

a = parse(Float64, readline())
b = parse(Float64, readline())

average = (a * weight_a + b * weight_b) / (weight_a + weight_b)

@printf("MEDIA = %.5f\n", average)
