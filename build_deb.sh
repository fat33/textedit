#!/bin/bash

SELF=`readlink -f "$0"`
DIR=`dirname "$SELF"`

debuild --preserve-env -b -us -uc
