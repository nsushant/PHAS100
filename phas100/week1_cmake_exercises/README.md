# CMake exercise files: UCL PHAS0100 Week 1

## Usage instructions

```sh
$ git clone --recurse-submodules https://github.com/UCL-PHAS0100-22-23/week1_cmake_exercises.git
```
Note: Do not forget to pass the `--recurse-submodules` flag to bring in the `.devcontainer/` folder from a separate GitHub repository.

Navigate into the cloned directory i.e. `week1_cmake_exercises` either from a GUI file browser or in your terminal application and open VSCode from this top-level directory. If using the command-line, assuming that the Visual Studio Code (VSCode) text editor is in the search path for your user account on your computer, you may run

```sh
$ code .
```
to open up the contents of the folder in VSCode.

If a security dialog pops up, it is safe to indicate that you trust the author and files within the top-level folder and all subfolders therein.

Ignore the error that triggers a popup question: 
> CMakeLists.txt was not found in the root of the folder "local_exercise_repo_cmake". How would you like to proceed?

by clicking on `Don't show again`.

If the development containers extension is installed, then VSCode shall prompt you to reopen your session in a remote container. After answering `yes` in this dialog box, you may view the progress of the container being opened and configured with all necessary extensions by clicking on `show_log`. This will take a while for the very first time, since the container has to be built from the Dockerfile with the settings defined in our `devcontainer.json` specification. However, subsequent attempts to reopen the folder in a container shall be much faster.

After reopening the folder in a container, open a new terminal within VSCode, and navigate to each exercise's subdirectory to work on it. Exercise 0 is a minimal CMake example, which will be a live demo led by the instructor, which you may follow along. Subsequent exercises need to be attempted independently, however the teaching assistants and instructors shall be available to help.

