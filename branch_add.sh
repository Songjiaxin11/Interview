#!/bin/bash
# 通过读取csv创建分支
###################################################
# CSV 文件路径
csv_file="./branchName.csv"

# 读取 CSV 文件中的分支列表
branches=($(csvtool -t COMMA col 1 $csv_file))
###################################################
# 通过写名字创建
# branches=("test001" "test002")
# ###################################################
# 远程仓库的名称
remote="origin"

# 切换到主分支（或其他基础分支）
base_branch="main"

# 循环遍历推送分支到远程仓库
for branch in "${branches[@]}"; do
    # 推送分支到远程仓库
    git push "$remote" "$base_branch:$branch"
done
