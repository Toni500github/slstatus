Personal slstatus build
==========================
![image](https://user-images.githubusercontent.com/88878648/233835126-99284960-c52b-4ec7-bb1e-2d0ccb3be3e2.png)
![image](https://user-images.githubusercontent.com/88878648/233835353-17e18deb-4cc0-4c5a-aa2f-c7d41b557cce.png)

Requirements
------------
Needs dwm to have the [status2d](https://dwm.suckless.org/patches/status2d/) patch (since i need systray, i used the status2d-systray patch, on the same page)

[powerline fonts](https://github.com/powerline/fonts) (optional)

Left and right arrows
------------
This build provides the 2 version of the status. as you can see on the screenshots, one has the arrow on the left (more clean) and the other has the arrows on the right

Choose which version
------------
In this build we have `config.def.h` and `config-left.def.h`. As the name suggest, one config it's for the right arrows and the other for left.
if you want to choose whihch config to use, just modify the Makefile

```make
config.h: config-left.def.h
	cp config-left.def.h $@
```
here just modify which .def.h you want to use when compiling (by default i prefer with left arrows)

### Remember to delete `config.h` each time you modify the Makefile
