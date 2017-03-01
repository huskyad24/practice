#!/bin/bash


function git_add_without_not_finish()
{
	echo "git add --all"
	git add --all
	not_finish=(`grep -Rl "not finish" *`)
	length=${#not_finish[@]}

	echo "git remove not finish"
	for((i=0;i<$length;i++));
	do
		cmd="git rm --cached ${not_finish[$i]}"
		$cmd
	done
}

function update_readme()
{
	echo "update readme"
	string="https://www.hackerrank.com\n\n"
	not_finish=(`grep -Rl "not finish" HackerRank/ | xargs -n 1 basename`)
	not_finish+=("a.out")
	not_finish_length=${#not_finish[@]}

	tree_str="`tree HackerRank`"
	tree=()
	while read -r line; do
		for((j=0; j<$not_finish_length; j++));
		do
			if [[ $line =~ ${not_finish[$j]} ]]
			then
			unset line
			fi
		done

		if [ -n "$line" ]; then
			tree+=("$line")
		fi
	done <<< "$tree_str"

	unset tree[${#tree[@]}-1]

	for s in "${tree[@]}"
	do
		string=$string$s"\n";
	done

	echo -e "$string" > HackerRank/README
	cat HackerRank/README
}

update_readme
git_add_without_not_finish
echo "git commit"
git commit
