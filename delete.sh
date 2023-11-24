# 获取远程仓库的所有分支
git fetch --prune

# 获取远程仓库的所有分支，并删除除了 main 和指定分支以外的分支
branches_to_keep=("main" "Songjiaxin" "Huangmohan","test001")  # 替换为实际要保留的分支名称
git branch -r | grep -v -E "$(IFS=\|; echo "${branches_to_keep[*]}")" | sed 's/origin\///' | xargs -I {} git push origin --delete {}
