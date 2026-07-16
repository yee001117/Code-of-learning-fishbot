import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/zjz/chapt9/fishbot_ws/install/ros_serial2wifi'
