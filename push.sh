#!/bin/bash

git add .

read -p "Enter the commit message : " commit message

git commit -m"$commit_message"
