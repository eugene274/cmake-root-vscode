#!/bin/bash

QUEUE=short
NODES=1
CORES=8
WALLTIME="00:10:00"

EXECUTOR=binExecutor.sh
CMD="$ROOT_WORK_DIR/bin/na61_to_datatree"
QSUB="qsub -q $QUEUE"

if [ ! -d $1 ]
then
    echo No input directory $1
    exit 1
fi

if [ ! -d $2 ]
then
    echo No such directory $2
    echo mkdir $2
    mkdir $2
fi

input_dir=`realpath $1`
output_dir=`realpath $2`

for file in `ls -1 $input_dir`; do
    output=${file/TreeNA61/DataTree}
    log=${output/root/log}
#    toexec="$QSUB -v \
#    CMD=$CMD,INPUT=$input_dir/$file,OUTPUT=$output_dir/$output \
# $ROOT_WORK_DIR/bin/$EXECUTOR"
    toexec="$CMD $input_dir/$file $output_dir/$output &> \
    $output_dir/$log"
    echo $toexec
    eval $toexec
    
#    REMAIN=`qstat -Q | awk '/^short/ {print $2-$3}'`

#    echo REMAIN=$REMAIN
#    while [[ $REMAIN -le 0 ]] 
#    do

#        sleep 10
#    done
done


