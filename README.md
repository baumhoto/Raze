# Raze fork for iPadOS WIP

Be warned this is a barely working port and there is lots of stuff that doesn't work properly but it runs and can be controlled via mouse/keyboard on iPadOS.

- app doesn exit cleanly (will hang) force quit via app switcher
- keyboard text input in console and menu (e.g. savegames) doesn't work...
- the full settings menu is available but be warned that things might break.. (just delete the gzdoom.ini file in the config folder if that happens)
- gamepad support does not work
- lots of other stuff



On a Mac
- checkout repo
- install sdl2 via brew: brew install sdl2
- open xcode project in raze/raze-ios/raze-ios.xcodeproj
- adjust developemt team
- deploy to device
- start app first time (app will crash)-> because data files can not be found but now there should be a raze folder in the Files App under "On my iPad". there copy all the files from the support folder (gzdoom/support)
- afterwards add an GRP file of your choice e.g  sw.grp
- Start app again. Controlling the menu via keyboard works. Start game and use WSAD/mouse to run game. Currently saving is an issue as text input is not working.


# Welcome to Raze!

[![Build Status](https://github.com/coelckers/Raze/workflows/Continuous%20Integration/badge.svg)](https://github.com/coelckers/Raze/actions?query=workflow%3A%22Continuous+Integration%22)

## Raze is a fork of Build engine games backed by GZDoom tech and combines Duke Nukem 3D, Blood, Redneck Rampage, Shadow Warrior and Exhumed/Powerslave in a single package. It is also capable of playing Nam and WW2 GI.

The game modules are based on the following sources:

  * Duke Nukem: JFDuke, EDuke 2.0, World Tour extensions from DukeGDX and some minor fixes from EDuke32.
  * Redneck Rampage: Nuke.YKT's reconstructed source available in the Rednukem Git repo.
  * Blood: NBlood.
  * Shadow Warrior: SWP and VoidSW.
  * Exhumed/Powerslave: PCExhumed, with some enhancements inspired by PowerslaveGDX.

ZDoom, GZDoom Copyright (c) 1998-2020 ZDoom + GZDoom teams, and contributors

Doom Source (c) 1997 id Software, Raven Software, and contributors

EDuke32 and VoidSW Source (c) 2005-2020 EDuke32 teams, and contributors

NBlood source (c) 2019-2020 Nuke.YKT

PCExhumed source (c) 2019-2020 sirlemonhead, Nuke.YKT

BuildGDX (c) 2020

Duke Nukem 3D Source (c) 1996-2003 3D Realms

Shadow Warrior Source (c) 1997-2005 3D Realms

"Build Engine & Tools" Copyright (c) 1993-1997 Ken Silverman
Ken Silverman's official web site: http://www.advsys.net/ken
See the included license file "BUILDLIC.TXT" for license info.

Please see license files for individual contributor licenses

Special thanks to Coraline of the 3DGE team for allowing us to use her README.md as a template for this one.

### Non-Build code is licensed under the GPL v2
##### https://www.gnu.org/licenses/old-licenses/gpl-2.0.html
---

## How to build Raze

To build Raze, please see the [wiki](https://zdoom.org/wiki/) and see the "Programmer's Corner" on the bottom-right corner of the page to build for your platform - use this repository instead of GZDoom's.
