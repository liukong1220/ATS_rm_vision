#!/bin/bash
###
 # @Description: This is a ros-based project!
 # @Author: Liu Biao
 # @Date: 2023-01-02 22:20:13
 # @LastEditTime: 2023-05-05 15:23:45
 # @FigtPath: /TUP-Vision-2023-Based/WatchDog.sh
### 
#sudo chmod +777 /dev/ttyACM0 
export ROS_HOME="/home/ats/ros_ws"
cd /home/ats/ros_ws
# 设置需要启动和监视的ros命令
declare -a commands=(" ros2 launch rm_vision_bringup vision_bringup.launch.py")

# 定义函数来启动ros命令
start_commands() {
  for cmd in "${commands[@]}"
  do
    gnome-terminal -- bash -c "source install/setup.bash;$cmd;exec bash;"
  done
}

# 定义函数来监视ros进程是否在运行
watch_commands() {
  while true
  do
    for cmd in "${commands[@]}"
    do
      process_name=$(echo $cmd | awk '{print $1}') # 提取进程名
      if ! pgrep -f "$cmd" > /dev/null
      then
        echo "$cmd 未在运行, 重新启动"
    gnome-terminal -- bash -c "source install/setup.bash;$cmd;exec bash;"
      fi
    done
    sleep 1 # 设置睡眠时间，以便在下一次检查之前给进程足够的时间运行
  done
}

# 启动ros命令和监视进程
start_commands
watch_commands