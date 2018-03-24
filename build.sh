if [ ! -d "build" ]; then
  mkdir build
fi
echo "===== CMake ====="
cd build
cmake ..
echo ""
echo "CMake finish"
echo ""
echo "presse key for execute make"
read a
echo "===== Make ====="
make
echo ""
echo "Make finish"
echo ""
echo "Exectuable : ./build/cmm"





