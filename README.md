GameKit
======
Welcome to GameKit, an Amazon Lumberyard kit packed full of samples to show you how to make a full game!

Setup
======

Windows:
------

### Prerequisites:

  * Have vs2015 installed (click for tutorial on how to install for Lumberyard)

  * In the setup assistant, on the Get Started tab have it look something like this:

    ![alt tag](https://brogrammersexplainlumberyard.files.wordpress.com/2017/10/tut_setup_1_11_compile_options.png)

  * Then, in the install Software tab have everything installed, including Audiokinetic Wwise LTX Authoring Tool, FFmpeg, and SpeedTree for Lumberyard. (click on each name to be redirected to an install tutorial)

  * On the Install required SDKs tab, have everything installed.

  * On the Install optional SDKs tab, have FFmpeg (click for tutorial) installed and Clang installed. If you have any of the other software listed, install that too.

  * Finally, on the Install Plugins tab, ensure RC Shell commands is installed and if you have any of the other software listed, install that too.

### Installation:
1. Make a new folder in your dev folder called `GameKit` and then download these files in this repo into your `GameKit` folder.
2. Then, Open the Project Configurator and set the `GameKit` project as default.
3. Now, open a command prompt window and navigate to your `dev` folder.
4. Enter this command: `lmbr_waf configure`
5. Once that command finishes enter this command: `lmbr_waf build_win_x64_vs2015_profile -p game --progress`
6. Once that's done (will take a while). You're ready to begin! Launch the editor and dive into our documentation or just play around with the samples!
