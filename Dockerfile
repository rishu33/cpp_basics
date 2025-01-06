# Use an official Ubuntu image as the base
FROM ubuntu:22.04

# Set the working directory inside the container
WORKDIR /media/rishu33/ACTIVE_DATA/RWTH/docker/cpp_basics

# Install required system dependencies
RUN apt-get update && apt-get install -y \
    # For C++ compilers and build tools
    build-essential \
    # GNU Debugger
    gdb \
    # Build system generator
    cmake \
    # Version control system
    git \
    # Text editor (optional)
    nano \
    # Alternative text editor (optional)
    #vim && \            
    rm -rf /var/lib/apt/lists/*

# Set environment variables for localization (optional)
ENV LANG=C.UTF-8 LC_ALL=C.UTF-8

# Default command to keep the container running
CMD ["/bin/bash"]
