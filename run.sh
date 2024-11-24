if [ -z "$1" ]; then
  echo "Usage: $0 <search_term>"
  exit 1
fi

SEARCH_TERM=$1

find . -type f -name "*.c" | while read -r file; do
  FILENAME=$(basename "$file" .c)

  if [[ "$FILENAME" == "ExtremeC_examples_chapter$SEARCH_TERM" ]]; then
    OUTPUT_FILE="${file%.c}.out"

    echo "Compiling $file..."
    gcc "$file" -o "$OUTPUT_FILE"
    
    if [ $? -eq 0 ]; then
      echo "Running $OUTPUT_FILE..."
      ./"$OUTPUT_FILE"
    else
      echo "Compilation failed for $file"
    fi
  fi
done
