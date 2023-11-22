#!/bin/bash

# 要创建的分支列表
branches=("test001" "test002")

# 远程仓库的名称
remote="origin"

# 切换到主分支，获取最新的主分支内容
git checkout "$base_branch"
git pull "$remote" "$base_branch"

# 循环遍历合并并推送到每个分支
for branch in "${branches[@]}"; do
    # 切换到目标分支
    git checkout "$branch"

    # 合并主分支到目标分支
    git merge "$base_branch"

    # 推送分支到远程仓库
    git push "$remote" "$branch"
done

# 切换回主分支
git checkout "$base_branch"