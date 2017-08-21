/*!
 * @file DFRobot_IIS.h
 * @brief DFRobot's IIS Module
 * @n IIS Module for record and play the record
 *
 * @copyright	[DFRobot](http://www.dfrobot.com), 2017
 * @copyright	GNU Lesser General Public License
 *
 * @author [Zhangjiawei<jiawei.zhang@dfrobot.com>]
 * @version  V1.0
 * @date  2017-8-1
 */

#include <Wire.h>
#include "DFRobot_IIS.h"

DFRobot_IIS iis;

void setup() {
  Serial.begin(115200);
  iis.setVolume(50);                    // Volume from 0 to 99
  iis.init(AUDIO);                      // Init Audio mod and SD card
  iis.recordSound("/sdcard/test.WAV");  // Press user key to start and stop record 
  iis.init(AUDIO);                      // Init Audio mod and SD card
  iis.playMusic("/sdcard/test.WAV");    // Press user key to play and stop play your record
   delay(500);
}

void loop() {
  delay(500);
}
