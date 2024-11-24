echo "Removing all .out files in current and subdirectories..."
find . -type f -name "*.out" -exec rm -v {} +

echo "All .out files have been removed."