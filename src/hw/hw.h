/**********************************************************************
 *
 * This code is part of the MRcore projec
 * Author:  the MRCore group
 *
 * MRcore is licenced under the Common Creative License,
 * Attribution-NonCommercial-ShareAlike 3.0
 *
 * You are free:
 *   - to Share - to copy, distribute and transmit the work
 *   - to Remix - to adapt the work
 *
 * Under the following conditions:
 *   - Attribution. You must attribute the work in the manner specified
 *     by the author or licensor (but not in any way that suggests that
 *     they endorse you or your use of the work).
 *   - Noncommercial. You may not use this work for commercial purposes.
 *   - Share Alike. If you alter, transform, or build upon this work,
 *     you may distribute the resulting work only under the same or
 *     similar license to this one.
 *
 * Any of the above conditions can be waived if you get permission
 * from the copyright holder.  Nothing in this license impairs or
 * restricts the author's moral rights.
 *
 * It is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied 
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE.  
 **********************************************************************/

#ifndef __HARDWARE_H_
#define __HARDWARE_H_

#include "./mobilerobot.h"
#include "./lasersensor/lasersensorsim.h"
#include "./lasersensor/lasersensorclient.h"
#include "./lasersensor/lasersensorserver.h"

#include "./lasersensor3d.h"
#include "./lasersensor3d/lasersensor3dsim.h"
#include "./lasersensor3d/lasersensor3dclient.h"
#include "./lasersensor3d/lasersensor3dserver.h"

#include "./wheeledbase/wheeledbasesim.h"
#include "./wheeledbase/wheeledbasefile.h"
#include "./wheeledbase/wheeledbaseclient.h"
#include "./wheeledbase/wheeledbaseserver.h"

#include "./quadrotor/quadrotorsim.h"
#include "./quadrotor/quadrotorclient.h"
#include "./quadrotor/quadrotorserver.h"

#include "./kinect/kinectsim.h"
#include "./kinect/kinectclient.h"
#include "./kinect/kinectserver.h"


//MRGROUP SPECIFIC HW SIMULATION
#include "./pioneer3at/pioneer3atsim.h"
#include "./lms200/lms200sim.h"
#include "./lms100/lms100sim.h"
#include "./powercube70/powercube70sim.h"
#include "./nemolasersensor3d/nemolasersensor3dsim.h"

#include "./voicetts/voicettssim.h"
#include "./voicetts/voicettsclient.h"
#include "./voicetts/voicettsserver.h"

//INDUSTRIAL ROBOTS
#include "./adeptone/adeptonesim.h"
#include "./aseairb2000/aseairb2000sim.h"
#include "./puma560/puma560sim.h"


#endif