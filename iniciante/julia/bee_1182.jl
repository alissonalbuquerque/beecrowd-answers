using Printf

index = parse(Int64, readline())
index += 1

operation = readline()

matrix = []
for count_array = 1:12

    matrix_line = []
    for count_index = 1:12
        value = parse(Float64, readline())
        push!(matrix_line, value)
    end

    push!(matrix, matrix_line)
end

if operation == "S"
    sum = reduce(+, map(array -> array[index], matrix))
    @printf("%.1f\n", sum)
end

if operation == "M"
    sum = reduce(+, map(array -> array[index], matrix))
    average = sum / 12.0
    @printf("%.1f\n", average)
end
