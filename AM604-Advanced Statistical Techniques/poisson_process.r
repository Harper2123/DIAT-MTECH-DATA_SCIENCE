# Set the rate parameter (average events per unit time)
lambda <- 2

# Set the time duration for simulation
time_duration <- 10

# Generate a Poisson process
poisson_process <- rpois(time_duration * lambda, lambda)

barplot(poisson_process, main = "Poisson Process Simulation", xlab = "Time", ylab = "Number of Events", col = "blue")
