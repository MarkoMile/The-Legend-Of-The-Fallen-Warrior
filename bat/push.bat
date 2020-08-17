@echo off
git add ../
set delBuild=commit
set /p delBuild=Commit message [commit]: 
git commit -m "%delBuild%"
git push --set-upstream origin1 master
pause