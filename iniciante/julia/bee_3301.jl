values = [parse(Int64, str) for str in split(readline())]

h, z, l = values
center = sort(values)[2]

sobrinho = ""

if h == center
    sobrinho = "huguinho"
end

if z == center
    sobrinho = "zezinho"
end

if l == center
    sobrinho = "luisinho"
end

println(sobrinho)
