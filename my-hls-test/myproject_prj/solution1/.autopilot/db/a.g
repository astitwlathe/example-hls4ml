#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /data1/aslathe/work/demo/test_model_vcu118/my-hls-test/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
