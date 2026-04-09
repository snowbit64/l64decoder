// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadVehicle
// Entry Point: 00717724
// Size: 3716 bytes
// Signature: undefined __thiscall loadVehicle(TrafficSystem * this, char * param_1, uint param_2, basic_string * param_3)


/* TrafficSystem::loadVehicle(char const*, unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

bool __thiscall
TrafficSystem::loadVehicle(TrafficSystem *this,char *param_1,uint param_2,basic_string *param_3)

{
  basic_string **this_00;
  uint uVar1;
  TrafficSystem TVar2;
  long lVar3;
  basic_string *pbVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  char *pcVar11;
  char *__src;
  long lVar12;
  basic_string *pbVar13;
  ulong uVar14;
  uint *puVar15;
  basic_string *pbVar16;
  undefined4 *puVar17;
  uint uVar18;
  ulong uVar19;
  float fVar20;
  undefined4 uVar21;
  ulong local_380;
  undefined8 uStack_378;
  char *local_370;
  ulong local_368;
  undefined8 uStack_360;
  char *local_358;
  bool abStack_34c [4];
  undefined auStack_348 [128];
  char acStack_2c8 [256];
  char acStack_1c8 [128];
  DomXMLFile aDStack_148 [216];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar19 = (ulong)param_2;
  DomXMLFile::DomXMLFile(aDStack_148);
                    /* try { // try from 00717768 to 00717777 has its CatchHandler @ 007185f0 */
  uVar8 = DomXMLFile::loadFromFile(aDStack_148,param_1,true);
  if ((uVar8 & 1) == 0) {
    bVar5 = false;
  }
  else {
                    /* try { // try from 0071777c to 0071778f has its CatchHandler @ 007185c0 */
    pcVar9 = (char *)DomXMLFile::getValue(aDStack_148,"vehicle.assets#filename",false);
    if (pcVar9 != (char *)0x0) {
                    /* try { // try from 00717798 to 007177df has its CatchHandler @ 007185d4 */
      fVar20 = (float)Properties::getFloat((Properties *)aDStack_148,"vehicle#topSpeed",0.0);
      *(float *)(this + uVar19 * 0x310 + 0x1328) = fVar20 * 0.0002777778;
      fVar20 = (float)Properties::getFloat((Properties *)aDStack_148,"vehicle#accel",0.0);
      local_368 = 0;
      uStack_360 = 0;
      local_358 = (char *)0x0;
      *(float *)(this + uVar19 * 0x310 + 0x132c) = fVar20 * 1e-06;
      if (*pcVar9 == '$') {
                    /* try { // try from 00717818 to 00717893 has its CatchHandler @ 007185ec */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_368);
      }
      else {
        PathUtil::buildAbsolutePath(param_3,pcVar9,(basic_string *)&local_368);
      }
      pcVar11 = (char *)((ulong)&local_368 | 1);
      if ((local_368 & 1) != 0) {
        pcVar11 = local_358;
      }
      I3DAssetPtr::loadI3DAsync
                ((I3DAssetPtr *)(this + uVar19 * 0x310 + 0x1208),pcVar11,false,false,
                 (MeshSplitFileState *)0x0,false,true,(Loader *)(this + uVar19 * 0x310 + 0x1200));
      uVar21 = Properties::getFloat
                         ((Properties *)aDStack_148,"vehicle.assets#roadSideLimitDistanceFromFront",
                          0.5);
      *(undefined4 *)(this + uVar19 * 0x310 + 0x1338) = uVar21;
                    /* try { // try from 007178a0 to 007178cf has its CatchHandler @ 007185d0 */
      lVar10 = DomXMLFile::getValue(aDStack_148,"vehicle.assets#driverNode",false);
      if (lVar10 != 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)(this + uVar19 * 0x310 + 0x1370));
      }
                    /* try { // try from 007178d0 to 00717993 has its CatchHandler @ 00718600 */
      lVar10 = DomXMLFile::getValue(aDStack_148,"vehicle.assets.licensePlates#frontNode",false);
      if (lVar10 != 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)(this + uVar19 * 0x310 + 0x1258));
      }
      lVar10 = DomXMLFile::getValue(aDStack_148,"vehicle.assets.licensePlates#backNode",false);
      if (lVar10 != 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)(this + uVar19 * 0x310 + 0x1270));
      }
      lVar10 = DomXMLFile::getValue(aDStack_148,"vehicle.assets.collisionGeometry#node",false);
      if (lVar10 != 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)(this + uVar19 * 0x310 + 0x1340));
      }
      uVar21 = Properties::getFloat
                         ((Properties *)aDStack_148,"vehicle.assets.collisionGeometry#width",2.0);
      *(undefined4 *)(this + uVar19 * 0x310 + 0x1330) = uVar21;
      uVar21 = Properties::getFloat
                         ((Properties *)aDStack_148,"vehicle.assets.collisionGeometry#height",2.0);
      *(undefined4 *)(this + uVar19 * 0x310 + 0x1334) = uVar21;
                    /* try { // try from 007179a0 to 007179af has its CatchHandler @ 007185e8 */
      uVar6 = DomXMLFile::getNumElements(aDStack_148,"vehicle.assets.wheels.wheel");
      if (5 < uVar6) {
        uVar6 = 6;
      }
      *(undefined4 *)(this + uVar19 * 0x310 + 0x1324) = 0;
      if (uVar6 != 0) {
        puVar15 = (uint *)(this + uVar19 * 0x310 + 0x1324);
        uVar18 = 0;
        do {
                    /* try { // try from 00717a0c to 00717a1f has its CatchHandler @ 00718618 */
          FUN_00717680(acStack_2c8,0x100,"vehicle.assets.wheels.wheel(%u)#yRotNode",uVar18);
                    /* try { // try from 00717a20 to 00717a47 has its CatchHandler @ 00718628 */
          pcVar11 = (char *)DomXMLFile::getValue(aDStack_148,acStack_2c8,false);
          FUN_00717680(acStack_2c8,0x100,"vehicle.assets.wheels.wheel(%u)#xRotNode",uVar18);
                    /* try { // try from 00717a48 to 00717a57 has its CatchHandler @ 00718614 */
          __src = (char *)DomXMLFile::getValue(aDStack_148,acStack_2c8,false);
          if ((pcVar11 != (char *)0x0) && (__src != (char *)0x0)) {
            uVar8 = (ulong)*puVar15;
            lVar10 = uVar8 * 8 + uVar19 * 0x310;
            strncpy((char *)(this + lVar10 + 0x12c4),pcVar11,8);
            this[lVar10 + 0x12cb] = (TrafficSystem)0x0;
            strncpy((char *)(this + lVar10 + 0x1294),__src,8);
            this[lVar10 + 0x129b] = (TrafficSystem)0x0;
                    /* try { // try from 00717aa4 to 00717b07 has its CatchHandler @ 00718624 */
            FUN_00717680(acStack_2c8,0x100,"vehicle.assets.wheels.wheel(%u)#radius",uVar18);
            uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_2c8,abStack_34c);
            *(undefined4 *)(this + uVar8 * 4 + uVar19 * 0x310 + 0x12f4) = uVar21;
            FUN_00717680(acStack_2c8,0x100,"vehicle.assets.wheels.wheel(%u)#distToRotCenter",uVar18)
            ;
            uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_2c8,abStack_34c);
            *(undefined4 *)(this + uVar8 * 4 + uVar19 * 0x310 + 0x130c) = uVar21;
            *puVar15 = *puVar15 + 1;
          }
          uVar18 = uVar18 + 1;
        } while (uVar6 != uVar18);
      }
                    /* try { // try from 00717b2c to 00717b5f has its CatchHandler @ 007185e8 */
      lVar10 = DomXMLFile::getValue(aDStack_148,"vehicle.assets.lights.light#node",false);
      if (lVar10 != 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)(this + uVar19 * 0x310 + 0x1358));
      }
                    /* try { // try from 00717b60 to 00717ba3 has its CatchHandler @ 007185e4 */
      lVar10 = DomXMLFile::getValue(aDStack_148,"vehicle.assets.lights.light#decoration",false);
      if (lVar10 != 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)(this + uVar19 * 0x310 + 5000));
      }
      uVar21 = Properties::getFloat
                         ((Properties *)aDStack_148,"vehicle.assets.lights.light#intensity",0.0);
      TVar2 = this[0xb4];
      *(undefined4 *)(this + uVar19 * 0x310 + 0x13a0) = uVar21;
      if (TVar2 == (TrafficSystem)0x0) {
        lVar10 = DomXMLFile::getValue(aDStack_148,"vehicle.assets.lights.light#highProfile",false);
      }
      else {
                    /* try { // try from 00717bbc to 00717c07 has its CatchHandler @ 007185cc */
        lVar10 = DomXMLFile::getValue(aDStack_148,"vehicle.assets.lights.light#lowProfile",false);
      }
      if (lVar10 != 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)(this + uVar19 * 0x310 + 0x13a8));
      }
                    /* try { // try from 00717c08 to 00717c6b has its CatchHandler @ 007185f8 */
      lVar10 = DomXMLFile::getValue(aDStack_148,"vehicle.assets.lights.brake#decoration",false);
      if (lVar10 != 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)(this + uVar19 * 0x310 + 0x13c0));
      }
      uVar21 = Properties::getFloat
                         ((Properties *)aDStack_148,"vehicle.assets.lights.brake#intensity",0.0);
      *(undefined4 *)(this + uVar19 * 0x310 + 0x13d8) = uVar21;
      uVar21 = Properties::getFloat
                         ((Properties *)aDStack_148,"vehicle.assets.lights.brake#regularIntensity",
                          0.0);
      *(undefined4 *)(this + uVar19 * 0x310 + 0x13dc) = uVar21;
                    /* try { // try from 00717c78 to 00717cbb has its CatchHandler @ 007185e0 */
      lVar10 = DomXMLFile::getValue(aDStack_148,"vehicle.assets.lights.turnLeft#decoration",false);
      if (lVar10 != 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)(this + uVar19 * 0x310 + 0x13e0));
      }
      uVar21 = Properties::getFloat
                         ((Properties *)aDStack_148,"vehicle.assets.lights.turnLeft#intensity",0.0);
      *(undefined4 *)(this + uVar19 * 0x310 + 0x13f8) = uVar21;
                    /* try { // try from 00717cc8 to 00717d0b has its CatchHandler @ 007185dc */
      lVar10 = DomXMLFile::getValue(aDStack_148,"vehicle.assets.lights.turnRight#decoration",false);
      if (lVar10 != 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)(this + uVar19 * 0x310 + 0x1400));
      }
      uVar21 = Properties::getFloat
                         ((Properties *)aDStack_148,"vehicle.assets.lights.turnRight#intensity",0.0)
      ;
      *(undefined4 *)(this + uVar19 * 0x310 + 0x1418) = uVar21;
                    /* try { // try from 00717d18 to 00717dcb has its CatchHandler @ 007185fc */
      FUN_00717680(auStack_348,0x80,"vehicle.assets.colors");
      FUN_00717680(acStack_1c8,0x80,"%s#minDirt",auStack_348);
      uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_1c8,0.0);
      *(undefined4 *)(this + uVar19 * 0x310 + 0x1288) = uVar21;
      *(undefined4 *)(this + uVar19 * 0x98 + 0x4390) = uVar21;
      FUN_00717680(acStack_1c8,0x80,"%s#maxDirt",auStack_348);
      uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_1c8,1.0);
      *(undefined4 *)(this + uVar19 * 0x310 + 0x128c) = uVar21;
      *(undefined4 *)(this + uVar19 * 0x98 + 0x4394) = uVar21;
      FUN_00717680(acStack_1c8,0x80,"%s.colorNodes",auStack_348);
                    /* try { // try from 00717dcc to 00717e27 has its CatchHandler @ 007185d8 */
      uVar6 = DomXMLFile::getNumChildren(aDStack_148,acStack_1c8);
      uVar14 = (ulong)uVar6;
      this_00 = (basic_string **)(this + uVar19 * 0x310 + 0x1228);
      lVar10 = (long)*(basic_string **)(this + uVar19 * 0x310 + 0x1230) -
               *(long *)(this + uVar19 * 0x310 + 0x1228) >> 3;
      uVar8 = lVar10 * -0x5555555555555555;
      if (uVar14 <= uVar8) {
        if (uVar14 <= uVar8 && uVar8 - uVar14 != 0) {
          pbVar13 = (basic_string *)(*(long *)(this + uVar19 * 0x310 + 0x1228) + uVar14 * 0x18);
          pbVar16 = *(basic_string **)(this + uVar19 * 0x310 + 0x1230);
          while (pbVar4 = pbVar16, pbVar4 != pbVar13) {
            pbVar16 = pbVar4 + -6;
            if ((*(byte *)pbVar16 & 1) != 0) {
              operator_delete(*(void **)(pbVar4 + -2));
            }
          }
          *(basic_string **)(this + uVar19 * 0x310 + 0x1230) = pbVar13;
        }
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::__append((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                    *)this_00,uVar14 + lVar10 * 0x5555555555555555);
      }
      if (uVar6 != 0) {
        iVar7 = 0;
        lVar10 = 0;
        do {
                    /* try { // try from 00717ea0 to 00717eb7 has its CatchHandler @ 00718610 */
          FUN_00717680(acStack_1c8,0x80,"%s.colorNodes.colorNode(%u)#node",auStack_348,iVar7);
                    /* try { // try from 00717eb8 to 00717edb has its CatchHandler @ 00718620 */
          lVar12 = DomXMLFile::getValue(aDStack_148,acStack_1c8,false);
          if (lVar12 != 0) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((char *)((long)*this_00 + lVar10));
          }
          lVar10 = lVar10 + 0x18;
          iVar7 = iVar7 + 1;
        } while (uVar14 * 0x18 - lVar10 != 0);
      }
      puVar15 = (uint *)(this + uVar19 * 0x114 + 0xb8);
      *puVar15 = 0;
                    /* try { // try from 00717eec to 00717f03 has its CatchHandler @ 007185d8 */
      FUN_00717680(acStack_1c8,0x80,"%s.availableColors",auStack_348);
                    /* try { // try from 00717f04 to 00717f0f has its CatchHandler @ 007185c8 */
      uVar6 = DomXMLFile::getNumChildren(aDStack_148,acStack_1c8);
      if (0x10 < uVar6) {
        uVar6 = 0x11;
      }
      if (uVar6 != 0) {
        uVar18 = 0;
        do {
                    /* try { // try from 00717f68 to 00717f7f has its CatchHandler @ 0071860c */
          FUN_00717680(acStack_1c8,0x80,"%s.availableColors.color(%u)#rgb",auStack_348,uVar18);
                    /* try { // try from 00717f80 to 00717fab has its CatchHandler @ 0071861c */
          pcVar11 = (char *)DomXMLFile::getValue(aDStack_148,acStack_1c8,false);
          if (pcVar11 != (char *)0x0) {
            StringUtil::splitIntoFloats
                      (pcVar11,(float *)(this + (ulong)*puVar15 * 0x10 + uVar19 * 0x114 + 0xbc),3,
                       ' ');
            uVar1 = *puVar15;
            *(undefined4 *)(this + (ulong)uVar1 * 0x10 + uVar19 * 0x114 + 200) = 0;
            *puVar15 = uVar1 + 1;
          }
          uVar18 = uVar18 + 1;
        } while (uVar6 != uVar18);
      }
      if ((basic_string **)(this + uVar19 * 0x98 + 0x4330) != this_00) {
                    /* try { // try from 00717fd4 to 00717fd7 has its CatchHandler @ 007185c8 */
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        assign<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>
                  ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                    *)(this + uVar19 * 0x98 + 0x4330),*this_00,
                   *(basic_string **)(this + uVar19 * 0x310 + 0x1230));
      }
                    /* try { // try from 00717fd8 to 00718017 has its CatchHandler @ 007185c4 */
      pcVar11 = (char *)DomXMLFile::getValue(aDStack_148,"vehicle.assets#filenameParked",false);
      if (pcVar11 != (char *)0x0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)(this + uVar19 * 0x98 + 0x4348),
                    (basic_string *)(this + uVar19 * 0x310 + 0x1358));
        local_380 = 0;
        uStack_378 = 0;
        local_370 = (char *)0x0;
        if (*pcVar11 == '$') {
                    /* try { // try from 00718030 to 00718093 has its CatchHandler @ 007185a8 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&local_380);
        }
        else {
          PathUtil::buildAbsolutePath(param_3,pcVar11,(basic_string *)&local_380);
        }
        pcVar11 = (char *)((ulong)&local_380 | 1);
        if ((local_380 & 1) != 0) {
          pcVar11 = local_370;
        }
        I3DAssetPtr::loadI3DAsync
                  ((I3DAssetPtr *)(this + uVar19 * 0x98 + 0x4310),pcVar11,false,false,
                   (MeshSplitFileState *)0x0,false,true,(Loader *)(this + uVar19 * 0x98 + 0x4308));
        *(int *)(this + 0x4304) = *(int *)(this + 0x4304) + 1;
        if ((local_380 & 1) != 0) {
          operator_delete(local_370);
        }
      }
      *(undefined4 *)(this + uVar19 * 0x310 + 0x14c8) = 0;
      this[uVar19 * 0x310 + 0x141c] = (TrafficSystem)0x0;
                    /* try { // try from 007180cc to 007182bb has its CatchHandler @ 00718608 */
      pcVar11 = (char *)DomXMLFile::getValue
                                  (aDStack_148,"vehicle.assets.sounds.motor#filename",false);
      if (pcVar11 != (char *)0x0) {
        if (*pcVar11 == '$') {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)(this + uVar19 * 0x310 + 0x1420));
        }
        else {
          PathUtil::buildAbsolutePath
                    (param_3,pcVar11,(basic_string *)(this + uVar19 * 0x310 + 0x1420));
        }
        this[uVar19 * 0x310 + 0x141c] = (TrafficSystem)0x1;
        uVar21 = Properties::getFloat
                           ((Properties *)aDStack_148,"vehicle.assets.sounds.motor#indoorVolume",
                            abStack_34c);
        *(undefined4 *)(this + uVar19 * 0x310 + 0x1438) = uVar21;
        uVar21 = Properties::getFloat
                           ((Properties *)aDStack_148,"vehicle.assets.sounds.motor#outdoorVolume",
                            abStack_34c);
        *(undefined4 *)(this + uVar19 * 0x310 + 0x143c) = uVar21;
        uVar21 = Properties::getFloat
                           ((Properties *)aDStack_148,
                            "vehicle.assets.sounds.motor#indoorLowpassGain",abStack_34c);
        *(undefined4 *)(this + uVar19 * 0x310 + 0x1440) = uVar21;
        uVar21 = Properties::getFloat
                           ((Properties *)aDStack_148,
                            "vehicle.assets.sounds.motor#outdoorLowpassGain",abStack_34c);
        *(undefined4 *)(this + uVar19 * 0x310 + 0x1444) = uVar21;
        uVar21 = Properties::getFloat
                           ((Properties *)aDStack_148,
                            "vehicle.assets.sounds.motor#indoorLowpassCutoffFrequency",-1.0);
        *(undefined4 *)(this + uVar19 * 0x310 + 0x1448) = uVar21;
        uVar21 = Properties::getFloat
                           ((Properties *)aDStack_148,
                            "vehicle.assets.sounds.motor#indoorLowpassResonance",-1.0);
        *(undefined4 *)(this + uVar19 * 0x310 + 0x144c) = uVar21;
        uVar21 = Properties::getFloat
                           ((Properties *)aDStack_148,
                            "vehicle.assets.sounds.motor#outdoorLowpassCutoffFrequency",-1.0);
        *(undefined4 *)(this + uVar19 * 0x310 + 0x1450) = uVar21;
        uVar21 = Properties::getFloat
                           ((Properties *)aDStack_148,
                            "vehicle.assets.sounds.motor#outdoorLowpassResonance",-1.0);
        *(undefined4 *)(this + uVar19 * 0x310 + 0x1454) = uVar21;
        uVar21 = Properties::getFloat
                           ((Properties *)aDStack_148,"vehicle.assets.sounds.motor#range",
                            abStack_34c);
        *(undefined4 *)(this + uVar19 * 0x310 + 0x1458) = uVar21;
        uVar21 = Properties::getFloat
                           ((Properties *)aDStack_148,"vehicle.assets.sounds.motor#innerRange",
                            abStack_34c);
        *(undefined4 *)(this + uVar19 * 0x310 + 0x145c) = uVar21;
        uVar21 = Properties::getFloat
                           ((Properties *)aDStack_148,"vehicle.assets.sounds.motor#pitchMin",
                            abStack_34c);
        *(undefined4 *)(this + uVar19 * 0x310 + 0x1460) = uVar21;
        uVar21 = Properties::getFloat
                           ((Properties *)aDStack_148,"vehicle.assets.sounds.motor#pitchMax",
                            abStack_34c);
        *(undefined4 *)(this + uVar19 * 0x310 + 0x1464) = uVar21;
        iVar7 = DomXMLFile::getNumChildren(aDStack_148,"vehicle.assets.sounds.motor");
        *(int *)(this + uVar19 * 0x310 + 0x14c8) = iVar7;
        if (0 < iVar7) {
          uVar8 = 0;
          puVar17 = (undefined4 *)(this + uVar19 * 0x310 + 0x14a8);
          do {
                    /* try { // try from 00718308 to 00718383 has its CatchHandler @ 0071862c */
            FUN_00717680(acStack_1c8,0x80,"vehicle.assets.sounds.motor.pitch(%d)#velocity",
                         uVar8 & 0xffffffff);
            fVar20 = (float)Properties::getFloat((Properties *)aDStack_148,acStack_1c8,0.0);
            puVar17[-0x10] = fVar20 * 0.0002777778;
            FUN_00717680(acStack_1c8,0x80,"vehicle.assets.sounds.motor.pitch(%d)#pitchOffset",
                         uVar8 & 0xffffffff);
            uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_1c8,0.0);
            puVar17[-8] = uVar21;
            FUN_00717680(acStack_1c8,0x80,"vehicle.assets.sounds.motor.pitch(%d)#pitchScale",
                         uVar8 & 0xffffffff);
            uVar21 = Properties::getFloat((Properties *)aDStack_148,acStack_1c8,0.0);
            *puVar17 = uVar21;
            uVar8 = uVar8 + 1;
            puVar17 = puVar17 + 1;
          } while ((long)uVar8 < (long)*(int *)(this + uVar19 * 0x310 + 0x14c8));
        }
      }
      this[uVar19 * 0x310 + 0x14cc] = (TrafficSystem)0x0;
                    /* try { // try from 007183b0 to 0071853b has its CatchHandler @ 00718604 */
      pcVar11 = (char *)DomXMLFile::getValue
                                  (aDStack_148,"vehicle.assets.sounds.honk#filename",false);
      if (pcVar11 != (char *)0x0) {
        if (*pcVar11 == '$') {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)(this + uVar19 * 0x310 + 0x14d0));
        }
        else {
          PathUtil::buildAbsolutePath
                    (param_3,pcVar11,(basic_string *)(this + uVar19 * 0x310 + 0x14d0));
        }
        this[uVar19 * 0x310 + 0x14cc] = (TrafficSystem)0x1;
        uVar21 = Properties::getFloat
                           ((Properties *)aDStack_148,"vehicle.assets.sounds.honk#indoorVolume",
                            abStack_34c);
        *(undefined4 *)(this + uVar19 * 0x310 + 0x14e8) = uVar21;
        uVar21 = Properties::getFloat
                           ((Properties *)aDStack_148,"vehicle.assets.sounds.honk#outdoorVolume",
                            abStack_34c);
        *(undefined4 *)(this + uVar19 * 0x310 + 0x14ec) = uVar21;
        uVar21 = Properties::getFloat
                           ((Properties *)aDStack_148,"vehicle.assets.sounds.honk#indoorLowpassGain"
                            ,abStack_34c);
        *(undefined4 *)(this + uVar19 * 0x310 + 0x14f0) = uVar21;
        uVar21 = Properties::getFloat
                           ((Properties *)aDStack_148,
                            "vehicle.assets.sounds.honk#outdoorLowpassGain",abStack_34c);
        *(undefined4 *)(this + uVar19 * 0x310 + 0x14f4) = uVar21;
        uVar21 = Properties::getFloat
                           ((Properties *)aDStack_148,
                            "vehicle.assets.sounds.honk#indoorLowpassCutoffFrequency",-1.0);
        *(undefined4 *)(this + uVar19 * 0x310 + 0x14f8) = uVar21;
        uVar21 = Properties::getFloat
                           ((Properties *)aDStack_148,
                            "vehicle.assets.sounds.honk#indoorLowpassResonance",-1.0);
        *(undefined4 *)(this + uVar19 * 0x310 + 0x14fc) = uVar21;
        uVar21 = Properties::getFloat
                           ((Properties *)aDStack_148,
                            "vehicle.assets.sounds.honk#outdoorLowpassCutoffFrequency",-1.0);
        *(undefined4 *)(this + uVar19 * 0x310 + 0x1500) = uVar21;
        uVar21 = Properties::getFloat
                           ((Properties *)aDStack_148,
                            "vehicle.assets.sounds.honk#outdoorLowpassResonance",-1.0);
        *(undefined4 *)(this + uVar19 * 0x310 + 0x1504) = uVar21;
        uVar21 = Properties::getFloat
                           ((Properties *)aDStack_148,"vehicle.assets.sounds.honk#range",abStack_34c
                           );
        *(undefined4 *)(this + uVar19 * 0x310 + 0x1508) = uVar21;
        uVar21 = Properties::getFloat
                           ((Properties *)aDStack_148,"vehicle.assets.sounds.honk#innerRange",
                            abStack_34c);
        *(undefined4 *)(this + uVar19 * 0x310 + 0x150c) = uVar21;
      }
      if ((local_368 & 1) != 0) {
        operator_delete(local_358);
      }
    }
    bVar5 = pcVar9 != (char *)0x0;
  }
  DomXMLFile::~DomXMLFile(aDStack_148);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}


