#!/bin/bash

# 远程仓库的名称
remote="origin"

# 主分支的名称
base_branch="main"

# 指定的远程分支列表
target_remote_branches=("test001" "test002")  # 替换为实际的目标远程分支名称

# 切换到主分支，获取最新的主分支内容
git checkout "$base_branch"
git pull "$remote" "$base_branch"

# 循环遍历推送主分支到每个指定的远程分支
for target_branch in "${target_remote_branches[@]}"; do
    git push "$remote" "$base_branch:$target_branch"
done
