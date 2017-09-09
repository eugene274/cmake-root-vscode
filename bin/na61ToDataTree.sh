#!/bin/bash

QUEUE=short
NODES=1
CORES=8
WALLTIME="00:10:00"

CMD=na61_to_datatree
QSUB="qsub -q $QUEUE -l nodes=$NODES;ppn=$CORES;walltime=$WALLTIME "

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
    toexec="$CMD $input_dir/$file $output_dir/$output &>
    $output_dir/$log"
    echo $QSUB $toexec

done


