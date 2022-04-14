#!/usr/bin/env bash
set -e

# see also ".mailmap" for how email addresses and names are deduplicated
{
cat <<- 'EOH'
# Super Shell 0.1 First Version 13/04/2022.
# This file lists all individuals having contributed content to the repository.
# For how it is generated, see `Authors/generate-authors.sh`.

# Authors of Super Shell:
EOH
echo
git log --format='%aN <%aE>' | LC_ALL=C.UTF-8 sort -uf  
} > AUTHORS