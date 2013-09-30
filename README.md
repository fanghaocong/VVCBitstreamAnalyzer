Gitl HEVC Analyzer
==================

[![Build Status](https://magnum.travis-ci.com/lheric/GitlHEVCAnalyzer.png?token=sr6pzQtq5MTKBqgLtNnz&branch=master)](https://magnum.travis-ci.com/lheric/GitlHEVCAnalyzer)

Gitl HEVC Analyzer is a tool for bitstream analysis for HEVC.

It is released under Apache License 2.0. In addition, it's **NOT for commercial use**. If you want to use it for commercial purpose, please contact us. If you are not using it to develop weapons, produce or sell illegal drugs, and if you are not a terrorist, we will give your a commercial lisence for **free**.

If you are using it in academic institution, you can let us know and we will be happy to add you to the partner list.

Looking for binary?
Windows (32/64 bit) / Linux	(64 bit):
<a href="https://sourceforge.net/projects/gtilhevcanalyzer/">https://sourceforge.net/projects/gtilhevcanalyzer/</a>


Screenshot
==========
Windows:
![Win](https://github.com/lheric/GitlHEVCAnalyzer/blob/master/screenshots/screenshoot_win.png?raw=true)

Linux:
![Linux](https://github.com/lheric/GitlHEVCAnalyzer/blob/master/screenshots/screenshoot_linux.png?raw=true)

Features
========

Support YUV420 (8bit) bitstream.

For historical reasons, besides formal HEVC bitstream, it also supports bitstreams generated by older HM encoders (HM-4.0 & HM-5.2).

<ul>
	<li>Custom Plugins Support</li>
    <li>Zoom In/Out Details</li>
    <li>Bitsteam Comparison (Under Development)</li> 
    <li>Predition Type Display</li>
    <li>Coding Unit (CU) Display</li>
    <li>Predition Unit (PU) Display</li>
    <li>Transform Unit (TU) Display</li>
    <li>Motion Vectors (MV) Display</li>    
</ul>

<a href="http://gitl.sysu.edu.cn">Intelligent Information Processing Lab</a> 

How To Build
============

Written in C++ with Qt5
You should get and install **Qt5.1.0 or higher**.

Linux:
```bash
git submodule update --init --recursive
git submodule update --recursive 
qmake -qt=qt5 GitlHEVCAnalyzer.pro -r "CONFIG+=Release"
make
```

Windows:
```bash
git submodule update --init --recursive
git submodule update --recursive 
qmake GitlHEVCAnalyzer.pro -r "CONFIG+=Release"
make
```

Instead of the building on the command line , Qt Creator is supported. Clone this project and its submodules, then open `GitlHEVCAnalyzer.pro` in Qt Creator.

Contact Us
============
<a href="http://gitl.sysu.edu.cn">Intelligent Information Processing Lab</a>

Sun Yat-sen University, Guangzhou, P.R.China

Author:
Huang Li (李璜)

lihuang55555@gmail.com


Supervised by Prof. Hongyang CHAO

Hongyang Chao (朝红阳)

isschhy@mail.sysu.edu.cn

Sun Yat-sen University
