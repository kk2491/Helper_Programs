Check the git status
    user@lenovo$ git status
    On branch master
    Your branch is up-to-date with 'origin/master'.
    Untracked files:
      (use "git add <file>..." to include in what will be committed)

	    Test/Testing Folder/README.md
	    Test/Testing Folder/images/
	    Test/Testing Folder/New_folder/
    nothing added to commit but untracked files present (use "git add" to track)

    user@lenovo$ git add Test/*
    
    user@lenovo$ git status
    On branch master
    Your branch is up-to-date with 'origin/master'.
    Changes to be committed:
    (use "git reset HEAD <file>..." to unstage)
    
    user@lenovo$ git commit -m "Adding New files"  
    [master a64b488] Adding New files
    23 files changed, 1944 insertions(+)

    user@lenovo$ git status 
    On branch master
    Your branch is ahead of 'origin/master' by 1 commit.
      (use "git push" to publish your local commits)
    nothing to commit, working directory clean



    $ git pull origin master 
    From gitlab.com:repo/tools
    * branch            master     -> FETCH_HEAD
    Already up-to-date.

    $ git push origin master 
Counting objects: 30, done.
Delta compression using up to 4 threads.
Compressing objects: 100% (28/28), done.
Writing objects: 100% (30/30), 71.37 KiB | 0 bytes/s, done.
Total 30 (delta 3), reused 0 (delta 0)
To git@gitlab.com:repo/tools.git
   768d934..a64b488  master -> master
