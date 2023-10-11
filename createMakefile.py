import sys, os
import argparse
from pathlib import Path


TEMPLATE_FILE = "CMakeLists.template"
RESULT_FILE = "CMakeLists.txt"


def get_sources(path):
    # TODO: collect all src files under the given path and return srcs list
    # TODO: reminder - all elements of the list should end with '\n'
    return []


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--project", required=True, help = "Set project name.")
    parser.add_argument("--src-path", required=True, help = "Set the search path for all src files.")
    args = parser.parse_args()

    srcs_lines = get_sources(args.src_path)

    # TODO: read template file
    # TODO: replace 'PROJECT_NAME' with given arg 'project'
    # TODO: insert srcs_lines list between lines 7 and 8 in template file
    # TODO: create result file with all info


if __name__ == "__main__":
    main()
