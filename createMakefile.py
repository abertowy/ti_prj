import sys, os
import argparse
from pathlib import Path


TEMPLATE_FILE = "CMakeLists.template"
RESULT_FILE = "CMakeLists.txt"


def get_sources(path):
    sources = []
    for root, dirs, files in os.walk(path):
        sources = [path + "/" + file + "\n" for file in files]
    print(sources)
    return sources


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--project", required=True, help = "Set project name.")
    parser.add_argument("--src-path", required=True, help = "Set the search path for all src files.")
    args = parser.parse_args()

    srcs_lines = get_sources(args.src_path)

    with open(TEMPLATE_FILE) as f:
        text = f.readlines()

    text = [line.replace("PROJECT_NAME", args.project) for line in text]
    text = text[:7] + srcs_lines + text[7:]

    with (open(os.path.join(os.getcwd(), RESULT_FILE), 'w')) as f:
        f.writelines(text)


if __name__ == "__main__":
    main()
