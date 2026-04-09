// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PedestrianSystem
// Entry Point: 0088f930
// Size: 13540 bytes
// Signature: undefined __thiscall PedestrianSystem(PedestrianSystem * this, char * param_1, TransformGroup * param_2, TransformGroup * param_3, TransformGroup * param_4, TransformGroup * param_5, uint param_6, uint param_7, uint param_8)


/* WARNING: Type propagation algorithm not settling */
/* PedestrianSystem::PedestrianSystem(char const*, TransformGroup*, TransformGroup*,
   TransformGroup*, TransformGroup*, unsigned int, unsigned int, unsigned int) */

void __thiscall
PedestrianSystem::PedestrianSystem
          (PedestrianSystem *this,char *param_1,TransformGroup *param_2,TransformGroup *param_3,
          TransformGroup *param_4,TransformGroup *param_5,uint param_6,uint param_7,uint param_8)

{
  float **ppfVar1;
  long *plVar2;
  PedestrianGroupData *this_00;
  undefined8 *puVar3;
  void **ppvVar4;
  PedestrianSystem *pPVar5;
  float *pfVar6;
  PedestrianSystem PVar7;
  long lVar8;
  PedestrianSystem *pPVar9;
  PedestrianSystem *pPVar10;
  byte *pbVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  size_t sVar16;
  ulong uVar17;
  char *pcVar18;
  byte *pbVar19;
  void *pvVar20;
  PedestrianSystem *pPVar21;
  AudioSource *this_01;
  basic_string *pbVar22;
  void *pvVar23;
  UpdateManager *this_02;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined4 *puVar24;
  PedestrianSystem *pPVar25;
  long *******ppppppplVar26;
  byte *pbVar27;
  long ********pppppppplVar28;
  float *pfVar29;
  ulong uVar30;
  byte *pbVar31;
  long ********pppppppplVar32;
  PedestrianSystem *__s1;
  long lVar33;
  SimulatedPedestrian *this_03;
  long ********pppppppplVar34;
  void *pvVar35;
  ulong uVar36;
  basic_string **ppbVar37;
  int iVar38;
  ulong uVar39;
  AudioSource **ppAVar40;
  int iVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  float fVar46;
  undefined auVar47 [16];
  ushort local_328;
  undefined local_326;
  void *local_318;
  undefined8 local_310;
  size_t local_308;
  void *local_300;
  undefined8 local_2f8;
  byte *local_2f0;
  void *local_2e8;
  undefined8 local_2e0;
  byte *local_2d8;
  PedestrianSystem *local_2d0;
  long ********local_2c8;
  long ********local_2c0;
  long local_2b8;
  long ********local_2b0;
  long ********local_2a8;
  long local_2a0;
  ulong local_298;
  undefined8 uStack_290;
  void *local_288;
  undefined8 local_280;
  size_t local_278;
  void *local_270;
  char acStack_268 [256];
  DomXMLFile aDStack_168 [216];
  long local_90;
  
  lVar8 = tpidr_el0;
  local_90 = *(long *)(lVar8 + 0x28);
  Entity::Entity((Entity *)this,"PedestrianSystem",true);
  this[0x28] = (PedestrianSystem)0x0;
  *(undefined ***)(this + 0x20) = &PTR__PedestrianSystem_00fdd1b0;
  *(undefined ***)this = &PTR__PedestrianSystem_00fdd180;
  *(undefined ***)(this + 0x30) = &PTR__PedestrianSystem_00fdd1d8;
                    /* try { // try from 0088f9c4 to 0088f9cb has its CatchHandler @ 00892ec8 */
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0x38));
                    /* try { // try from 0088f9d0 to 0088fb27 has its CatchHandler @ 00893034 */
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0xb8));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0x138));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0x1b8));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0x238));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0x2b8));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0x338));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0x3b8));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0x438));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0x4b8));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0x538));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0x5b8));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0x638));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0x6b8));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0x738));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0x7b8));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0x838));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0x8b8));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0x938));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0x9b8));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0xa38));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0xab8));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0xb38));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 3000));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0xc38));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0xcb8));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0xd38));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0xdb8));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0xe38));
  PedestrianSpline::PedestrianSpline((PedestrianSpline *)(this + 0xeb8));
  lVar33 = 0;
  do {
                    /* try { // try from 0088fb58 to 0088fb5b has its CatchHandler @ 0089308c */
    PedestrianGroupData::PedestrianGroupData((PedestrianGroupData *)(this + lVar33 + 0xf38));
    lVar33 = lVar33 + 0xd8;
  } while (lVar33 != 0x5460);
  lVar33 = 0;
  do {
                    /* try { // try from 0088fb80 to 0088fb83 has its CatchHandler @ 00893068 */
    PedestrianData::PedestrianData((PedestrianData *)(this + lVar33 + 0x6398));
    lVar33 = lVar33 + 0x3b0;
  } while (lVar33 != 0x170c0);
  lVar33 = 0x6720;
  pPVar25 = this + 0x1d458;
  this_03 = (SimulatedPedestrian *)pPVar25;
  do {
                    /* try { // try from 0088fba0 to 0088fba7 has its CatchHandler @ 00893064 */
    SimulatedPedestrian::SimulatedPedestrian(this_03);
    this_03 = this_03 + 0x108;
    lVar33 = lVar33 + -0x108;
  } while (lVar33 != 0);
                    /* try { // try from 0088fbbc to 0088feb3 has its CatchHandler @ 008930e0 */
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23b78));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23b98));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23bb8));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23bd8));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23bf8));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23c18));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23c38));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23c58));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23c78));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23c98));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23cb8));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23cd8));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23cf8));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23d18));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23d38));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23d58));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23d78));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23d98));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23db8));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23dd8));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23df8));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23e18));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23e38));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23e58));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23e78));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23e98));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23eb8));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23ed8));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23ef8));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23f18));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23f38));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23f58));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23f78));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23f98));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23fb8));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23fd8));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x23ff8));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x24018));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x24038));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x24058));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x24078));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x24098));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x240b8));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x240d8));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x240f8));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x24118));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x24138));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x24158));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x24178));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x24198));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x241b8));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x241d8));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x241f8));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x24218));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x24238));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x24258));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x24278));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x24298));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x242b8));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x242d8));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x242f8));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x24318));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x24338));
  PedestrianAudioData::PedestrianAudioData((PedestrianAudioData *)(this + 0x24358));
  this[0x24490] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24488) = 0;
  *(undefined8 *)(this + 0x24480) = 0;
  uVar45 = NEON_fmov(0x3f800000,4);
  this[0x24388] = (PedestrianSystem)0x0;
  this[0x244c0] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24380) = 0;
  *(undefined8 *)(this + 0x24378) = 0;
  *(undefined8 *)(this + 0x244b8) = 0;
  *(undefined8 *)(this + 0x244b0) = 0;
  *(undefined8 *)(this + 0x24398) = 0;
  *(undefined8 *)(this + 0x24390) = 0;
  this[0x244f0] = (PedestrianSystem)0x0;
  this[0x243a0] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x244e8) = 0;
  *(undefined8 *)(this + 0x244e0) = 0;
  *(undefined8 *)(this + 0x243b0) = 0;
  *(undefined8 *)(this + 0x243a8) = 0;
  this[0x24520] = (PedestrianSystem)0x0;
  this[0x243b8] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24518) = 0;
  *(undefined8 *)(this + 0x24510) = 0;
  *(undefined8 *)(this + 0x243c8) = 0;
  *(undefined8 *)(this + 0x243c0) = 0;
  *(undefined8 *)(this + 0x24548) = 0;
  *(undefined8 *)(this + 0x24540) = 0;
  this[0x243d0] = (PedestrianSystem)0x0;
  this[0x24550] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x243e0) = 0;
  *(undefined8 *)(this + 0x243d8) = 0;
  this[0x24580] = (PedestrianSystem)0x0;
  this[0x243e8] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24578) = 0;
  *(undefined8 *)(this + 0x24570) = 0;
  this[0x24400] = (PedestrianSystem)0x0;
  this[0x245b0] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x243f8) = 0;
  *(undefined8 *)(this + 0x243f0) = 0;
  *(undefined8 *)(this + 0x245a8) = 0;
  *(undefined8 *)(this + 0x245a0) = 0;
  *(undefined8 *)(this + 0x24410) = 0;
  *(undefined8 *)(this + 0x24408) = 0;
  this[0x245e0] = (PedestrianSystem)0x0;
  this[0x24418] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x245d8) = 0;
  *(undefined8 *)(this + 0x245d0) = 0;
  *(undefined8 *)(this + 0x24428) = 0;
  *(undefined8 *)(this + 0x24420) = 0;
  *(undefined8 *)(this + 0x24608) = 0;
  *(undefined8 *)(this + 0x24600) = 0;
  this[0x24430] = (PedestrianSystem)0x0;
  this[0x24610] = (PedestrianSystem)0x0;
  this[0x24448] = (PedestrianSystem)0x0;
  this[0x24640] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24440) = 0;
  *(undefined8 *)(this + 0x24438) = 0;
  *(undefined8 *)(this + 0x24638) = 0;
  *(undefined8 *)(this + 0x24630) = 0;
  this[0x24460] = (PedestrianSystem)0x0;
  this[0x24670] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24458) = 0;
  *(undefined8 *)(this + 0x24450) = 0;
  *(undefined8 *)(this + 0x24668) = 0;
  *(undefined8 *)(this + 0x24660) = 0;
  *(undefined8 *)(this + 0x24470) = 0;
  *(undefined8 *)(this + 0x24468) = 0;
  this[0x246a0] = (PedestrianSystem)0x0;
  this[0x24478] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24698) = 0;
  *(undefined8 *)(this + 0x24690) = 0;
  *(undefined8 *)(this + 0x244a0) = 0;
  *(undefined8 *)(this + 0x24498) = 0;
  this[0x246d0] = (PedestrianSystem)0x0;
  this[0x244a8] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x246c8) = 0;
  *(undefined8 *)(this + 0x246c0) = 0;
  *(undefined8 *)(this + 0x244d0) = 0;
  *(undefined8 *)(this + 0x244c8) = 0;
  *(undefined8 *)(this + 0x246f8) = 0;
  *(undefined8 *)(this + 0x246f0) = 0;
  this[0x244d8] = (PedestrianSystem)0x0;
  this[0x24700] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24500) = 0;
  *(undefined8 *)(this + 0x244f8) = 0;
  this[0x24730] = (PedestrianSystem)0x0;
  this[0x24508] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24728) = 0;
  *(undefined8 *)(this + 0x24720) = 0;
  this[0x24538] = (PedestrianSystem)0x0;
  this[0x24760] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24530) = 0;
  *(undefined8 *)(this + 0x24528) = 0;
  *(undefined8 *)(this + 0x24758) = 0;
  *(undefined8 *)(this + 0x24750) = 0;
  *(undefined8 *)(this + 0x24560) = 0;
  *(undefined8 *)(this + 0x24558) = 0;
  this[0x24790] = (PedestrianSystem)0x0;
  this[0x24568] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24788) = 0;
  *(undefined8 *)(this + 0x24780) = 0;
  *(undefined8 *)(this + 0x24590) = 0;
  *(undefined8 *)(this + 0x24588) = 0;
  *(undefined8 *)(this + 0x247b8) = 0;
  *(undefined8 *)(this + 0x247b0) = 0;
  this[0x24598] = (PedestrianSystem)0x0;
  this[0x247c0] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x245c0) = 0;
  *(undefined8 *)(this + 0x245b8) = 0;
  this[0x247f0] = (PedestrianSystem)0x0;
  this[0x245c8] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x247e8) = 0;
  *(undefined8 *)(this + 0x247e0) = 0;
  *(undefined8 *)(this + 0x245f0) = 0;
  *(undefined8 *)(this + 0x245e8) = 0;
  this[0x24820] = (PedestrianSystem)0x0;
  this[0x245f8] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24818) = 0;
  *(undefined8 *)(this + 0x24810) = 0;
  this[0x24628] = (PedestrianSystem)0x0;
  this[0x24850] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24620) = 0;
  *(undefined8 *)(this + 0x24618) = 0;
  *(undefined8 *)(this + 0x24848) = 0;
  *(undefined8 *)(this + 0x24840) = 0;
  *(undefined8 *)(this + 0x24650) = 0;
  *(undefined8 *)(this + 0x24648) = 0;
  this[0x24880] = (PedestrianSystem)0x0;
  this[0x24658] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24878) = 0;
  *(undefined8 *)(this + 0x24870) = 0;
  *(undefined8 *)(this + 0x24680) = 0;
  *(undefined8 *)(this + 0x24678) = 0;
  *(undefined8 *)(this + 0x248a8) = 0;
  *(undefined8 *)(this + 0x248a0) = 0;
  this[0x24688] = (PedestrianSystem)0x0;
  this[0x248b0] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x246b0) = 0;
  *(undefined8 *)(this + 0x246a8) = 0;
  this[0x248e0] = (PedestrianSystem)0x0;
  this[0x246b8] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x248d8) = 0;
  *(undefined8 *)(this + 0x248d0) = 0;
  this[0x246e8] = (PedestrianSystem)0x0;
  this[0x24910] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x246e0) = 0;
  *(undefined8 *)(this + 0x246d8) = 0;
  *(undefined8 *)(this + 0x24908) = 0;
  *(undefined8 *)(this + 0x24900) = 0;
  *(undefined8 *)(this + 0x24710) = 0;
  *(undefined8 *)(this + 0x24708) = 0;
  this[0x24940] = (PedestrianSystem)0x0;
  this[0x24718] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24938) = 0;
  *(undefined8 *)(this + 0x24930) = 0;
  *(undefined8 *)(this + 0x24740) = 0;
  *(undefined8 *)(this + 0x24738) = 0;
  *(undefined8 *)(this + 0x24968) = 0;
  *(undefined8 *)(this + 0x24960) = 0;
  this[0x24748] = (PedestrianSystem)0x0;
  this[0x24970] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24770) = 0;
  *(undefined8 *)(this + 0x24768) = 0;
  this[0x249a0] = (PedestrianSystem)0x0;
  this[0x24778] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24998) = 0;
  *(undefined8 *)(this + 0x24990) = 0;
  *(undefined8 *)(this + 0x247a0) = 0;
  *(undefined8 *)(this + 0x24798) = 0;
  this[0x249d0] = (PedestrianSystem)0x0;
  this[0x247a8] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x249c8) = 0;
  *(undefined8 *)(this + 0x249c0) = 0;
  this[0x247d8] = (PedestrianSystem)0x0;
  this[0x24a00] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x247d0) = 0;
  *(undefined8 *)(this + 0x247c8) = 0;
  *(undefined8 *)(this + 0x249f8) = 0;
  *(undefined8 *)(this + 150000) = 0;
  *(undefined8 *)(this + 0x24800) = 0;
  *(undefined8 *)(this + 0x247f8) = 0;
  this[0x24a30] = (PedestrianSystem)0x0;
  this[0x24808] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24a28) = 0;
  *(undefined8 *)(this + 0x24a20) = 0;
  *(undefined8 *)(this + 0x24830) = 0;
  *(undefined8 *)(this + 0x24828) = 0;
  *(undefined8 *)(this + 0x24a58) = 0;
  *(undefined8 *)(this + 0x24a50) = 0;
  this[0x24838] = (PedestrianSystem)0x0;
  this[0x24a60] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24860) = 0;
  *(undefined8 *)(this + 0x24858) = 0;
  this[0x24a90] = (PedestrianSystem)0x0;
  this[0x24868] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24a88) = 0;
  *(undefined8 *)(this + 0x24a80) = 0;
  this[0x24898] = (PedestrianSystem)0x0;
  this[0x24ac0] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24890) = 0;
  *(undefined8 *)(this + 0x24888) = 0;
  *(undefined8 *)(this + 0x24ab8) = 0;
  *(undefined8 *)(this + 0x24ab0) = 0;
  *(undefined8 *)(this + 0x248c0) = 0;
  *(undefined8 *)(this + 0x248b8) = 0;
  this[0x24af0] = (PedestrianSystem)0x0;
  this[0x248c8] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24ae8) = 0;
  *(undefined8 *)(this + 0x24ae0) = 0;
  *(undefined8 *)(this + 0x248f0) = 0;
  *(undefined8 *)(this + 0x248e8) = 0;
  *(undefined8 *)(this + 0x24b18) = 0;
  *(undefined8 *)(this + 0x24b10) = 0;
  this[0x248f8] = (PedestrianSystem)0x0;
  this[0x24b20] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24920) = 0;
  *(undefined8 *)(this + 0x24918) = 0;
  this[0x24b50] = (PedestrianSystem)0x0;
  this[0x24928] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24b48) = 0;
  *(undefined8 *)(this + 0x24b40) = 0;
  *(undefined8 *)(this + 0x24950) = 0;
  *(undefined8 *)(this + 0x24948) = 0;
  this[0x24b80] = (PedestrianSystem)0x0;
  this[0x24958] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24b78) = 0;
  *(undefined8 *)(this + 0x24b70) = 0;
  this[0x24988] = (PedestrianSystem)0x0;
  this[0x24bb0] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24980) = 0;
  *(undefined8 *)(this + 0x24978) = 0;
  *(undefined8 *)(this + 0x24ba8) = 0;
  *(undefined8 *)(this + 0x24ba0) = 0;
  *(undefined8 *)(this + 0x249b0) = 0;
  *(undefined8 *)(this + 0x249a8) = 0;
  this[0x24be0] = (PedestrianSystem)0x0;
  this[0x249b8] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24bd8) = 0;
  *(undefined8 *)(this + 0x24bd0) = 0;
  *(undefined8 *)(this + 0x249e0) = 0;
  *(undefined8 *)(this + 0x249d8) = 0;
  *(undefined8 *)(this + 0x24c08) = 0;
  *(undefined8 *)(this + 0x24c00) = 0;
  this[0x249e8] = (PedestrianSystem)0x0;
  this[0x24c10] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24a10) = 0;
  *(undefined8 *)(this + 0x24a08) = 0;
  this[0x24c40] = (PedestrianSystem)0x0;
  this[0x24a18] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24c38) = 0;
  *(undefined8 *)(this + 0x24c30) = 0;
  this[0x24a48] = (PedestrianSystem)0x0;
  this[0x24c70] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24a40) = 0;
  *(undefined8 *)(this + 0x24a38) = 0;
  *(undefined8 *)(this + 0x24c68) = 0;
  *(undefined8 *)(this + 0x24c60) = 0;
  *(undefined8 *)(this + 0x24a70) = 0;
  *(undefined8 *)(this + 0x24a68) = 0;
  this[0x24ca0] = (PedestrianSystem)0x0;
  this[0x24a78] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24c98) = 0;
  *(undefined8 *)(this + 0x24c90) = 0;
  *(undefined8 *)(this + 0x24aa0) = 0;
  *(undefined8 *)(this + 0x24a98) = 0;
  *(undefined8 *)(this + 0x24cc8) = 0;
  *(undefined8 *)(this + 0x24cc0) = 0;
  this[0x24aa8] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24ad0) = 0;
  *(undefined8 *)(this + 0x24ac8) = 0;
  this[0x24ad8] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24de8) = 0;
  *(undefined8 *)(this + 0x24de0) = 0;
  *(undefined8 *)(this + 0x24df8) = 0;
  *(undefined8 *)(this + 0x24df0) = 0;
  *(undefined8 *)(this + 0x24e08) = 0;
  *(undefined8 *)(this + 0x24e00) = 0;
  *(undefined8 *)(this + 0x24e18) = 0;
  *(undefined8 *)(this + 0x24e10) = 0;
  *(undefined8 *)(this + 0x24e20) = 0;
  *(undefined8 *)(this + 0x24b00) = 0;
  *(undefined8 *)(this + 0x24af8) = 0;
  this[0x24b08] = (PedestrianSystem)0x0;
  this[0x24b38] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24ed0) = 0;
  *(undefined8 *)(this + 0x24eb8) = 0;
  *(undefined8 *)(this + 0x24eb0) = 0;
  *(undefined8 *)(this + 0x24ec8) = 0;
  *(undefined8 *)(this + 0x24ec0) = 0;
  *(undefined8 *)(this + 0x24e98) = 0;
  *(undefined8 *)(this + 0x24e90) = 0;
  *(undefined8 *)(this + 0x24ea8) = 0;
  *(undefined8 *)(this + 0x24ea0) = 0;
  *(undefined8 *)(this + 0x24b30) = 0;
  *(undefined8 *)(this + 0x24b28) = 0;
  *(undefined8 *)(this + 0x24b60) = 0;
  *(undefined8 *)(this + 0x24b58) = 0;
  this[0x24b68] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24f80) = 0;
  *(undefined8 *)(this + 0x24f68) = 0;
  *(undefined8 *)(this + 0x24f60) = 0;
  *(undefined8 *)(this + 0x24f78) = 0;
  *(undefined8 *)(this + 0x24f70) = 0;
  *(undefined8 *)(this + 0x24f48) = 0;
  *(undefined8 *)(this + 0x24f40) = 0;
  *(undefined8 *)(this + 0x24f58) = 0;
  *(undefined8 *)(this + 0x24f50) = 0;
  *(undefined8 *)(this + 0x24b90) = 0;
  *(undefined8 *)(this + 0x24b88) = 0;
  this[0x24b98] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24bc0) = 0;
  *(undefined8 *)(this + 0x24bb8) = 0;
  *(undefined8 *)(this + 0x25030) = 0;
  *(undefined8 *)(this + 0x25018) = 0;
  *(undefined8 *)(this + 0x25010) = 0;
  *(undefined8 *)(this + 0x25028) = 0;
  *(undefined8 *)(this + 0x25020) = 0;
  *(undefined8 *)(this + 0x24ff8) = 0;
  *(undefined8 *)(this + 0x24ff0) = 0;
  *(undefined8 *)(this + 0x25008) = 0;
  *(undefined8 *)(this + 0x25000) = 0;
  this[0x24bc8] = (PedestrianSystem)0x0;
  this[0x24bf8] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24bf0) = 0;
  *(undefined8 *)(this + 0x24be8) = 0;
  *(undefined8 *)(this + 0x250e0) = 0;
  *(undefined8 *)(this + 0x250c8) = 0;
  *(undefined8 *)(this + 0x250c0) = 0;
  *(undefined8 *)(this + 0x250d8) = 0;
  *(undefined8 *)(this + 0x250d0) = 0;
  *(undefined8 *)(this + 0x250a8) = 0;
  *(undefined8 *)(this + 0x250a0) = 0;
  *(undefined8 *)(this + 0x250b8) = 0;
  *(undefined8 *)(this + 0x250b0) = 0;
  *(undefined8 *)(this + 0x24c20) = 0;
  *(undefined8 *)(this + 0x24c18) = 0;
  this[0x24c28] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24c50) = 0;
  *(undefined8 *)(this + 0x24c48) = 0;
  *(undefined8 *)(this + 0x25190) = 0;
  *(undefined8 *)(this + 0x25178) = 0;
  *(undefined8 *)(this + 0x25170) = 0;
  *(undefined8 *)(this + 0x25188) = 0;
  *(undefined8 *)(this + 0x25180) = 0;
  *(undefined8 *)(this + 0x25158) = 0;
  *(undefined8 *)(this + 0x25150) = 0;
  *(undefined8 *)(this + 0x25168) = 0;
  *(undefined8 *)(this + 0x25160) = 0;
  this[0x24c58] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x24c80) = 0;
  *(undefined8 *)(this + 0x24c78) = 0;
  this[0x24c88] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x25240) = 0;
  *(undefined8 *)(this + 0x25228) = 0;
  *(undefined8 *)(this + 0x25220) = 0;
  *(undefined8 *)(this + 0x25238) = 0;
  *(undefined8 *)(this + 0x25230) = 0;
  *(undefined8 *)(this + 0x25208) = 0;
  *(undefined8 *)(this + 0x25200) = 0;
  *(undefined8 *)(this + 0x25218) = 0;
  *(undefined8 *)(this + 0x25210) = 0;
  *(undefined8 *)(this + 0x24cb0) = 0;
  *(undefined8 *)(this + 0x24ca8) = 0;
  this[0x24cb8] = (PedestrianSystem)0x0;
  this[0x24cd0] = (PedestrianSystem)0x0;
  *(undefined8 *)(this + 0x252f0) = 0;
  *(undefined8 *)(this + 0x252d8) = 0;
  *(undefined8 *)(this + 0x252d0) = 0;
  *(undefined8 *)(this + 0x252e8) = 0;
  *(undefined8 *)(this + 0x252e0) = 0;
  *(undefined8 *)(this + 0x252b8) = 0;
  *(undefined8 *)(this + 0x252b0) = 0;
  *(undefined8 *)(this + 0x252c8) = 0;
  *(undefined8 *)(this + 0x252c0) = 0;
  *(undefined8 *)(this + 0x24ce0) = 0;
  *(undefined8 *)(this + 0x24cd8) = 0;
  *(undefined8 *)(this + 0x24cf0) = 0;
  *(undefined8 *)(this + 0x24ce8) = 0;
  *(undefined8 *)(this + 0x24d00) = 0;
  *(undefined8 *)(this + 0x24cf8) = 0;
  *(undefined8 *)(this + 0x24d10) = 0;
  *(undefined8 *)(this + 0x24d08) = 0;
  *(undefined8 *)(this + 0x24d18) = 0;
  *(undefined8 *)(this + 0x253a0) = 0;
  *(undefined8 *)(this + 0x25388) = 0;
  *(undefined8 *)(this + 0x25380) = 0;
  *(undefined8 *)(this + 0x25398) = 0;
  *(undefined8 *)(this + 0x25390) = 0;
  *(undefined8 *)(this + 0x25368) = 0;
  *(undefined8 *)(this + 0x25360) = 0;
  *(undefined8 *)(this + 0x25378) = 0;
  *(undefined8 *)(this + 0x25370) = 0;
  *(undefined8 *)(this + 0x24d20) = uVar45;
  *(undefined4 *)(this + 0x24d28) = 0x3f800000;
  *(undefined8 *)(this + 0x24d38) = 0;
  *(undefined8 *)(this + 0x24d30) = 0;
  *(undefined8 *)(this + 0x25450) = 0;
  *(undefined8 *)(this + 0x25438) = 0;
  *(undefined8 *)(this + 0x25430) = 0;
  *(undefined8 *)(this + 0x25448) = 0;
  *(undefined8 *)(this + 0x25440) = 0;
  *(undefined8 *)(this + 0x25418) = 0;
  *(undefined8 *)(this + 0x25410) = 0;
  *(undefined8 *)(this + 0x25428) = 0;
  *(undefined8 *)(this + 0x25420) = 0;
  *(undefined8 *)(this + 0x24d48) = 0;
  *(undefined8 *)(this + 0x24d40) = 0;
  *(undefined8 *)(this + 0x24d58) = 0;
  *(undefined8 *)(this + 0x24d50) = 0;
  *(undefined8 *)(this + 0x24d68) = 0;
  *(undefined8 *)(this + 0x24d60) = 0;
  *(undefined8 *)(this + 0x25500) = 0;
  *(undefined8 *)(this + 0x254e8) = 0;
  *(undefined8 *)(this + 0x254e0) = 0;
  *(undefined8 *)(this + 0x254f8) = 0;
  *(undefined8 *)(this + 0x254f0) = 0;
  *(undefined8 *)(this + 0x254c8) = 0;
  *(undefined8 *)(this + 0x254c0) = 0;
  *(undefined8 *)(this + 0x254d8) = 0;
  *(undefined8 *)(this + 0x254d0) = 0;
  *(undefined8 *)(this + 0x24d70) = 0;
  *(undefined8 *)(this + 0x24d78) = uVar45;
  *(undefined4 *)(this + 0x24d80) = 0x3f800000;
  *(undefined8 *)(this + 0x255b0) = 0;
  *(undefined8 *)(this + 0x25598) = 0;
  *(undefined8 *)(this + 0x25590) = 0;
  *(undefined8 *)(this + 0x255a8) = 0;
  *(undefined8 *)(this + 0x255a0) = 0;
  *(undefined8 *)(this + 0x25578) = 0;
  *(undefined8 *)(this + 0x25570) = 0;
  *(undefined8 *)(this + 0x25588) = 0;
  *(undefined8 *)(this + 0x25580) = 0;
  *(undefined8 *)(this + 0x24dc8) = 0;
  *(undefined8 *)(this + 0x24db0) = 0;
  *(undefined8 *)(this + 0x24da8) = 0;
  *(undefined8 *)(this + 0x24dc0) = 0;
  *(undefined8 *)(this + 0x24db8) = 0;
  *(undefined8 *)(this + 0x24d90) = 0;
  *(undefined8 *)(this + 0x24d88) = 0;
  *(undefined8 *)(this + 0x24da0) = 0;
  *(undefined8 *)(this + 0x24d98) = 0;
  *(undefined8 *)(this + 0x25660) = 0;
  *(undefined8 *)(this + 0x25648) = 0;
  *(undefined8 *)(this + 0x25640) = 0;
  *(undefined8 *)(this + 0x25658) = 0;
  *(undefined8 *)(this + 0x25650) = 0;
  *(undefined8 *)(this + 0x25628) = 0;
  *(undefined8 *)(this + 0x25620) = 0;
  *(undefined8 *)(this + 0x25638) = 0;
  *(undefined8 *)(this + 0x25630) = 0;
  *(undefined8 *)(this + 0x24dd0) = uVar45;
  *(undefined4 *)(this + 0x24dd8) = 0x3f800000;
  *(undefined8 *)(this + 0x24e28) = uVar45;
  *(undefined8 *)(this + 0x25710) = 0;
  *(undefined8 *)(this + 0x256f8) = 0;
  *(undefined8 *)(this + 0x256f0) = 0;
  *(undefined8 *)(this + 0x25708) = 0;
  *(undefined8 *)(this + 0x25700) = 0;
  *(undefined8 *)(this + 0x256d8) = 0;
  *(undefined8 *)(this + 0x256d0) = 0;
  *(undefined8 *)(this + 0x256e8) = 0;
  *(undefined8 *)(this + 0x256e0) = 0;
  *(undefined4 *)(this + 0x24e30) = 0x3f800000;
  *(undefined8 *)(this + 0x24e40) = 0;
  *(undefined8 *)(this + 0x24e38) = 0;
  *(undefined8 *)(this + 0x24e50) = 0;
  *(undefined8 *)(this + 0x24e48) = 0;
  *(undefined8 *)(this + 0x24e60) = 0;
  *(undefined8 *)(this + 0x24e58) = 0;
  *(undefined8 *)(this + 0x24e70) = 0;
  *(undefined8 *)(this + 0x24e68) = 0;
  *(undefined8 *)(this + 0x24e78) = 0;
  *(undefined8 *)(this + 0x24e80) = uVar45;
  *(undefined4 *)(this + 0x24e88) = 0x3f800000;
  *(undefined8 *)(this + 0x24ed8) = uVar45;
  *(undefined4 *)(this + 0x24ee0) = 0x3f800000;
  *(undefined8 *)(this + 0x24f28) = 0;
  *(undefined8 *)(this + 0x24f10) = 0;
  *(undefined8 *)(this + 0x24f08) = 0;
  *(undefined8 *)(this + 0x24f20) = 0;
  *(undefined8 *)(this + 0x24f18) = 0;
  *(undefined8 *)(this + 0x24ef0) = 0;
  *(undefined8 *)(this + 0x24ee8) = 0;
  *(undefined8 *)(this + 0x24f00) = 0;
  *(undefined8 *)(this + 0x24ef8) = 0;
  *(undefined8 *)(this + 0x24f30) = uVar45;
  *(undefined4 *)(this + 0x24f38) = 0x3f800000;
  *(undefined8 *)(this + 0x24f88) = uVar45;
  *(undefined4 *)(this + 0x24f90) = 0x3f800000;
  *(undefined8 *)(this + 0x24fd8) = 0;
  *(undefined8 *)(this + 0x24fc0) = 0;
  *(undefined8 *)(this + 0x24fb8) = 0;
  *(undefined8 *)(this + 0x24fd0) = 0;
  *(undefined8 *)(this + 0x24fc8) = 0;
  *(undefined8 *)(this + 0x24fa0) = 0;
  *(undefined8 *)(this + 0x24f98) = 0;
  *(undefined8 *)(this + 0x24fb0) = 0;
  *(undefined8 *)(this + 0x24fa8) = 0;
  *(undefined8 *)(this + 0x24fe0) = uVar45;
  *(undefined4 *)(this + 0x24fe8) = 0x3f800000;
  *(undefined8 *)(this + 0x25038) = uVar45;
  *(undefined4 *)(this + 0x25040) = 0x3f800000;
  *(undefined8 *)(this + 0x25088) = 0;
  *(undefined8 *)(this + 0x25070) = 0;
  *(undefined8 *)(this + 0x25068) = 0;
  *(undefined8 *)(this + 0x25080) = 0;
  *(undefined8 *)(this + 0x25078) = 0;
  *(undefined8 *)(this + 0x25050) = 0;
  *(undefined8 *)(this + 0x25048) = 0;
  *(undefined8 *)(this + 0x25060) = 0;
  *(undefined8 *)(this + 0x25058) = 0;
  *(undefined8 *)(this + 0x25090) = uVar45;
  *(undefined4 *)(this + 0x25098) = 0x3f800000;
  *(undefined8 *)(this + 0x250e8) = uVar45;
  *(undefined4 *)(this + 0x250f0) = 0x3f800000;
  *(undefined8 *)(this + 0x25138) = 0;
  *(undefined8 *)(this + 0x25130) = 0;
  *(undefined8 *)(this + 0x25128) = 0;
  *(undefined8 *)(this + 0x25120) = 0;
  *(undefined8 *)(this + 0x25118) = 0;
  *(undefined8 *)(this + 0x25110) = 0;
  *(undefined8 *)(this + 0x25108) = 0;
  *(undefined8 *)(this + 0x25100) = 0;
  *(undefined8 *)(this + 0x250f8) = 0;
  *(undefined8 *)(this + 0x25140) = uVar45;
  *(undefined4 *)(this + 0x25148) = 0x3f800000;
  *(undefined8 *)(this + 0x25198) = uVar45;
  *(undefined4 *)(this + 0x251a0) = 0x3f800000;
  *(undefined8 *)(this + 0x251e8) = 0;
  *(undefined8 *)(this + 0x251e0) = 0;
  *(undefined8 *)(this + 0x251d8) = 0;
  *(undefined8 *)(this + 0x251d0) = 0;
  *(undefined8 *)(this + 0x251c8) = 0;
  *(undefined8 *)(this + 0x251c0) = 0;
  *(undefined8 *)(this + 0x251b8) = 0;
  *(undefined8 *)(this + 0x251b0) = 0;
  *(undefined8 *)(this + 0x251a8) = 0;
  *(undefined8 *)(this + 0x251f0) = uVar45;
  *(undefined4 *)(this + 0x251f8) = 0x3f800000;
  *(undefined8 *)(this + 0x25248) = uVar45;
  *(undefined4 *)(this + 0x25250) = 0x3f800000;
  *(undefined8 *)(this + 0x25298) = 0;
  *(undefined8 *)(this + 0x25290) = 0;
  *(undefined8 *)(this + 0x25288) = 0;
  *(undefined8 *)(this + 0x25280) = 0;
  *(undefined8 *)(this + 0x25278) = 0;
  *(undefined8 *)(this + 0x25270) = 0;
  *(undefined8 *)(this + 0x25268) = 0;
  *(undefined8 *)(this + 0x25260) = 0;
  *(undefined8 *)(this + 0x25258) = 0;
  *(undefined8 *)(this + 0x252a0) = uVar45;
  *(undefined4 *)(this + 0x252a8) = 0x3f800000;
  *(undefined8 *)(this + 0x252f8) = uVar45;
  *(undefined4 *)(this + 0x25300) = 0x3f800000;
  *(undefined8 *)(this + 0x25348) = 0;
  *(undefined8 *)(this + 0x25340) = 0;
  *(undefined8 *)(this + 0x25338) = 0;
  *(undefined8 *)(this + 0x25330) = 0;
  *(undefined8 *)(this + 0x25328) = 0;
  *(undefined8 *)(this + 0x25320) = 0;
  *(undefined8 *)(this + 0x25318) = 0;
  *(undefined8 *)(this + 0x25310) = 0;
  *(undefined8 *)(this + 0x25308) = 0;
  *(undefined8 *)(this + 0x25350) = uVar45;
  *(undefined4 *)(this + 0x25358) = 0x3f800000;
  *(undefined8 *)(this + 0x253a8) = uVar45;
  *(undefined4 *)(this + 0x253b0) = 0x3f800000;
  *(undefined8 *)(this + 0x253f8) = 0;
  *(undefined8 *)(this + 0x253f0) = 0;
  *(undefined8 *)(this + 0x253e8) = 0;
  *(undefined8 *)(this + 0x253e0) = 0;
  *(undefined8 *)(this + 0x253d8) = 0;
  *(undefined8 *)(this + 0x253d0) = 0;
  *(undefined8 *)(this + 0x253c8) = 0;
  *(undefined8 *)(this + 0x253c0) = 0;
  *(undefined8 *)(this + 0x253b8) = 0;
  *(undefined8 *)(this + 0x25400) = uVar45;
  *(undefined4 *)(this + 0x25408) = 0x3f800000;
  *(undefined8 *)(this + 0x25458) = uVar45;
  *(undefined4 *)(this + 0x25460) = 0x3f800000;
  *(undefined8 *)(this + 0x254a8) = 0;
  *(undefined8 *)(this + 0x254a0) = 0;
  *(undefined8 *)(this + 0x25498) = 0;
  *(undefined8 *)(this + 0x25490) = 0;
  *(undefined8 *)(this + 0x25488) = 0;
  *(undefined8 *)(this + 0x25480) = 0;
  *(undefined8 *)(this + 0x25478) = 0;
  *(undefined8 *)(this + 0x25470) = 0;
  *(undefined8 *)(this + 0x25468) = 0;
  *(undefined8 *)(this + 0x254b0) = uVar45;
  *(undefined4 *)(this + 0x254b8) = 0x3f800000;
  *(undefined8 *)(this + 0x25508) = uVar45;
  *(undefined4 *)(this + 0x25510) = 0x3f800000;
  *(undefined8 *)(this + 0x25558) = 0;
  *(undefined8 *)(this + 0x25550) = 0;
  *(undefined8 *)(this + 0x25548) = 0;
  *(undefined8 *)(this + 0x25540) = 0;
  *(undefined8 *)(this + 0x25538) = 0;
  *(undefined8 *)(this + 0x25530) = 0;
  *(undefined8 *)(this + 0x25528) = 0;
  *(undefined8 *)(this + 0x25520) = 0;
  *(undefined8 *)(this + 0x25518) = 0;
  *(undefined8 *)(this + 0x25560) = uVar45;
  *(undefined4 *)(this + 0x25568) = 0x3f800000;
  *(undefined8 *)(this + 0x255b8) = uVar45;
  *(undefined4 *)(this + 0x255c0) = 0x3f800000;
  *(undefined8 *)(this + 0x25608) = 0;
  *(undefined8 *)(this + 0x25600) = 0;
  *(undefined8 *)(this + 0x255f8) = 0;
  *(undefined8 *)(this + 0x255f0) = 0;
  *(undefined8 *)(this + 0x255e8) = 0;
  *(undefined8 *)(this + 0x255e0) = 0;
  *(undefined8 *)(this + 0x255d8) = 0;
  *(undefined8 *)(this + 0x255d0) = 0;
  *(undefined8 *)(this + 0x255c8) = 0;
  *(undefined8 *)(this + 0x25610) = uVar45;
  *(undefined4 *)(this + 0x25618) = 0x3f800000;
  *(undefined8 *)(this + 0x25668) = uVar45;
  *(undefined4 *)(this + 0x25670) = 0x3f800000;
  *(undefined8 *)(this + 0x256b8) = 0;
  *(undefined8 *)(this + 0x256b0) = 0;
  *(undefined8 *)(this + 0x256a8) = 0;
  *(undefined8 *)(this + 0x256a0) = 0;
  *(undefined8 *)(this + 0x25698) = 0;
  *(undefined8 *)(this + 0x25690) = 0;
  *(undefined8 *)(this + 0x25688) = 0;
  *(undefined8 *)(this + 0x25680) = 0;
  *(undefined8 *)(this + 0x25678) = 0;
  *(undefined8 *)(this + 0x256c0) = uVar45;
  *(undefined4 *)(this + 0x256c8) = 0x3f800000;
  *(undefined8 *)(this + 0x25718) = uVar45;
  *(undefined8 *)(this + 0x25768) = 0;
  *(undefined8 *)(this + 0x25760) = 0;
  *(undefined8 *)(this + 0x25758) = 0;
  *(undefined8 *)(this + 0x25750) = 0;
  *(undefined8 *)(this + 0x25748) = 0;
  *(undefined8 *)(this + 0x25740) = 0;
  *(undefined8 *)(this + 0x25738) = 0;
  *(undefined8 *)(this + 0x25730) = 0;
  *(undefined8 *)(this + 0x25728) = 0;
  *(undefined8 *)(this + 0x25770) = uVar45;
  *(undefined8 *)(this + 0x257c8) = uVar45;
  *(undefined4 *)(this + 0x25720) = 0x3f800000;
  *(undefined8 *)(this + 0x257c0) = 0;
  *(undefined8 *)(this + 0x257a8) = 0;
  *(undefined8 *)(this + 0x257a0) = 0;
  *(undefined8 *)(this + 0x257b8) = 0;
  *(undefined8 *)(this + 0x257b0) = 0;
  *(undefined8 *)(this + 0x25788) = 0;
  *(undefined8 *)(this + 0x25780) = 0;
  *(undefined8 *)(this + 0x25798) = 0;
  *(undefined8 *)(this + 0x25790) = 0;
  *(undefined4 *)(this + 0x25778) = 0x3f800000;
  *(undefined4 *)(this + 0x257d0) = 0x3f800000;
  *(undefined ***)(this + 0x257d8) = &PTR__IRaycastReport_00fdd110;
  *(undefined8 *)(this + 0x257e8) = 0;
  *(undefined8 *)(this + 0x257e0) = 0xffffffffffffffff;
  *(undefined ***)(this + 0x257f0) = &PTR__IRaycastReport_00fdd110;
  *(undefined8 *)(this + 0x25800) = 0;
  *(undefined8 *)(this + 0x257f8) = 0xffffffffffffffff;
  *(undefined ***)(this + 0x25808) = &PTR__IRaycastReport_00fdd110;
  *(undefined8 *)(this + 0x25818) = 0;
  *(undefined8 *)(this + 0x25810) = 0xffffffffffffffff;
  *(undefined ***)(this + 0x25820) = &PTR__IRaycastReport_00fdd110;
  *(undefined8 *)(this + 0x25830) = 0;
  *(undefined8 *)(this + 0x25828) = 0xffffffffffffffff;
  *(undefined ***)(this + 0x25838) = &PTR__IRaycastReport_00fdd110;
  *(undefined8 *)(this + 0x25848) = 0;
  *(undefined8 *)(this + 0x25840) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x25860) = 0;
  *(undefined ***)(this + 0x25850) = &PTR__IRaycastReport_00fdd148;
  *(undefined ***)(this + 0x25868) = &PTR__IRaycastReport_00fdd148;
  *(undefined ***)(this + 0x25880) = &PTR__IRaycastReport_00fdd148;
  *(undefined ***)(this + 0x25898) = &PTR__IRaycastReport_00fdd148;
  *(undefined ***)(this + 0x258b0) = &PTR__IRaycastReport_00fdd148;
  *(undefined8 *)(this + 0x25858) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x25878) = 0;
  *(undefined8 *)(this + 0x25870) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x25890) = 0;
  *(undefined8 *)(this + 0x25888) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x258a8) = 0;
  *(undefined8 *)(this + 0x258a0) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x258c0) = 0;
  *(undefined8 *)(this + 0x258b8) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x258d0) = 0;
  *(undefined8 *)(this + 0x258c8) = 0;
  *(undefined8 *)(this + 0x258e0) = 0;
  *(undefined8 *)(this + 0x258d8) = 0;
                    /* try { // try from 008908b4 to 008908bf has its CatchHandler @ 00892ebc */
  PedestrianSpawnGrid::PedestrianSpawnGrid((PedestrianSpawnGrid *)(this + 0x25918));
  this[0x25978] = (PedestrianSystem)0x0;
  *(uint *)(this + 0x258f0) = param_6;
  *(undefined8 *)(this + 0x25970) = 0x100000000000000;
  *(undefined8 *)(this + 0x259a4) = 0x3f800000;
  *(undefined8 *)(this + 0x25968) = 0;
  *(undefined8 *)(this + 0x25900) = 0;
  *(undefined8 *)(this + 0x25908) = 0;
  *(undefined8 *)(this + 0x25984) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x258f8) = 0;
  *(undefined4 *)(this + 0x25910) = 0;
  *(undefined8 *)(this + 0x2597c) = 0x4b8954404c970fe0;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x20000000;
  *(uint *)(this + 0x258f4) = param_7;
  *(undefined8 *)(this + 0x25958) = 0;
  *(undefined8 *)(this + 0x25960) = 0;
  *(undefined8 *)(this + 0x2598c) = 0x80000000800000;
  *(undefined4 *)(this + 0x259a0) = 0x3d4ccccd;
  *(undefined4 *)(this + 0x25994) = 0x800000;
  *(undefined8 *)(this + 0x25998) = 0x42f0000042a00000;
  *(undefined8 *)(this + 0x258e8) = 0;
  *(PedestrianSystem **)(this + 0x257e8) = pPVar25;
  *(PedestrianSystem **)(this + 0x25860) = pPVar25;
  *(PedestrianSystem **)(this + 0x25800) = pPVar25;
  *(PedestrianSystem **)(this + 0x25878) = pPVar25;
  *(PedestrianSystem **)(this + 0x25818) = pPVar25;
  *(PedestrianSystem **)(this + 0x25890) = pPVar25;
  *(PedestrianSystem **)(this + 0x25830) = pPVar25;
  *(PedestrianSystem **)(this + 0x258a8) = pPVar25;
  *(PedestrianSystem **)(this + 0x25848) = pPVar25;
  *(PedestrianSystem **)(this + 0x258c0) = pPVar25;
                    /* try { // try from 00890978 to 00890993 has its CatchHandler @ 00892eb4 */
  PedestrianSpawnGrid::init((PedestrianSpawnGrid *)(this + 0x25918),80.0,100.0);
  if ((int)((ulong)(*(long *)(param_3 + 0x30) - (long)*(undefined8 **)(param_3 + 0x28)) >> 3) == 0)
  {
    *(undefined8 *)(this + 0x25940) = 0;
  }
  else {
    *(undefined8 *)(this + 0x25940) = **(undefined8 **)(param_3 + 0x28);
  }
  if ((int)((ulong)(*(long *)(param_4 + 0x30) - (long)*(undefined8 **)(param_4 + 0x28)) >> 3) == 0)
  {
    *(undefined8 *)(this + 0x25948) = 0;
  }
  else {
    *(undefined8 *)(this + 0x25948) = **(undefined8 **)(param_4 + 0x28);
  }
  *(TransformGroup **)(this + 0x25950) = param_5;
  sVar16 = strlen(param_1);
  if (0xffffffffffffffef < sVar16) {
                    /* try { // try from 00892d24 to 00892d2b has its CatchHandler @ 00892ed0 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar16 < 0x17) {
    pvVar35 = (void *)((ulong)&local_280 | 1);
    local_280 = CONCAT71(local_280._1_7_,(char)((int)sVar16 << 1));
    if (sVar16 != 0) goto LAB_00890a3c;
  }
  else {
    uVar17 = sVar16 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00890a24 to 00890a2b has its CatchHandler @ 00892ed0 */
    pvVar35 = operator_new(uVar17);
    local_280 = uVar17 | 1;
    local_278 = sVar16;
    local_270 = pvVar35;
LAB_00890a3c:
    memcpy(pvVar35,param_1,sVar16);
  }
  *(undefined *)((long)pvVar35 + sVar16) = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = (void *)0x0;
                    /* try { // try from 00890a58 to 00890a67 has its CatchHandler @ 00892eac */
  PathUtil::getBasePath((basic_string *)&local_280,(basic_string *)&local_298,true);
                    /* try { // try from 00890a68 to 00890a6f has its CatchHandler @ 00892ea4 */
  DomXMLFile::DomXMLFile(aDStack_168);
                    /* try { // try from 00890a70 to 00890a7f has its CatchHandler @ 00892ee0 */
  uVar17 = DomXMLFile::loadFromFile(aDStack_168,param_1,true);
  if ((uVar17 & 1) == 0) goto LAB_00892c04;
  local_2a8 = (long ********)0x0;
  local_2a0 = 0;
  local_2b8 = 0;
  local_2c0 = (long ********)0x0;
                    /* try { // try from 00890aa8 to 00890ab7 has its CatchHandler @ 00892ed8 */
  local_2c8 = (long ********)&local_2c0;
  local_2b0 = (long ********)&local_2a8;
  iVar13 = DomXMLFile::getNumChildren(aDStack_168,"pedestrianSystem.walks");
  *(int *)(this + 0x25910) = iVar13;
  if (iVar13 != 0) {
    uVar17 = 0;
    do {
                    /* try { // try from 00890b04 to 00890c2b has its CatchHandler @ 00893240 */
      FUN_00893588(acStack_268);
      Properties::getString((Properties *)aDStack_168,acStack_268,"");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)(this + uVar17 * 0x58 + 0x24cd8));
      FUN_00893588(acStack_268,extraout_x1,"pedestrianSystem.walks.walk(%u)#blendWith",
                   uVar17 & 0xffffffff);
      Properties::getString((Properties *)aDStack_168,acStack_268,"");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)(this + uVar17 * 0x58 + 0x24cf0));
      FUN_00893588(acStack_268,extraout_x1_00,"pedestrianSystem.walks.walk(%u)#distance",
                   uVar17 & 0xffffffff);
      uVar42 = Properties::getFloat((Properties *)aDStack_168,acStack_268,1.0);
      *(undefined4 *)(this + uVar17 * 0x58 + 0x24d20) = uVar42;
      FUN_00893588(acStack_268,extraout_x1_01,"pedestrianSystem.walks.walk(%u)#speedScaleMin",
                   uVar17 & 0xffffffff);
      uVar42 = Properties::getFloat((Properties *)aDStack_168,acStack_268,1.0);
      *(undefined4 *)(this + uVar17 * 0x58 + 0x24d24) = uVar42;
      FUN_00893588(acStack_268,extraout_x1_02,"pedestrianSystem.walks.walk(%u)#speedScaleMax",
                   uVar17 & 0xffffffff);
      uVar42 = Properties::getFloat((Properties *)aDStack_168,acStack_268,1.0);
      *(undefined4 *)(this + uVar17 * 0x58 + 0x24d28) = uVar42;
      FUN_00893588(acStack_268,extraout_x1_03,"pedestrianSystem.walks.walk(%u)#stepSoundTriggers",
                   uVar17 & 0xffffffff);
                    /* try { // try from 00890c2c to 00890c3b has its CatchHandler @ 00892fd4 */
      pcVar18 = (char *)Properties::getString((Properties *)aDStack_168,acStack_268,"");
      if (pcVar18 != (char *)0x0) {
        local_2e0 = (byte *)0x0;
        local_2d8 = (byte *)0x0;
        local_2d0 = (PedestrianSystem *)0x0;
        pbVar19 = (byte *)strlen(pcVar18);
        if ((byte *)0xffffffffffffffef < pbVar19) {
                    /* try { // try from 00892cd0 to 00892cd7 has its CatchHandler @ 00892f9c */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (pbVar19 < (byte *)0x17) {
          local_2f8 = (byte *)CONCAT71(local_2f8._1_7_,(char)((int)pbVar19 << 1));
          pvVar35 = (void *)((ulong)&local_2f8 | 1);
          if (pbVar19 != (byte *)0x0) goto LAB_00890ca0;
        }
        else {
                    /* try { // try from 00890c88 to 00890c8f has its CatchHandler @ 00892ef4 */
          pvVar35 = operator_new((ulong)(pbVar19 + 0x10) & 0xfffffffffffffff0);
          local_2f8 = (byte *)((ulong)(pbVar19 + 0x10) & 0xfffffffffffffff0 | 1);
          local_2f0 = pbVar19;
          local_2e8 = pvVar35;
LAB_00890ca0:
          memcpy(pvVar35,pcVar18,(size_t)pbVar19);
        }
        *(byte *)((long)pvVar35 + (long)pbVar19) = 0;
        local_310._2_6_ = (uint6)(local_310 >> 0x10) & 0xffffffffff00;
        local_310 = CONCAT62(local_310._2_6_,0x3b02);
                    /* try { // try from 00890cc0 to 00890cd7 has its CatchHandler @ 00892fa0 */
        StringUtil::split((basic_string *)&local_2f8,(basic_string *)&local_310,(vector *)&local_2e0
                          ,true,true);
        if ((local_310 & 1) != 0) {
          operator_delete(local_300);
        }
        if (((ulong)local_2f8 & 1) != 0) {
          operator_delete(local_2e8);
        }
        pbVar19 = local_2d8;
        pbVar27 = local_2d8;
        if (local_2d8 != local_2e0) {
          uVar36 = 0;
          ppvVar4 = (void **)(this + uVar17 * 0x58 + 0x24d10);
          pbVar27 = local_2e0;
          do {
            pbVar31 = pbVar27 + uVar36 * 0x18;
            bVar12 = *pbVar31;
            uVar30 = (ulong)(bVar12 >> 1);
            if ((bVar12 & 1) != 0) {
              uVar30 = *(ulong *)(pbVar31 + 8);
            }
            if (uVar30 != 0) {
              pbVar19 = *(byte **)(pbVar27 + uVar36 * 0x18 + 0x10);
              if ((bVar12 & 1) == 0) {
                pbVar19 = pbVar31 + 1;
              }
                    /* try { // try from 00890d98 to 00890df7 has its CatchHandler @ 008931d0 */
              StringUtil::atof((char *)pbVar19,(float *)&local_2f8);
              puVar24 = (undefined4 *)*ppvVar4;
              if (puVar24 == *(undefined4 **)(this + uVar17 * 0x58 + 0x24d18)) {
                pvVar35 = *(void **)(this + uVar17 * 0x58 + 0x24d08);
                uVar39 = (long)puVar24 - (long)pvVar35;
                uVar30 = ((long)uVar39 >> 2) + 1;
                if (uVar30 >> 0x3e != 0) {
                    /* try { // try from 00892c88 to 00892c8f has its CatchHandler @ 008930d4 */
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__vector_base_common<true>::__throw_length_error();
                }
                if (uVar30 <= (ulong)((long)uVar39 >> 1)) {
                  uVar30 = (long)uVar39 >> 1;
                }
                if (0x7ffffffffffffffb < uVar39) {
                  uVar30 = 0x3fffffffffffffff;
                }
                if (uVar30 == 0) {
                  pvVar20 = (void *)0x0;
                }
                else {
                  if (uVar30 >> 0x3e != 0) {
                    /* try { // try from 00892ca4 to 00892caf has its CatchHandler @ 008930d4 */
                    /* WARNING: Subroutine does not return */
                    FUN_006d1f18(
                                "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                );
                  }
                  pvVar20 = operator_new(uVar30 << 2);
                }
                puVar24 = (undefined4 *)((long)pvVar20 + ((long)uVar39 >> 2) * 4);
                *puVar24 = (undefined4)local_2f8;
                if (0 < (long)uVar39) {
                  memcpy(pvVar20,pvVar35,uVar39);
                }
                *(void **)(this + uVar17 * 0x58 + 0x24d08) = pvVar20;
                *ppvVar4 = puVar24 + 1;
                *(void **)(this + uVar17 * 0x58 + 0x24d18) = (void *)((long)pvVar20 + uVar30 * 4);
                pbVar19 = local_2d8;
                pbVar27 = local_2e0;
                if (pvVar35 != (void *)0x0) {
                  operator_delete(pvVar35);
                  pbVar19 = local_2d8;
                  pbVar27 = local_2e0;
                }
              }
              else {
                *puVar24 = (undefined4)local_2f8;
                *ppvVar4 = puVar24 + 1;
                pbVar19 = local_2d8;
                pbVar27 = local_2e0;
              }
            }
            uVar36 = (ulong)((int)uVar36 + 1);
            uVar30 = ((long)pbVar19 - (long)pbVar27 >> 3) * -0x5555555555555555;
          } while (uVar36 <= uVar30 && uVar30 - uVar36 != 0);
        }
        pbVar31 = pbVar27;
        if (pbVar27 != (byte *)0x0) {
          while (pbVar11 = pbVar19, pbVar11 != pbVar27) {
            pbVar19 = pbVar11 + -0x18;
            pbVar31 = local_2e0;
            if ((*pbVar19 & 1) != 0) {
              operator_delete(*(void **)(pbVar11 + -8));
              pbVar31 = local_2e0;
            }
          }
          local_2d8 = pbVar27;
          operator_delete(pbVar31);
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < *(uint *)(this + 0x25910));
  }
                    /* try { // try from 00890e94 to 00890ea3 has its CatchHandler @ 00892ed8 */
  uVar14 = DomXMLFile::getNumChildren(aDStack_168,"pedestrianSystem.pedestrians");
  if (99 < uVar14) {
    uVar14 = 100;
  }
  *(uint *)(this + 0x25900) = uVar14;
  if (uVar14 != 0) {
    pPVar25 = (PedestrianSystem *)((ulong)&local_2e0 | 1);
    uVar17 = 0;
    do {
                    /* try { // try from 00890ef4 to 00890f07 has its CatchHandler @ 00892fd0 */
      FUN_00893588(acStack_268);
                    /* try { // try from 00890f08 to 00890f17 has its CatchHandler @ 00893010 */
      uVar14 = Properties::getInt((Properties *)aDStack_168,acStack_268,-1);
      uVar36 = (ulong)uVar14;
      pppppppplVar34 = (long ********)&local_2a8;
      pppppppplVar32 = (long ********)&local_2a8;
      pppppppplVar28 = local_2a8;
      while (pppppppplVar28 != (long ********)0x0) {
        while (pppppppplVar32 = pppppppplVar28, (int)uVar14 < *(int *)((long)pppppppplVar32 + 0x1c))
        {
          pppppppplVar34 = pppppppplVar32;
          pppppppplVar28 = (long ********)*pppppppplVar32;
          if ((long ********)*pppppppplVar32 == (long ********)0x0) {
            ppppppplVar26 = *pppppppplVar32;
            goto joined_r0x00890fc4;
          }
        }
        if ((int)uVar14 <= *(int *)((long)pppppppplVar32 + 0x1c)) break;
        pppppppplVar34 = pppppppplVar32 + 1;
        pppppppplVar28 = (long ********)*pppppppplVar34;
      }
      ppppppplVar26 = *pppppppplVar34;
joined_r0x00890fc4:
      if (ppppppplVar26 == (long *******)0x0) {
                    /* try { // try from 00890f74 to 00890f7f has its CatchHandler @ 00892ef8 */
        ppppppplVar26 = (long *******)operator_new(0x28);
        *(uint *)((long)ppppppplVar26 + 0x1c) = uVar14;
        *(int *)(ppppppplVar26 + 4) = (int)uVar17;
        *ppppppplVar26 = (long ******)0x0;
        ppppppplVar26[1] = (long ******)0x0;
        ppppppplVar26[2] = (long ******)pppppppplVar32;
        *pppppppplVar34 = ppppppplVar26;
        if ((long ********)*local_2b0 != (long ********)0x0) {
          ppppppplVar26 = *pppppppplVar34;
          local_2b0 = (long ********)*local_2b0;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  ((__tree_node_base *)local_2a8,(__tree_node_base *)ppppppplVar26);
        local_2a0 = local_2a0 + 1;
      }
                    /* try { // try from 00890fc8 to 00890fdb has its CatchHandler @ 00893010 */
      FUN_00893588(acStack_268);
                    /* try { // try from 00890fdc to 00890feb has its CatchHandler @ 0089300c */
      pcVar18 = (char *)DomXMLFile::getValue(aDStack_168,acStack_268,false);
      if (pcVar18 != (char *)0x0) {
        local_2e0 = (byte *)0x0;
        local_2d8 = (byte *)0x0;
        local_2d0 = (PedestrianSystem *)0x0;
        if (*pcVar18 == '$') {
                    /* try { // try from 00891024 to 0089108f has its CatchHandler @ 00892ffc */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((char *)&local_2e0);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&local_2e0);
        }
        else {
          PathUtil::buildAbsolutePath((basic_string *)&local_298,pcVar18,(basic_string *)&local_2e0)
          ;
        }
        pPVar21 = pPVar25;
        if (((ulong)local_2e0 & 1) != 0) {
          pPVar21 = local_2d0;
        }
        I3DAssetPtr::loadI3DAsync
                  ((I3DAssetPtr *)(this + uVar17 * 0x3b0 + 0x66e0),(char *)pPVar21,false,false,
                   (MeshSplitFileState *)0x0,false,true,(Loader *)(this + uVar17 * 0x3b0 + 0x6398));
        if (((ulong)local_2e0 & 1) != 0) {
          operator_delete(local_2d0);
        }
      }
                    /* try { // try from 008910a0 to 008910b3 has its CatchHandler @ 0089300c */
      FUN_00893588(acStack_268);
                    /* try { // try from 008910b4 to 0089116b has its CatchHandler @ 00893018 */
      pcVar18 = (char *)DomXMLFile::getValue(aDStack_168,acStack_268,false);
      if (pcVar18 == (char *)0x0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
           iVar13 != 0)) {
                    /* try { // try from 00891634 to 0089163f has its CatchHandler @ 00892e40 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning (%s): no variation is defined for pedestrian with id %d.\n",
                          param_1,uVar36);
      }
      else {
        iVar13 = strcmp(pcVar18,"male");
        if (iVar13 == 0) {
          uVar42 = 0;
        }
        else {
          iVar13 = strcmp(pcVar18,"female");
          if (iVar13 == 0) {
            uVar42 = 1;
          }
          else {
            iVar13 = strcmp(pcVar18,"unisex");
            if (iVar13 != 0) goto LAB_00891158;
            uVar42 = 2;
          }
        }
        *(undefined4 *)(this + uVar17 * 0x3b0 + 0x6740) = uVar42;
      }
LAB_00891158:
      FUN_00893588(acStack_268);
                    /* try { // try from 0089116c to 008911c3 has its CatchHandler @ 00892ff0 */
      pcVar18 = (char *)Properties::getString((Properties *)aDStack_168,acStack_268,"");
      pbVar19 = (byte *)strlen(pcVar18);
      if ((byte *)0xffffffffffffffef < pbVar19) {
                    /* try { // try from 00892cb0 to 00892cb7 has its CatchHandler @ 00892fcc */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (pbVar19 < (byte *)0x17) {
        local_2e0 = (byte *)CONCAT71(local_2e0._1_7_,(char)((int)pbVar19 << 1));
        pPVar21 = pPVar25;
        if (pbVar19 != (byte *)0x0) goto LAB_008911dc;
      }
      else {
        pPVar21 = (PedestrianSystem *)operator_new((ulong)(pbVar19 + 0x10) & 0xfffffffffffffff0);
        local_2e0 = (byte *)((ulong)(pbVar19 + 0x10) & 0xfffffffffffffff0 | 1);
        local_2d8 = pbVar19;
        local_2d0 = pPVar21;
LAB_008911dc:
        memcpy(pPVar21,pcVar18,(size_t)pbVar19);
      }
      pPVar21[(long)pbVar19] = (PedestrianSystem)0x0;
      uVar14 = *(uint *)(this + 0x25910);
      pPVar21 = pPVar25;
      pbVar19 = (byte *)((ulong)local_2e0 >> 1 & 0x7f);
      if (((ulong)local_2e0 & 1) != 0) {
        pPVar21 = local_2d0;
        pbVar19 = local_2d8;
      }
      if (uVar14 != 0) {
        uVar30 = 0;
        do {
          pPVar5 = this + uVar30 * 0x58 + 0x24cd8;
          PVar7 = *pPVar5;
          pbVar31 = (byte *)(ulong)((byte)PVar7 >> 1);
          pbVar27 = pbVar31;
          if (((byte)PVar7 & 1) != 0) {
            pbVar27 = *(byte **)(this + uVar30 * 0x58 + 0x24ce0);
          }
          if (pbVar27 == pbVar19) {
            __s1 = *(PedestrianSystem **)(this + uVar30 * 0x58 + 0x24ce8);
            if (((byte)PVar7 & 1) == 0) {
              __s1 = this + uVar30 * 0x58 + 0x24cd9;
            }
            pPVar9 = pPVar5;
            pPVar10 = pPVar21;
            pbVar27 = pbVar19;
            if (((byte)PVar7 & 1) == 0) {
              while( true ) {
                if (pbVar27 == (byte *)0x0) goto LAB_008912bc;
                if (pPVar9[1] != *pPVar10) break;
                pbVar31 = pbVar31 + -1;
                pPVar9 = pPVar9 + 1;
                pPVar10 = pPVar10 + 1;
                pbVar27 = pbVar31;
              }
            }
            else if ((pbVar19 == (byte *)0x0) ||
                    (iVar13 = memcmp(__s1,pPVar21,(size_t)pbVar19), iVar13 == 0)) {
LAB_008912bc:
              *(PedestrianSystem **)(this + uVar17 * 0x3b0 + 0x6708) = pPVar5;
              break;
            }
          }
          uVar30 = uVar30 + 1;
        } while (uVar30 != uVar14);
      }
      if (*(long *)(this + uVar17 * 0x3b0 + 0x6708) == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
           iVar13 != 0)) {
                    /* try { // try from 00891680 to 0089168b has its CatchHandler @ 00892e28 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
                    /* try { // try from 008912e8 to 00891353 has its CatchHandler @ 008930c8 */
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning (%s): no walk is defined for pedestrian with id %d.\n",param_1,
                          uVar36);
      }
      FUN_00893588(acStack_268);
      Properties::getString((Properties *)aDStack_168,acStack_268,"");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)(this + uVar17 * 0x3b0 + 0x6728));
      FUN_00893588(acStack_268,extraout_x1_04,"pedestrianSystem.pedestrians.pedestrian(%u)#animSet",
                   uVar17 & 0xffffffff);
                    /* try { // try from 00891354 to 00891447 has its CatchHandler @ 00893030 */
      pcVar18 = (char *)DomXMLFile::getValue(aDStack_168,acStack_268,false);
      if (pcVar18 == (char *)0x0) {
        *(undefined8 *)(this + uVar17 * 0x3b0 + 0x6700) = *(undefined8 *)(this + 0x25948);
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
           iVar13 != 0)) {
                    /* try { // try from 008916d0 to 008916db has its CatchHandler @ 00892e24 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error (%s): animSet not defined for pedestrian with id %d.\n",param_1,
                           uVar36);
      }
      else {
        iVar13 = strcmp(pcVar18,"character");
        if (iVar13 == 0) {
          *(undefined8 *)(this + uVar17 * 0x3b0 + 0x6700) = *(undefined8 *)(this + 0x25940);
        }
        else {
          iVar13 = strcmp(pcVar18,"pedestrian");
          *(undefined8 *)(this + uVar17 * 0x3b0 + 0x6700) = *(undefined8 *)(this + 0x25948);
          if (iVar13 != 0) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar13 != 0)) {
                    /* try { // try from 00891720 to 0089172b has its CatchHandler @ 00892e20 */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
            LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                               "Error (%s): animSet %s not recognised for pedestrian with id %d.\n",
                               param_1,pcVar18,uVar36);
          }
        }
      }
      FUN_00893588(acStack_268);
                    /* try { // try from 00891448 to 00891457 has its CatchHandler @ 00892fc8 */
      pcVar18 = (char *)DomXMLFile::getValue(aDStack_168,acStack_268,false);
      if (pcVar18 != (char *)0x0) {
        local_2f8 = (byte *)0x0;
        local_2f0 = (byte *)0x0;
        local_2e8 = (void *)0x0;
        sVar16 = strlen(pcVar18);
        if (0xffffffffffffffef < sVar16) {
                    /* try { // try from 00892cd8 to 00892cdf has its CatchHandler @ 00892f68 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (sVar16 < 0x17) {
          local_310 = CONCAT71(local_310._1_7_,(char)((int)sVar16 << 1));
          pvVar35 = (void *)((ulong)&local_310 | 1);
          if (sVar16 != 0) goto LAB_008914bc;
        }
        else {
          uVar36 = sVar16 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 008914a4 to 008914ab has its CatchHandler @ 00892eec */
          pvVar35 = operator_new(uVar36);
          local_310 = uVar36 | 1;
          local_308 = sVar16;
          local_300 = pvVar35;
LAB_008914bc:
          memcpy(pvVar35,pcVar18,sVar16);
        }
        *(undefined *)((long)pvVar35 + sVar16) = 0;
        local_326 = 0;
        local_328 = 0x7c02;
                    /* try { // try from 008914dc to 008914f3 has its CatchHandler @ 00892f70 */
        StringUtil::split((basic_string *)&local_310,(basic_string *)&local_328,(vector *)&local_2f8
                          ,true,true);
        if ((local_328 & 1) != 0) {
          operator_delete(local_318);
        }
        if ((local_310 & 1) != 0) {
          operator_delete(local_300);
        }
        lVar33 = (long)local_2f0 - (long)local_2f8 >> 3;
        uVar36 = lVar33 * -0x5555555555555555;
        uVar30 = *(long *)(this + uVar17 * 0x3b0 + 0x6718) -
                 *(long *)(this + uVar17 * 0x3b0 + 0x6710) >> 2;
        if (uVar36 < uVar30 || uVar36 - uVar30 == 0) {
          if (uVar36 < uVar30) {
            *(long *)(this + uVar17 * 0x3b0 + 0x6718) =
                 *(long *)(this + uVar17 * 0x3b0 + 0x6710) + lVar33 * -0x5555555555555554;
          }
        }
        else {
                    /* try { // try from 0089154c to 00891553 has its CatchHandler @ 00892ef0 */
          std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
                    ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)
                     (this + uVar17 * 0x3b0 + 0x6710),uVar36 - uVar30);
        }
        pbVar19 = local_2f8;
        pbVar27 = local_2f8;
        if (local_2f0 != local_2f8) {
          uVar36 = 0;
          do {
            pbVar27 = local_2f8 + uVar36 * 0x18;
            pbVar19 = *(byte **)(pbVar27 + 0x10);
            if ((*pbVar27 & 1) == 0) {
              pbVar19 = pbVar27 + 1;
            }
                    /* try { // try from 00891590 to 00891593 has its CatchHandler @ 00893220 */
            uVar42 = StringUtil::strtouint((char *)pbVar19);
            *(undefined4 *)(*(long *)(this + uVar17 * 0x3b0 + 0x6710) + uVar36 * 4) = uVar42;
            uVar36 = (ulong)((int)uVar36 + 1);
            uVar30 = ((long)local_2f0 - (long)local_2f8 >> 3) * -0x5555555555555555;
            pbVar19 = local_2f8;
            pbVar27 = local_2f0;
          } while (uVar36 <= uVar30 && uVar30 - uVar36 != 0);
        }
        local_2f8 = pbVar19;
        if (pbVar19 != (byte *)0x0) {
          while (pbVar31 = pbVar27, pbVar31 != pbVar19) {
            pbVar27 = pbVar31 + -0x18;
            if ((*pbVar27 & 1) != 0) {
              operator_delete(*(void **)(pbVar31 + -8));
            }
          }
          local_2f0 = pbVar19;
          operator_delete(local_2f8);
        }
      }
      if (((ulong)local_2e0 & 1) != 0) {
        operator_delete(local_2d0);
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < *(uint *)(this + 0x25900));
  }
                    /* try { // try from 00891760 to 008917af has its CatchHandler @ 00892ed8 */
  uVar14 = DomXMLFile::getNumChildren(aDStack_168,"pedestrianSystem.sounds");
  *(uint *)(this + 0x25908) = uVar14;
  if (uVar14 < 0x41) {
    if (uVar14 != 0) goto LAB_008917bc;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar13 != 0))
    {
                    /* try { // try from 00892d3c to 00892d47 has its CatchHandler @ 00892e1c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Error (%s): PedestrianSystem system supports up to %u sounds, %u were provided.\n"
                      ,param_1,0x40,(ulong)*(uint *)(this + 0x25908));
    *(undefined4 *)(this + 0x25908) = 0x40;
LAB_008917bc:
    uVar17 = 0;
    do {
                    /* try { // try from 008917f4 to 00891803 has its CatchHandler @ 00892fe8 */
      FUN_00893588(acStack_268);
                    /* try { // try from 00891804 to 0089182f has its CatchHandler @ 00893014 */
      auVar47 = DomXMLFile::getValue(aDStack_168,acStack_268,false);
      pcVar18 = auVar47._0_8_;
      if (pcVar18 != (char *)0x0) {
        FUN_00893588(acStack_268,auVar47._8_8_,"pedestrianSystem.sounds.sound(%u)#id",
                     uVar17 & 0xffffffff);
                    /* try { // try from 00891830 to 0089183f has its CatchHandler @ 00892fb4 */
        uVar14 = Properties::getInt((Properties *)aDStack_168,acStack_268,-1);
        pppppppplVar34 = (long ********)&local_2c0;
        pppppppplVar32 = (long ********)&local_2c0;
        pppppppplVar28 = local_2c0;
        while (pppppppplVar28 != (long ********)0x0) {
          while (pppppppplVar32 = pppppppplVar28,
                (int)uVar14 < *(int *)((long)pppppppplVar32 + 0x1c)) {
            pppppppplVar34 = pppppppplVar32;
            pppppppplVar28 = (long ********)*pppppppplVar32;
            if ((long ********)*pppppppplVar32 == (long ********)0x0) {
              ppppppplVar26 = *pppppppplVar32;
              goto joined_r0x008918ec;
            }
          }
          if ((int)uVar14 <= *(int *)((long)pppppppplVar32 + 0x1c)) break;
          pppppppplVar34 = pppppppplVar32 + 1;
          pppppppplVar28 = (long ********)*pppppppplVar34;
        }
        ppppppplVar26 = *pppppppplVar34;
joined_r0x008918ec:
        if (ppppppplVar26 == (long *******)0x0) {
                    /* try { // try from 0089189c to 008918a7 has its CatchHandler @ 00892ee8 */
          ppppppplVar26 = (long *******)operator_new(0x28);
          *(uint *)((long)ppppppplVar26 + 0x1c) = uVar14;
          *(int *)(ppppppplVar26 + 4) = (int)uVar17;
          *ppppppplVar26 = (long ******)0x0;
          ppppppplVar26[1] = (long ******)0x0;
          ppppppplVar26[2] = (long ******)pppppppplVar32;
          *pppppppplVar34 = ppppppplVar26;
          if ((long ********)*local_2c8 != (long ********)0x0) {
            ppppppplVar26 = *pppppppplVar34;
            local_2c8 = (long ********)*local_2c8;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    ((__tree_node_base *)local_2c0,(__tree_node_base *)ppppppplVar26);
          local_2b8 = local_2b8 + 1;
        }
        local_2e0 = (byte *)0x0;
        local_2d8 = (byte *)0x0;
        local_2d0 = (PedestrianSystem *)0x0;
        if (*pcVar18 == '$') {
                    /* try { // try from 00891920 to 00891a03 has its CatchHandler @ 0089317c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((char *)&local_2e0);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&local_2e0);
          uVar45 = extraout_x1_05;
        }
        else {
          PathUtil::buildAbsolutePath((basic_string *)&local_298,pcVar18,(basic_string *)&local_2e0)
          ;
          uVar45 = extraout_x1_06;
        }
        FUN_00893588(acStack_268,uVar45,"pedestrianSystem.sounds.sound(%u)#volume",
                     uVar17 & 0xffffffff);
        fVar43 = (float)Properties::getFloat((Properties *)aDStack_168,acStack_268,1.0);
        pfVar29 = (float *)(this + uVar17 * 0x20 + 0x23b88);
        *pfVar29 = fVar43;
        FUN_00893588(acStack_268,extraout_x1_07,"pedestrianSystem.sounds.sound(%u)#indoorVolume",
                     uVar17 & 0xffffffff);
        fVar43 = (float)Properties::getFloat((Properties *)aDStack_168,acStack_268,*pfVar29);
        *(float *)(this + uVar17 * 0x20 + 0x23b8c) = fVar43;
        FUN_00893588(acStack_268,extraout_x1_08,"pedestrianSystem.sounds.sound(%u)#isWalk",
                     uVar17 & 0xffffffff);
        bVar12 = Properties::getBoolDefault((Properties *)aDStack_168,acStack_268,false);
        this[uVar17 * 0x20 + 0x23b90] = (PedestrianSystem)(bVar12 & 1);
        FUN_00893588(acStack_268,extraout_x1_09,"pedestrianSystem.sounds.sound(%u)#variation",
                     uVar17 & 0xffffffff);
                    /* try { // try from 00891a04 to 00891a8b has its CatchHandler @ 00892fd8 */
        pcVar18 = (char *)DomXMLFile::getValue(aDStack_168,acStack_268,false);
        if (pcVar18 == (char *)0x0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar13 != 0)) {
                    /* try { // try from 00891b6c to 00891b77 has its CatchHandler @ 00892e58 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                            "Warning (%s): no variation is defined for pedestrian with id %d.\n",
                            param_1,(ulong)uVar14);
        }
        else {
          iVar13 = strcmp(pcVar18,"male");
          if (iVar13 == 0) {
            uVar42 = 0;
          }
          else {
            iVar13 = strcmp(pcVar18,"female");
            if (iVar13 == 0) {
              uVar42 = 1;
            }
            else {
              iVar13 = strcmp(pcVar18,"unisex");
              if (iVar13 != 0) goto LAB_00891aac;
              uVar42 = 2;
            }
          }
          *(undefined4 *)(this + uVar17 * 0x20 + 0x23b7c) = uVar42;
        }
LAB_00891aac:
        pfVar6 = (float *)(this + uVar17 * 0x20 + 0x23b8c);
        if (this[0x25977] != (PedestrianSystem)0x0) {
          pfVar6 = pfVar29;
        }
        fVar43 = *pfVar6;
                    /* try { // try from 00891ac0 to 00891acb has its CatchHandler @ 008930b0 */
        this_01 = (AudioSource *)operator_new(0x298);
        pPVar25 = (PedestrianSystem *)((ulong)&local_2e0 | 1);
        if (((ulong)local_2e0 & 1) != 0) {
          pPVar25 = local_2d0;
        }
                    /* try { // try from 00891ae0 to 00891aff has its CatchHandler @ 00892fb8 */
        AudioSource::AudioSource
                  (this_01,"PedestrianAudio",(char *)pPVar25,10.0,1.0,fVar43,1,param_8,1);
        *(uint *)(this + uVar17 * 0x20 + 0x23b78) = uVar14;
        ppAVar40 = (AudioSource **)(this + uVar17 * 0x20 + 0x23b80);
        *ppAVar40 = this_01;
                    /* try { // try from 00891b10 to 00891b47 has its CatchHandler @ 008930b0 */
        ScenegraphNode::setVisibility((ScenegraphNode *)this_01,false);
        AudioSourceSample::setAutoPlay((AudioSourceSample *)(*ppAVar40 + 0x158),false);
        (**(code **)(**(long **)(this + 0x25950) + 0x18))
                  (*(long **)(this + 0x25950),*ppAVar40,0xffffffff);
        if (((ulong)local_2e0 & 1) != 0) {
          operator_delete(local_2d0);
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < *(uint *)(this + 0x25908));
  }
                    /* try { // try from 00891ba4 to 00891bc7 has its CatchHandler @ 00892ea0 */
  iVar13 = DomXMLFile::getNumChildren(aDStack_168,"pedestrianSystem.staticPedestrianGroups");
  FUN_00893588(acStack_268,extraout_x1_10,"pedestrianSystem.staticPedestrianGroups#selectorPoolSize"
              );
                    /* try { // try from 00891bc8 to 00891bd7 has its CatchHandler @ 00892edc */
  fVar43 = (float)Properties::getFloat((Properties *)aDStack_168,acStack_268,0.5);
  if (0 < iVar13) {
    pvVar35 = (void *)((ulong)&local_2f8 | 1);
    iVar38 = 0;
    do {
      uVar17 = (ulong)*(uint *)(this + 0x258fc);
      if (99 < *(uint *)(this + 0x258fc)) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
           iVar13 != 0)) {
                    /* try { // try from 00892dd4 to 00892ddf has its CatchHandler @ 00892e14 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
                    /* try { // try from 0089240c to 00892427 has its CatchHandler @ 00892e98 */
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning (%s): PedestrianSystem system supports up to %u pedestrian groups groups, %u were provided.\n"
                          ,param_1,100,(ulong)*(uint *)(this + 0x258fc));
        break;
      }
      this[uVar17 * 0xd8 + 0x1008] = (PedestrianSystem)0x1;
                    /* try { // try from 00891c38 to 00891c73 has its CatchHandler @ 00892fec */
      FUN_00893588(acStack_268);
      fVar43 = (float)Properties::getFloat((Properties *)aDStack_168,acStack_268,fVar43);
      FUN_00893588(acStack_268,extraout_x1_11,"pedestrianSystem.staticPedestrianGroups.group(%u)",
                   iVar38);
                    /* try { // try from 00891c74 to 00891c7f has its CatchHandler @ 00892f24 */
      iVar15 = DomXMLFile::getNumChildren(aDStack_168,acStack_268);
      if (iVar15 < 1) {
        fVar46 = 0.0;
      }
      else {
        fVar46 = 0.0;
        iVar41 = 0;
        ppfVar1 = (float **)(this + uVar17 * 0xd8 + 0xfe8);
        do {
                    /* try { // try from 00891ce4 to 00891cfb has its CatchHandler @ 008931e0 */
          FUN_00893588(acStack_268);
                    /* try { // try from 00891cfc to 00891d0f has its CatchHandler @ 008931dc */
          pcVar18 = (char *)Properties::getString((Properties *)aDStack_168,acStack_268,"");
          local_2e0 = (byte *)0x0;
          local_2d8 = (byte *)0x0;
          local_2d0 = (PedestrianSystem *)0x0;
          pbVar19 = (byte *)strlen(pcVar18);
          if ((byte *)0xffffffffffffffef < pbVar19) {
                    /* try { // try from 00892c78 to 00892c7f has its CatchHandler @ 008931d4 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (pbVar19 < (byte *)0x17) {
            local_2f8 = (byte *)CONCAT71(local_2f8._1_7_,(char)((int)pbVar19 << 1));
            pvVar20 = pvVar35;
            if (pbVar19 != (byte *)0x0) goto LAB_00891d6c;
          }
          else {
                    /* try { // try from 00891d50 to 00891d57 has its CatchHandler @ 008930d8 */
            pvVar20 = operator_new((ulong)(pbVar19 + 0x10) & 0xfffffffffffffff0);
            local_2f8 = (byte *)((ulong)(pbVar19 + 0x10) & 0xfffffffffffffff0 | 1);
            local_2f0 = pbVar19;
            local_2e8 = pvVar20;
LAB_00891d6c:
            memcpy(pvVar20,pcVar18,(size_t)pbVar19);
          }
          *(byte *)((long)pvVar20 + (long)pbVar19) = 0;
          local_310._2_6_ = (uint6)(local_310 >> 0x10) & 0xffffffffff00;
          local_310 = CONCAT62(local_310._2_6_,0x3b02);
                    /* try { // try from 00891d8c to 00891da3 has its CatchHandler @ 008931e4 */
          StringUtil::split((basic_string *)&local_2f8,(basic_string *)&local_310,
                            (vector *)&local_2e0,false,true);
          if ((local_310 & 1) != 0) {
            operator_delete(local_300);
          }
          if (((ulong)local_2f8 & 1) != 0) {
            operator_delete(local_2e8);
          }
          if (local_2e0 != local_2d8) {
            ppbVar37 = *(basic_string ***)(this + uVar17 * 0xd8 + 0xfd0);
            if (ppbVar37 == *(basic_string ***)(this + uVar17 * 0xd8 + 0xfd8)) {
                    /* try { // try from 00891e74 to 00891e97 has its CatchHandler @ 00893218 */
              std::__ndk1::
              vector<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>,std::__ndk1::allocator<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>>
              ::
              __push_back_slow_path<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>const&>
                        ((vector<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>,std::__ndk1::allocator<std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>>
                          *)(this + uVar17 * 0xd8 + 0xfc8),(vector *)&local_2e0);
            }
            else {
              *ppbVar37 = (basic_string *)0x0;
              ppbVar37[1] = (basic_string *)0x0;
              ppbVar37[2] = (basic_string *)0x0;
              uVar36 = (long)local_2d8 - (long)local_2e0;
              if (uVar36 != 0) {
                if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar36 >> 3) * -0x5555555555555555)) {
                    /* try { // try from 00892c90 to 00892c97 has its CatchHandler @ 0089301c */
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__vector_base_common<true>::__throw_length_error();
                }
                    /* try { // try from 00891e20 to 00891e23 has its CatchHandler @ 00893028 */
                pbVar22 = (basic_string *)operator_new(uVar36);
                pbVar27 = local_2d8;
                *ppbVar37 = pbVar22;
                ppbVar37[1] = pbVar22;
                ppbVar37[2] = pbVar22 + ((long)uVar36 >> 3) * 2;
                for (pbVar19 = local_2e0; pbVar19 != pbVar27; pbVar19 = pbVar19 + 0x18) {
                    /* try { // try from 00891e44 to 00891e4f has its CatchHandler @ 00893248 */
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  basic_string(pbVar22);
                  pbVar22 = pbVar22 + 6;
                }
                ppbVar37[1] = pbVar22;
              }
              *(basic_string ***)(this + uVar17 * 0xd8 + 0xfd0) = ppbVar37 + 3;
            }
          }
          FUN_00893588(acStack_268);
                    /* try { // try from 00891e98 to 00891f17 has its CatchHandler @ 0089320c */
          fVar44 = (float)Properties::getFloat((Properties *)aDStack_168,acStack_268,0.0);
          pfVar29 = *ppfVar1;
          if (pfVar29 == *(float **)(this + uVar17 * 0xd8 + 0xff0)) {
            pvVar20 = *(void **)(this + uVar17 * 0xd8 + 0xfe0);
            uVar30 = (long)pfVar29 - (long)pvVar20;
            uVar36 = ((long)uVar30 >> 2) + 1;
            if (uVar36 >> 0x3e != 0) {
                    /* try { // try from 00892c80 to 00892c87 has its CatchHandler @ 008930dc */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar36 <= (ulong)((long)uVar30 >> 1)) {
              uVar36 = (long)uVar30 >> 1;
            }
            if (0x7ffffffffffffffb < uVar30) {
              uVar36 = 0x3fffffffffffffff;
            }
            if (uVar36 == 0) {
              pvVar23 = (void *)0x0;
            }
            else {
              if (uVar36 >> 0x3e != 0) {
                    /* try { // try from 00892c98 to 00892ca3 has its CatchHandler @ 008930dc */
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
              pvVar23 = operator_new(uVar36 << 2);
            }
            pfVar29 = (float *)((long)pvVar23 + ((long)uVar30 >> 2) * 4);
            *pfVar29 = fVar44;
            if (0 < (long)uVar30) {
              memcpy(pvVar23,pvVar20,uVar30);
            }
            *ppfVar1 = pfVar29 + 1;
            *(void **)(this + uVar17 * 0xd8 + 0xfe0) = pvVar23;
            *(float **)(this + uVar17 * 0xd8 + 0xff0) = (float *)((long)pvVar23 + uVar36 * 4);
            if (pvVar20 != (void *)0x0) {
              operator_delete(pvVar20);
            }
          }
          else {
            *pfVar29 = fVar44;
            *ppfVar1 = pfVar29 + 1;
          }
          pbVar19 = local_2e0;
          pbVar27 = local_2d8;
          if (local_2e0 != (byte *)0x0) {
            while (pbVar31 = pbVar27, pbVar31 != pbVar19) {
              pbVar27 = pbVar31 + -0x18;
              if ((*pbVar27 & 1) != 0) {
                operator_delete(*(void **)(pbVar31 + -8));
              }
            }
            local_2d8 = pbVar19;
            operator_delete(local_2e0);
          }
          fVar46 = fVar46 + fVar44;
          iVar41 = iVar41 + 1;
        } while (iVar41 != iVar15);
      }
      *(float *)(this + uVar17 * 0xd8 + 0xffc) = fVar46;
                    /* try { // try from 00891fc0 to 0089203f has its CatchHandler @ 0089305c */
      FUN_00893588(acStack_268);
      Properties::getString((Properties *)aDStack_168,acStack_268,"");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)(PedestrianGroupData *)(this + uVar17 * 0xd8 + 0xf38));
      FUN_00893588(acStack_268,extraout_x1_12,
                   "pedestrianSystem.staticPedestrianGroups.group(%u)#spawnChance",iVar38);
      uVar42 = Properties::getFloat((Properties *)aDStack_168,acStack_268,0.0);
      *(undefined4 *)(this + uVar17 * 0xd8 + 0xff8) = uVar42;
      FUN_00893588(acStack_268,extraout_x1_13,
                   "pedestrianSystem.staticPedestrianGroups.group(%u)#pedestrianIds",iVar38);
      local_2e0 = (byte *)0x0;
      local_2d8 = (byte *)0x0;
      local_2d0 = (PedestrianSystem *)0x0;
                    /* try { // try from 00892048 to 0089209b has its CatchHandler @ 00892fa8 */
      pcVar18 = (char *)Properties::getString((Properties *)aDStack_168,acStack_268,"");
      pbVar19 = (byte *)strlen(pcVar18);
      if ((byte *)0xffffffffffffffef < pbVar19) {
                    /* try { // try from 00892cf8 to 00892cff has its CatchHandler @ 00892f00 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (pbVar19 < (byte *)0x17) {
        local_2f8 = (byte *)CONCAT71(local_2f8._1_7_,(char)((int)pbVar19 << 1));
        pvVar20 = pvVar35;
        if (pbVar19 != (byte *)0x0) goto LAB_008920ac;
        pPVar25 = (PedestrianSystem *)0x0;
      }
      else {
        pvVar20 = operator_new((ulong)(pbVar19 + 0x10) & 0xfffffffffffffff0);
        local_2f8 = (byte *)((ulong)(pbVar19 + 0x10) & 0xfffffffffffffff0 | 1);
        local_2f0 = pbVar19;
        local_2e8 = pvVar20;
LAB_008920ac:
        pPVar25 = (PedestrianSystem *)memcpy(pvVar20,pcVar18,(size_t)pbVar19);
      }
      *(byte *)((long)pvVar20 + (long)pbVar19) = 0;
                    /* try { // try from 008920c0 to 008920cb has its CatchHandler @ 00892f04 */
      parseIntArray(pPVar25,(basic_string *)&local_2f8,(vector *)&local_2e0);
      if (((ulong)local_2f8 & 1) != 0) {
        operator_delete(local_2e8);
      }
      plVar2 = (long *)(this + uVar17 * 0xd8 + 0xf70);
      if (local_2d8 != local_2e0) {
        uVar36 = 0;
        pbVar19 = local_2e0;
        pbVar27 = local_2d8;
        do {
          if (local_2a8 != (long ********)0x0) {
            iVar15 = *(int *)(pbVar19 + uVar36 * 4);
            pppppppplVar32 = local_2a8;
            pppppppplVar34 = (long ********)&local_2a8;
            do {
              if (iVar15 <= *(int *)((long)pppppppplVar32 + 0x1c)) {
                pppppppplVar34 = pppppppplVar32;
              }
              pppppppplVar32 =
                   (long ********)pppppppplVar32[*(int *)((long)pppppppplVar32 + 0x1c) < iVar15];
            } while (pppppppplVar32 != (long ********)0x0);
            if (((long *********)pppppppplVar34 != &local_2a8) &&
               (*(int *)((long)pppppppplVar34 + 0x1c) <= iVar15)) {
              puVar24 = (undefined4 *)*plVar2;
              if (puVar24 == *(undefined4 **)(this + uVar17 * 0xd8 + 0xf78)) {
                pvVar20 = *(void **)(this + uVar17 * 0xd8 + 0xf68);
                uVar39 = (long)puVar24 - (long)pvVar20;
                uVar30 = ((long)uVar39 >> 2) + 1;
                if (uVar30 >> 0x3e != 0) {
                    /* try { // try from 00892cc8 to 00892ccf has its CatchHandler @ 00892fdc */
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__vector_base_common<true>::__throw_length_error();
                }
                if (uVar30 <= (ulong)((long)uVar39 >> 1)) {
                  uVar30 = (long)uVar39 >> 1;
                }
                if (0x7ffffffffffffffb < uVar39) {
                  uVar30 = 0x3fffffffffffffff;
                }
                if (uVar30 == 0) {
                  pvVar23 = (void *)0x0;
                }
                else {
                  if (uVar30 >> 0x3e != 0) {
                    /* try { // try from 00892d18 to 00892d23 has its CatchHandler @ 00892fdc */
                    /* WARNING: Subroutine does not return */
                    FUN_006d1f18(
                                "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                );
                  }
                    /* try { // try from 008921c4 to 008921c7 has its CatchHandler @ 00892efc */
                  pvVar23 = operator_new(uVar30 << 2);
                }
                puVar24 = (undefined4 *)((long)pvVar23 + ((long)uVar39 >> 2) * 4);
                *puVar24 = *(undefined4 *)(pppppppplVar34 + 4);
                if (0 < (long)uVar39) {
                  memcpy(pvVar23,pvVar20,uVar39);
                }
                *(void **)(this + uVar17 * 0xd8 + 0xf68) = pvVar23;
                *plVar2 = (long)(puVar24 + 1);
                *(void **)(this + uVar17 * 0xd8 + 0xf78) = (void *)((long)pvVar23 + uVar30 * 4);
                if (pvVar20 != (void *)0x0) {
                  operator_delete(pvVar20);
                  pbVar19 = local_2e0;
                  pbVar27 = local_2d8;
                }
              }
              else {
                *puVar24 = *(undefined4 *)(pppppppplVar34 + 4);
                *plVar2 = (long)(puVar24 + 1);
              }
            }
          }
          uVar36 = (ulong)((int)uVar36 + 1);
        } while (uVar36 < (ulong)((long)pbVar27 - (long)pbVar19 >> 2));
      }
                    /* try { // try from 0089222c to 00892243 has its CatchHandler @ 008930b4 */
      FUN_00893588(acStack_268);
                    /* try { // try from 00892244 to 0089229b has its CatchHandler @ 00892fa4 */
      pcVar18 = (char *)Properties::getString((Properties *)aDStack_168,acStack_268,"");
      pbVar19 = (byte *)strlen(pcVar18);
      if ((byte *)0xffffffffffffffef < pbVar19) {
                    /* try { // try from 00892cf0 to 00892cf7 has its CatchHandler @ 00892f08 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (pbVar19 < (byte *)0x17) {
        local_2f8 = (byte *)CONCAT71(local_2f8._1_7_,(char)((int)pbVar19 << 1));
        pvVar20 = pvVar35;
        if (pbVar19 != (byte *)0x0) goto LAB_008922b0;
        pPVar25 = (PedestrianSystem *)0x0;
      }
      else {
        pvVar20 = operator_new((ulong)(pbVar19 + 0x10) & 0xfffffffffffffff0);
        local_2f8 = (byte *)((ulong)(pbVar19 + 0x10) & 0xfffffffffffffff0 | 1);
        local_2f0 = pbVar19;
        local_2e8 = pvVar20;
LAB_008922b0:
        pPVar25 = (PedestrianSystem *)memcpy(pvVar20,pcVar18,(size_t)pbVar19);
      }
      *(byte *)((long)pvVar20 + (long)pbVar19) = 0;
                    /* try { // try from 008922d4 to 008922db has its CatchHandler @ 00892f0c */
      parseIntArray(pPVar25,(basic_string *)&local_2f8,(vector *)(this + uVar17 * 0xd8 + 0xf80));
      if (((ulong)local_2f8 & 1) != 0) {
        operator_delete(local_2e8);
      }
                    /* try { // try from 008922ec to 008923d7 has its CatchHandler @ 008930b4 */
      FUN_00893588(acStack_268);
      fVar46 = (float)Properties::getFloat((Properties *)aDStack_168,acStack_268,0.0);
      *(float *)(this + uVar17 * 0xd8 + 0x1000) = fVar46 * 60.0 * 60.0 * 1000.0;
      FUN_00893588(acStack_268,extraout_x1_14,
                   "pedestrianSystem.staticPedestrianGroups.group(%u)#spawnTimeTo",iVar38);
      fVar46 = (float)Properties::getFloat((Properties *)aDStack_168,acStack_268,24.0);
      *(float *)(this + uVar17 * 0xd8 + 0x1004) = fVar46 * 60.0 * 60.0 * 1000.0;
      FUN_00893588(acStack_268,extraout_x1_15,
                   "pedestrianSystem.staticPedestrianGroups.group(%u)#allowHeadTurn",iVar38);
      bVar12 = Properties::getBoolDefault((Properties *)aDStack_168,acStack_268,false);
      this[uVar17 * 0xd8 + 0x1009] = (PedestrianSystem)(bVar12 & 1);
      if (*(long *)(this + uVar17 * 0xd8 + 0xf68) != *plVar2) {
        PedestrianGroupData::initSelectionPools
                  ((PedestrianGroupData *)(this + uVar17 * 0xd8 + 0xf38),fVar43);
        *(int *)(this + 0x258fc) = *(int *)(this + 0x258fc) + 1;
      }
      if (local_2e0 != (byte *)0x0) {
        local_2d8 = local_2e0;
        operator_delete(local_2e0);
      }
      iVar38 = iVar38 + 1;
    } while (iVar38 != iVar13);
  }
                    /* try { // try from 00892428 to 0089245b has its CatchHandler @ 00892edc */
  FUN_00893588(acStack_268);
  fVar43 = (float)Properties::getFloat((Properties *)aDStack_168,acStack_268,0.5);
  iVar13 = DomXMLFile::getNumChildren(aDStack_168,"pedestrianSystem.walkingPedestrianGroups");
  if (0 < iVar13) {
    iVar38 = 0;
    do {
      uVar17 = (ulong)*(uint *)(this + 0x258fc);
      if (99 < *(uint *)(this + 0x258fc)) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
           iVar13 != 0)) {
                    /* try { // try from 00892d88 to 00892d93 has its CatchHandler @ 00892e18 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
                    /* try { // try from 00892bb0 to 00892bcb has its CatchHandler @ 00892e9c */
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning (%s): PedestrianSystem system supports up to %u pedestrian groups groups, %u were provided.\n"
                          ,param_1,100,(ulong)*(uint *)(this + 0x258fc));
        break;
      }
      this[uVar17 * 0xd8 + 0x1008] = (PedestrianSystem)0x0;
                    /* try { // try from 008924b4 to 00892527 has its CatchHandler @ 00893060 */
      FUN_00893588(acStack_268);
      fVar43 = (float)Properties::getFloat((Properties *)aDStack_168,acStack_268,fVar43);
      FUN_00893588(acStack_268,extraout_x1_16,
                   "pedestrianSystem.walkingPedestrianGroups.group(%u)#name",iVar38);
      Properties::getString((Properties *)aDStack_168,acStack_268,"");
      this_00 = (PedestrianGroupData *)(this + uVar17 * 0xd8 + 0xf38);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)this_00);
      FUN_00893588(acStack_268,extraout_x1_17,
                   "pedestrianSystem.walkingPedestrianGroups.group(%u)#pedestrianIds",iVar38);
      local_2e0 = (byte *)0x0;
      local_2d8 = (byte *)0x0;
      local_2d0 = (PedestrianSystem *)0x0;
                    /* try { // try from 00892530 to 00892583 has its CatchHandler @ 00892fb0 */
      pcVar18 = (char *)Properties::getString((Properties *)aDStack_168,acStack_268,"");
      pbVar19 = (byte *)strlen(pcVar18);
      if ((byte *)0xffffffffffffffef < pbVar19) {
                    /* try { // try from 00892ce0 to 00892ce7 has its CatchHandler @ 00892f48 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (pbVar19 < (byte *)0x17) {
        local_2f8 = (byte *)CONCAT71(local_2f8._1_7_,(char)((int)pbVar19 << 1));
        pvVar35 = (void *)((ulong)&local_2f8 | 1);
        if (pbVar19 != (byte *)0x0) goto LAB_00892594;
        pPVar25 = (PedestrianSystem *)0x0;
      }
      else {
        pvVar35 = operator_new((ulong)(pbVar19 + 0x10) & 0xfffffffffffffff0);
        local_2f8 = (byte *)((ulong)(pbVar19 + 0x10) & 0xfffffffffffffff0 | 1);
        local_2f0 = pbVar19;
        local_2e8 = pvVar35;
LAB_00892594:
        pPVar25 = (PedestrianSystem *)memcpy(pvVar35,pcVar18,(size_t)pbVar19);
      }
      *(byte *)((long)pvVar35 + (long)pbVar19) = 0;
                    /* try { // try from 008925a8 to 008925b3 has its CatchHandler @ 00892f4c */
      parseIntArray(pPVar25,(basic_string *)&local_2f8,(vector *)&local_2e0);
      if (((ulong)local_2f8 & 1) != 0) {
        operator_delete(local_2e8);
      }
      plVar2 = (long *)(this + uVar17 * 0xd8 + 0xf70);
      if (local_2d8 != local_2e0) {
        uVar36 = 0;
        do {
          if (local_2a8 == (long ********)0x0) {
LAB_00892684:
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar15 != 0)) {
                    /* try { // try from 00892780 to 0089278b has its CatchHandler @ 00892e80 */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
            pPVar25 = this + uVar17 * 0xd8 + 0xf39;
            if (((byte)*this_00 & 1) != 0) {
              pPVar25 = *(PedestrianSystem **)(this + uVar17 * 0xd8 + 0xf48);
            }
                    /* try { // try from 008926b4 to 00892717 has its CatchHandler @ 008931b4 */
            LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                              "Warning (%s): Pedestrian id %d not found in walking group %s.\n",
                              param_1,(ulong)*(uint *)(local_2e0 + uVar36 * 4),pPVar25);
          }
          else {
            iVar15 = *(int *)(local_2e0 + uVar36 * 4);
            pppppppplVar32 = local_2a8;
            pppppppplVar34 = (long ********)&local_2a8;
            do {
              if (iVar15 <= *(int *)((long)pppppppplVar32 + 0x1c)) {
                pppppppplVar34 = pppppppplVar32;
              }
              pppppppplVar32 =
                   (long ********)pppppppplVar32[*(int *)((long)pppppppplVar32 + 0x1c) < iVar15];
            } while (pppppppplVar32 != (long ********)0x0);
            if (((long *********)pppppppplVar34 == &local_2a8) ||
               (iVar15 < *(int *)((long)pppppppplVar34 + 0x1c))) goto LAB_00892684;
            puVar24 = (undefined4 *)*plVar2;
            if (puVar24 == *(undefined4 **)(this + uVar17 * 0xd8 + 0xf78)) {
              pvVar35 = *(void **)(this + uVar17 * 0xd8 + 0xf68);
              uVar39 = (long)puVar24 - (long)pvVar35;
              uVar30 = ((long)uVar39 >> 2) + 1;
              if (uVar30 >> 0x3e != 0) {
                    /* try { // try from 00892cb8 to 00892cbf has its CatchHandler @ 00892fe4 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar30 <= (ulong)((long)uVar39 >> 1)) {
                uVar30 = (long)uVar39 >> 1;
              }
              if (0x7ffffffffffffffb < uVar39) {
                uVar30 = 0x3fffffffffffffff;
              }
              if (uVar30 == 0) {
                pvVar20 = (void *)0x0;
              }
              else {
                if (uVar30 >> 0x3e != 0) {
                    /* try { // try from 00892d00 to 00892d0b has its CatchHandler @ 00892fe4 */
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                pvVar20 = operator_new(uVar30 << 2);
              }
              puVar24 = (undefined4 *)((long)pvVar20 + ((long)uVar39 >> 2) * 4);
              *puVar24 = *(undefined4 *)(pppppppplVar34 + 4);
              if (0 < (long)uVar39) {
                memcpy(pvVar20,pvVar35,uVar39);
              }
              *plVar2 = (long)(puVar24 + 1);
              *(void **)(this + uVar17 * 0xd8 + 0xf68) = pvVar20;
              *(void **)(this + uVar17 * 0xd8 + 0xf78) = (void *)((long)pvVar20 + uVar30 * 4);
              if (pvVar35 != (void *)0x0) {
                operator_delete(pvVar35);
              }
            }
            else {
              *puVar24 = *(undefined4 *)(pppppppplVar34 + 4);
              *plVar2 = (long)(puVar24 + 1);
            }
          }
          uVar36 = (ulong)((int)uVar36 + 1);
        } while (uVar36 < (ulong)((long)local_2d8 - (long)local_2e0 >> 2));
      }
                    /* try { // try from 008927b8 to 008927cb has its CatchHandler @ 00892f44 */
      FUN_00893588(acStack_268);
      local_2f8 = (byte *)0x0;
      local_2f0 = (byte *)0x0;
      local_2e8 = (void *)0x0;
                    /* try { // try from 008927d4 to 00892827 has its CatchHandler @ 00892fac */
      pcVar18 = (char *)Properties::getString((Properties *)aDStack_168,acStack_268,"");
      sVar16 = strlen(pcVar18);
      if (0xffffffffffffffef < sVar16) {
                    /* try { // try from 00892ce8 to 00892cef has its CatchHandler @ 00892f28 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar16 < 0x17) {
        local_310 = CONCAT71(local_310._1_7_,(char)((int)sVar16 << 1));
        pvVar35 = (void *)((ulong)&local_310 | 1);
        if (sVar16 != 0) goto LAB_00892838;
        pPVar25 = (PedestrianSystem *)0x0;
      }
      else {
        uVar36 = sVar16 + 0x10 & 0xfffffffffffffff0;
        pvVar35 = operator_new(uVar36);
        local_310 = uVar36 | 1;
        local_308 = sVar16;
        local_300 = pvVar35;
LAB_00892838:
        pPVar25 = (PedestrianSystem *)memcpy(pvVar35,pcVar18,sVar16);
      }
      *(undefined *)((long)pvVar35 + sVar16) = 0;
                    /* try { // try from 0089284c to 00892857 has its CatchHandler @ 00892f2c */
      parseIntArray(pPVar25,(basic_string *)&local_310,(vector *)&local_2f8);
      if ((local_310 & 1) != 0) {
        operator_delete(local_300);
      }
      if (local_2f0 != local_2f8) {
        uVar36 = 0;
        puVar3 = (undefined8 *)(this + uVar17 * 0xd8 + 0xf88);
        do {
          if (local_2c0 == (long ********)0x0) {
LAB_0089291c:
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar15 != 0)) {
                    /* try { // try from 00892a2c to 00892a37 has its CatchHandler @ 00892e6c */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
            pPVar25 = this + uVar17 * 0xd8 + 0xf39;
            if (((byte)*this_00 & 1) != 0) {
              pPVar25 = *(PedestrianSystem **)(this + uVar17 * 0xd8 + 0xf48);
            }
                    /* try { // try from 00892950 to 008929b7 has its CatchHandler @ 00893198 */
            LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                              "Warning (%s): Sound id %d not found in walking group %s.\n",param_1,
                              (ulong)*(uint *)(local_2f8 + uVar36 * 4),pPVar25);
          }
          else {
            iVar15 = *(int *)(local_2f8 + uVar36 * 4);
            pppppppplVar32 = local_2c0;
            pppppppplVar34 = (long ********)&local_2c0;
            do {
              if (iVar15 <= *(int *)((long)pppppppplVar32 + 0x1c)) {
                pppppppplVar34 = pppppppplVar32;
              }
              pppppppplVar32 =
                   (long ********)pppppppplVar32[*(int *)((long)pppppppplVar32 + 0x1c) < iVar15];
            } while (pppppppplVar32 != (long ********)0x0);
            if (((long *********)pppppppplVar34 == &local_2c0) ||
               (iVar15 < *(int *)((long)pppppppplVar34 + 0x1c))) goto LAB_0089291c;
            puVar24 = (undefined4 *)*puVar3;
            if (puVar24 == *(undefined4 **)(this + uVar17 * 0xd8 + 0xf90)) {
              pvVar35 = *(void **)(this + uVar17 * 0xd8 + 0xf80);
              uVar39 = (long)puVar24 - (long)pvVar35;
              uVar30 = ((long)uVar39 >> 2) + 1;
              if (uVar30 >> 0x3e != 0) {
                    /* try { // try from 00892cc0 to 00892cc7 has its CatchHandler @ 00892fe0 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar30 <= (ulong)((long)uVar39 >> 1)) {
                uVar30 = (long)uVar39 >> 1;
              }
              if (0x7ffffffffffffffb < uVar39) {
                uVar30 = 0x3fffffffffffffff;
              }
              if (uVar30 == 0) {
                pvVar20 = (void *)0x0;
              }
              else {
                if (uVar30 >> 0x3e != 0) {
                    /* try { // try from 00892d0c to 00892d17 has its CatchHandler @ 00892fe0 */
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                pvVar20 = operator_new(uVar30 << 2);
              }
              puVar24 = (undefined4 *)((long)pvVar20 + ((long)uVar39 >> 2) * 4);
              *puVar24 = *(undefined4 *)(pppppppplVar34 + 4);
              if (0 < (long)uVar39) {
                memcpy(pvVar20,pvVar35,uVar39);
              }
              *puVar3 = puVar24 + 1;
              *(void **)(this + uVar17 * 0xd8 + 0xf80) = pvVar20;
              *(void **)(this + uVar17 * 0xd8 + 0xf90) = (void *)((long)pvVar20 + uVar30 * 4);
              if (pvVar35 != (void *)0x0) {
                operator_delete(pvVar35);
              }
            }
            else {
              *puVar24 = *(undefined4 *)(pppppppplVar34 + 4);
              *puVar3 = puVar24 + 1;
            }
          }
          uVar36 = (ulong)((int)uVar36 + 1);
        } while (uVar36 < (ulong)((long)local_2f0 - (long)local_2f8 >> 2));
      }
                    /* try { // try from 00892a64 to 00892b6b has its CatchHandler @ 008930ac */
      FUN_00893588(acStack_268);
      fVar46 = (float)Properties::getFloat((Properties *)aDStack_168,acStack_268,0.0);
      *(float *)(this + uVar17 * 0xd8 + 0x1000) = fVar46 * 60.0 * 60.0 * 1000.0;
      FUN_00893588(acStack_268,extraout_x1_18,
                   "pedestrianSystem.walkingPedestrianGroups.group(%u)#spawnTimeTo",iVar38);
      fVar46 = (float)Properties::getFloat((Properties *)aDStack_168,acStack_268,24.0);
      *(float *)(this + uVar17 * 0xd8 + 0x1004) = fVar46 * 60.0 * 60.0 * 1000.0;
      FUN_00893588(acStack_268,extraout_x1_19,
                   "pedestrianSystem.walkingPedestrianGroups.group(%u)#allowHeadTurn",iVar38);
      bVar12 = Properties::getBoolDefault((Properties *)aDStack_168,acStack_268,true);
      this[uVar17 * 0xd8 + 0x1009] = (PedestrianSystem)(bVar12 & 1);
      if (*(long *)(this + uVar17 * 0xd8 + 0xf68) != *plVar2) {
        PedestrianGroupData::initSelectionPools(this_00,fVar43);
        *(int *)(this + 0x258fc) = *(int *)(this + 0x258fc) + 1;
      }
      if (local_2f8 != (byte *)0x0) {
        local_2f0 = local_2f8;
        operator_delete(local_2f8);
      }
      if (local_2e0 != (byte *)0x0) {
        local_2d8 = local_2e0;
        operator_delete(local_2e0);
      }
      iVar38 = iVar38 + 1;
    } while (iVar38 != iVar13);
  }
                    /* try { // try from 00892bcc to 00892bdf has its CatchHandler @ 00892edc */
  inspectDataNodes(this,param_2);
  findSplineTransitions();
  this[0x25974] = (PedestrianSystem)0x1;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>
  ::destroy((__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>
             *)&local_2c8,(__tree_node *)local_2c0);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>
  ::destroy((__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>
             *)&local_2b0,(__tree_node *)local_2a8);
LAB_00892c04:
                    /* try { // try from 00892c04 to 00892c13 has its CatchHandler @ 00892ee0 */
  this_02 = (UpdateManager *)UpdateManager::getInstance();
  UpdateManager::addUpdateable(this_02,(Updateable *)(this + 0x20),false);
  DomXMLFile::~DomXMLFile(aDStack_168);
  if ((local_298 & 1) != 0) {
    operator_delete(local_288);
  }
  if ((local_280 & 1) != 0) {
    operator_delete(local_270);
  }
  if (*(long *)(lVar8 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


