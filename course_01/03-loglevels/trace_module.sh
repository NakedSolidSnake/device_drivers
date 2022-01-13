
MODULE_NAME=$1

if [[ $(id -u) -ne 0 ]]; then
    echo "Must be sudo to tracing"
    exit 1
fi

if [ -z $MODULE_NAME ]; then 
    echo "usage: ./trace_module.sh <module_name>"
    exit 2
fi

cd /sys/kernel/debug/tracing/
echo 0 > tracing_on
echo function_graph > current_tracer
echo available_tracers
echo > trace 
echo :mod:$MODULE_NAME > set_ftrace_filter
echo 1 > tracing_on
insmod $MODULE_NAME.ko
cat trace