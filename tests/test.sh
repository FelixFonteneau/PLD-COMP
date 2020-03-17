#! /bin/bash

if [ "$#" -eq 0 ]
then
  cd ..
  docker run --rm -v $(pwd):/work eguerin/antlr4cpp bash -c "cd /work/tests ; chmod 755 pld-wrapper.sh; python3 pld-test.py tests/Init/"

# suppress tests directories if clean
elif [ "$#" -eq 1 ] && [ $1 = "clean" ]
then
  echo "cleaning pld-test-output..."
  rm -rf "pld-test-output"
fi
