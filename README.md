# minishell

handle ctrl-C, ctrl-D and ctrl-\ :
- use tcsetattr() and tcgetattr() to silence echo ^C
https://stackoverflow.com/questions/59922972/how-to-stop-echo-in-terminal-using-c
