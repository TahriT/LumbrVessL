GameDevVessL for Amazon Lumberyard
======
Welcome to GameDevVessL, an Amazon Lumberyard kit!

Checkout the [wiki](../../wiki/) on Github for tutorial documents and useful links

Setup
======

Windows:
------

### Prerequisites:
---

  * Install Lumberyard (we strongly recommend from Github ([Mostly up to date tutorial here](https://lumberyardtutor.me/2017/10/11/getting-started-with-lumberyard-1-11-and-c/), even if you have to wait a few days after the announcement of a new update to use it)

  * Have [vs2017](../wiki/VS2017-Setup) installed (click for tutorial on how to install for Lumberyard)

  * In the setup assistant, on the Get Started tab have it look something like this:

    ![alt tag](https://brogrammersexplainlumberyard.files.wordpress.com/2017/10/tut_setup_1_11_compile_options.png)

  * Then, in the install Software tab have everything installed, including [Audiokinetic Wwise LTX Authoring Tool](../wiki/Audiokinetic-Wwise-LTX-Authoring-Tool-Setup), [FFmpeg](../wiki/FFmpeg-Setup), and [SpeedTree for Lumberyard](../wiki/SpeedTree-8-for-Lumberyard-Setup). (click on each name to be redirected to an install tutorial)

  * On the Install required SDKs tab, have everything installed.

  * On the Install optional SDKs tab, have [FFmpeg](../wiki/FFmpeg-Setup) (click for tutorial) installed and Clang installed. If you have any of the other software listed, install that too.

  * On the Install Plugins tab, ensure RC Shell commands is installed and if you have any of the other software listed, install that too.

  * Go [Here](https://github.com/SRugina/Playground-Gem) and download the contents into a new folder called "Playground" in your `dev\Gems\` folder.

### Installation:
---

1. Make a new folder in your dev folder called `LumbrVessL` and then download these files in this repo into your `LumbrVessL` folder.
2. Then, Open the Project Configurator and set the `LumbrVessL` project as default.
3. Now, open a command prompt window and navigate to your `dev` folder.
4. Enter this command: `lmbr_waf configure`
5. Once that command finishes enter this command: `lmbr_waf build_win_x64_vs2017_profile -p all --progress`
6. Once that's done (will take a while, 2hours usually). You're ready to begin! Launch the editor and have a look around!
7. We'd recommend you start with the [VS2017 Setup](../wiki/VS2017-Setup-&-Use) tutorial in the wiki before doing anything else after installing.
