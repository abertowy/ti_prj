# TODO:
#
# 1. Python:
#   createMakefile.py script gets two arguments: --project (set the project name) and --src-path (set the search path for all src files).
#   Script should expand template file with project name and src files list, and write it to the result file.
#   Tasks:
#   - read template file;
#   - replace 'PROJECT_NAME' with given arg 'project';
#   - insert srcs_lines list between lines 7 and 8 in template file;
#   - create result file with all info;
#   - in get_sources function: collect all src files under the given path and return srcs list.
#
# 2. Ansible:
#   Create 'build-project' role. Role should include tasks for Linux/Windows hosts. Pass specified vars to the role in run/main.yaml playbook.
#   Tasks:
#   - roles/build-project/tasks/main.yaml:
#       - include tasks from windows.yaml for Windows hosts only;
#       - include tasks from linux.yaml for Linux hosts only;
#   - roles/build-project/tasks/linux.yaml:
#       - add task that creates CMakeLists for the project via python script 'createMakefile.py';
#       - add task that builds project via CMake in 'build' dir;
#   - roles/build-project/tasks/windows.yaml:
#       - add task that creates CMakeLists for the project via python script 'createMakefile.py';
#       - add task that builds project via CMake in 'build' dir;
#   - playbooks/run/main.yaml:
#       - pass vars to the role: 'project_path', 'project_name', 'pkg_name'.
#
# 3. C++:
#   Tasks:
#   - create CMakeLists.txt via createMakefile.py script;
#   - build application via CMake;
#   - explain output results;
#   - fix memory allocation issue.
