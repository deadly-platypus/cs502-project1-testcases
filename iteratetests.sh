rm report.txt

if [[ $# != 1 ]]; then
	echo "Please provide a compiler"
	exit 1
fi

CC=$1

for f in *.c; do
    testname="${f%.*}"
    testnum=${testname:4}
    echo "Running test $testnum"
    $CC $f &> /dev/null
    DIFF=`diff t$testnum.txt output.txt`
    if [[ $DIFF != "" ]]; then
        echo "Test $testnum failed:" >> report.txt
        echo $DIFF >> report.txt
    fi
done
