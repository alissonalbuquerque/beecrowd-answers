using Printf

number = readline()

index = findfirst("13", number)

if !isnothing(index)
    @printf("%s es de Mala Suerte\n", number)
else
    @printf("%s NO es de Mala Suerte\n", number)
end
