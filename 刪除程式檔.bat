@echo off
echo �N�|�R�����ɮצp�U: (���|�����߿W���ɮ�)
dir /b /s /a-r *.exe *.class *.o | more
pause
echo �Y�N�R���ɮ�
timeout 3
del /s /q /a-r *.exe *.class *.o
