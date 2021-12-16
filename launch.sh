#!/bin/bash

echo "Stopping deveolpment container..."
docker-compose down
echo "Building and running container..."
docker-compose up -d --no-deps --build
echo "Acessing container..."
docker container exec -it devicedrivers_app_1 bash