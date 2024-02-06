#!/bin/bash

git add .

read -p "Enter the message to commit : " commit_message

git commit -m "$commit_message"

git push
