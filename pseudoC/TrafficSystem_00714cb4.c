// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TrafficSystem
// Entry Point: 00714cb4
// Size: 9152 bytes
// Signature: undefined __thiscall TrafficSystem(TrafficSystem * this, char * param_1, TransformGroup * param_2, TransformGroup * param_3, bool param_4, bool param_5, bool param_6, uint param_7)


/* TrafficSystem::TrafficSystem(char const*, TransformGroup*, TransformGroup*, bool, bool, bool,
   unsigned int) */

void __thiscall
TrafficSystem::TrafficSystem
          (TrafficSystem *this,char *param_1,TransformGroup *param_2,TransformGroup *param_3,
          bool param_4,bool param_5,bool param_6,uint param_7)

{
  UserAttributes *this_00;
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  BoundingBox *pBVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  TransformGroup *this_01;
  size_t sVar10;
  ulong uVar11;
  char *pcVar12;
  ulong uVar13;
  ulong *puVar14;
  void *__dest;
  BoundingBox *__dest_00;
  uint *puVar15;
  UpdateManager *this_02;
  long **pplVar16;
  ulong uVar17;
  float *pfVar18;
  undefined2 *puVar19;
  float *pfVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ushort uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  Spline *pSVar27;
  void *pvVar28;
  long *plVar29;
  ulong uVar30;
  long **pplVar31;
  long **pplVar32;
  long **pplVar33;
  long **pplVar34;
  long *plVar35;
  long *plVar36;
  long lVar37;
  CubicSpline *this_03;
  long *plVar38;
  undefined4 *puVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  int iVar52;
  undefined4 uVar53;
  float fVar54;
  float fVar55;
  undefined4 uVar56;
  float fVar57;
  float fVar58;
  undefined4 uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined4 uVar63;
  float fVar64;
  float fVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  float fVar68;
  undefined8 local_378;
  long *local_370;
  long *local_368;
  long *local_360;
  long *local_358;
  long *local_350;
  long *local_348;
  ulong local_340;
  undefined8 uStack_338;
  void *local_330;
  undefined8 local_328;
  size_t local_320;
  void *local_318;
  undefined8 local_310;
  undefined4 *local_308;
  undefined4 *local_300;
  float local_2f8;
  float local_2f4;
  undefined4 local_2f0;
  float local_2e8;
  float local_2e4;
  undefined4 local_2e0;
  float local_2d8;
  float local_2d4;
  undefined4 local_2d0;
  float local_2c8;
  float local_2c4;
  undefined4 local_2c0;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  undefined8 local_2a8;
  float local_2a0 [2];
  undefined8 local_298;
  float local_290 [2];
  undefined auStack_288 [128];
  char acStack_208 [128];
  DomXMLFile aDStack_188 [216];
  long local_b0;
  
  lVar4 = tpidr_el0;
  local_b0 = *(long *)(lVar4 + 0x28);
  Entity::Entity((Entity *)this,"TrafficSystem",true);
  this[0x28] = (TrafficSystem)0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)(this + 0x20) = &PTR__TrafficSystem_00fda2b8;
  *(undefined ***)(this + 0x30) = &PTR_onAssetLoaded_00fda2e0;
  *(undefined ***)(this + 0x38) = &PTR__TrafficSystem_00fda300;
  *(undefined ***)this = &PTR__TrafficSystem_00fda280;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined ***)(this + 0x58) = &PTR__TrafficSystem_00fda320;
                    /* try { // try from 00714d78 to 00714d7f has its CatchHandler @ 00717120 */
  I3DAssetPtr::I3DAssetPtr((I3DAssetPtr *)(this + 0x70));
  *(undefined8 *)(this + 0xa0) = 0x8f60c8c12a4d8903;
  *(undefined8 *)(this + 0x98) = 0x8f60c8c12a4d8903;
  lVar24 = 0;
  do {
    *(undefined ***)(this + lVar24 + 0x1200) = &PTR_onAssetLoaded_00fda440;
                    /* try { // try from 00714e08 to 00714e0f has its CatchHandler @ 007171cc */
    I3DAssetPtr::I3DAssetPtr((I3DAssetPtr *)(this + lVar24 + 0x1208));
    *(undefined ***)(this + lVar24 + 0x1200) = &PTR_onAssetLoaded_00fda3f0;
    *(undefined8 *)(this + lVar24 + 0x13e0) = 0;
    *(undefined8 *)(this + lVar24 + 0x14e0) = 0;
    *(undefined8 *)(this + lVar24 + 0x14d8) = 0;
    *(undefined8 *)(this + lVar24 + 0x14d0) = 0;
    *(undefined8 *)(this + lVar24 + 0x1270) = 0;
    *(undefined8 *)(this + lVar24 + 0x1268) = 0;
    *(undefined8 *)(this + lVar24 + 0x1280) = 0;
    *(undefined8 *)(this + lVar24 + 0x1278) = 0;
    *(undefined8 *)(this + lVar24 + 0x1250) = 0;
    *(undefined8 *)(this + lVar24 + 0x1248) = 0;
    *(undefined8 *)(this + lVar24 + 0x1260) = 0;
    *(undefined8 *)(this + lVar24 + 0x1258) = 0;
    *(undefined8 *)(this + lVar24 + 0x1348) = 0;
    *(undefined8 *)(this + lVar24 + 0x1340) = 0;
    *(undefined8 *)(this + lVar24 + 0x1358) = 0;
    *(undefined8 *)(this + lVar24 + 0x1350) = 0;
    *(undefined8 *)(this + lVar24 + 0x1368) = 0;
    *(undefined8 *)(this + lVar24 + 0x1360) = 0;
    *(undefined8 *)(this + lVar24 + 0x1378) = 0;
    *(undefined8 *)(this + lVar24 + 0x1370) = 0;
    *(undefined8 *)(this + lVar24 + 5000) = 0;
    *(undefined8 *)(this + lVar24 + 0x1380) = 0;
    *(undefined8 *)(this + lVar24 + 0x1398) = 0;
    *(undefined8 *)(this + lVar24 + 0x1390) = 0;
    lVar37 = lVar24 + 0x1510;
    *(undefined8 *)(this + lVar24 + 0x1230) = 0;
    *(undefined8 *)(this + lVar24 + 0x1228) = 0;
    *(undefined8 *)(this + lVar24 + 0x1240) = 0;
    *(undefined8 *)(this + lVar24 + 0x1238) = 0;
    *(undefined8 *)(this + lVar24 + 0x13f0) = 0;
    *(undefined8 *)(this + lVar24 + 0x13e8) = 0;
    *(undefined8 *)(this + lVar24 + 0x1400) = 0;
    *(undefined8 *)(this + lVar24 + 0x1410) = 0;
    *(undefined8 *)(this + lVar24 + 0x1408) = 0;
    *(undefined8 *)(this + lVar24 + 0x1420) = 0;
    *(undefined8 *)(this + lVar24 + 0x1430) = 0;
    *(undefined8 *)(this + lVar24 + 0x1428) = 0;
    *(undefined8 *)(this + lVar24 + 0x13c0) = 0;
    *(undefined8 *)(this + lVar24 + 0x13b8) = 0;
    *(undefined8 *)(this + lVar24 + 0x13d0) = 0;
    *(undefined8 *)(this + lVar24 + 0x13c8) = 0;
    *(undefined8 *)(this + lVar24 + 0x13b0) = 0;
    *(undefined8 *)(this + lVar24 + 0x13a8) = 0;
    lVar24 = lVar24 + 0x310;
  } while (this + lVar37 != this + 0x4300);
  *(undefined ***)(this + 0x4308) = &PTR_onAssetLoaded_00fda440;
                    /* try { // try from 00714e84 to 00714e87 has its CatchHandler @ 00717114 */
  I3DAssetPtr::I3DAssetPtr((I3DAssetPtr *)(this + 0x4310));
  *(undefined ***)(this + 0x43a0) = &PTR_onAssetLoaded_00fda440;
  *(undefined8 *)(this + 0x4388) = 0;
  *(undefined8 *)(this + 0x4380) = 0;
  *(undefined8 *)(this + 0x4378) = 0;
  *(undefined8 *)(this + 0x4370) = 0;
  *(undefined8 *)(this + 0x4368) = 0;
  *(undefined8 *)(this + 0x4360) = 0;
  *(undefined8 *)(this + 0x4358) = 0;
  *(undefined8 *)(this + 0x4350) = 0;
  *(undefined8 *)(this + 0x4348) = 0;
  *(undefined8 *)(this + 0x4340) = 0;
  *(undefined8 *)(this + 0x4338) = 0;
  *(undefined8 *)(this + 0x4330) = 0;
                    /* try { // try from 00714ec0 to 0071525f has its CatchHandler @ 007171a4 */
  I3DAssetPtr::I3DAssetPtr((I3DAssetPtr *)(this + 0x43a8));
  *(undefined8 *)(this + 0x4420) = 0;
  *(undefined8 *)(this + 0x4418) = 0;
  *(undefined8 *)(this + 0x4410) = 0;
  *(undefined8 *)(this + 0x4408) = 0;
  *(undefined8 *)(this + 0x4400) = 0;
  *(undefined8 *)(this + 0x43f8) = 0;
  *(undefined8 *)(this + 0x43e0) = 0;
  *(undefined8 *)(this + 0x43d8) = 0;
  *(undefined8 *)(this + 0x43f0) = 0;
  *(undefined8 *)(this + 0x43e8) = 0;
  *(undefined8 *)(this + 0x43d0) = 0;
  *(undefined8 *)(this + 0x43c8) = 0;
  *(undefined ***)(this + 0x4438) = &PTR_onAssetLoaded_00fda440;
  I3DAssetPtr::I3DAssetPtr((I3DAssetPtr *)(this + 0x4440));
  *(undefined ***)(this + 0x44d0) = &PTR_onAssetLoaded_00fda440;
  *(undefined8 *)(this + 0x44b8) = 0;
  *(undefined8 *)(this + 0x44b0) = 0;
  *(undefined8 *)(this + 0x44a8) = 0;
  *(undefined8 *)(this + 0x44a0) = 0;
  *(undefined8 *)(this + 0x4498) = 0;
  *(undefined8 *)(this + 0x4490) = 0;
  *(undefined8 *)(this + 0x4488) = 0;
  *(undefined8 *)(this + 0x4480) = 0;
  *(undefined8 *)(this + 0x4478) = 0;
  *(undefined8 *)(this + 0x4470) = 0;
  *(undefined8 *)(this + 0x4468) = 0;
  *(undefined8 *)(this + 0x4460) = 0;
  I3DAssetPtr::I3DAssetPtr((I3DAssetPtr *)(this + 0x44d8));
  *(undefined8 *)(this + 0x4550) = 0;
  *(undefined8 *)(this + 0x4548) = 0;
  *(undefined8 *)(this + 0x4540) = 0;
  *(undefined8 *)(this + 0x4538) = 0;
  *(undefined8 *)(this + 0x4530) = 0;
  *(undefined8 *)(this + 0x4528) = 0;
  *(undefined8 *)(this + 0x4510) = 0;
  *(undefined8 *)(this + 0x4508) = 0;
  *(undefined8 *)(this + 0x4520) = 0;
  *(undefined8 *)(this + 0x4518) = 0;
  *(undefined8 *)(this + 0x4500) = 0;
  *(undefined8 *)(this + 0x44f8) = 0;
  *(undefined ***)(this + 0x4568) = &PTR_onAssetLoaded_00fda440;
  I3DAssetPtr::I3DAssetPtr((I3DAssetPtr *)(this + 0x4570));
  *(undefined ***)(this + 0x4600) = &PTR_onAssetLoaded_00fda440;
  *(undefined8 *)(this + 0x45e8) = 0;
  *(undefined8 *)(this + 0x45e0) = 0;
  *(undefined8 *)(this + 0x45d8) = 0;
  *(undefined8 *)(this + 0x45d0) = 0;
  *(undefined8 *)(this + 0x45c8) = 0;
  *(undefined8 *)(this + 0x45c0) = 0;
  *(undefined8 *)(this + 0x45b8) = 0;
  *(undefined8 *)(this + 0x45b0) = 0;
  *(undefined8 *)(this + 0x45a8) = 0;
  *(undefined8 *)(this + 0x45a0) = 0;
  *(undefined8 *)(this + 0x4598) = 0;
  *(undefined8 *)(this + 0x4590) = 0;
  I3DAssetPtr::I3DAssetPtr((I3DAssetPtr *)(this + 0x4608));
  *(undefined8 *)(this + 0x4680) = 0;
  *(undefined8 *)(this + 0x4678) = 0;
  *(undefined8 *)(this + 0x4670) = 0;
  *(undefined8 *)(this + 0x4668) = 0;
  *(undefined8 *)(this + 0x4660) = 0;
  *(undefined8 *)(this + 0x4658) = 0;
  *(undefined8 *)(this + 0x4640) = 0;
  *(undefined8 *)(this + 0x4638) = 0;
  *(undefined8 *)(this + 18000) = 0;
  *(undefined8 *)(this + 0x4648) = 0;
  *(undefined8 *)(this + 0x4630) = 0;
  *(undefined8 *)(this + 0x4628) = 0;
  *(undefined ***)(this + 0x4698) = &PTR_onAssetLoaded_00fda440;
  I3DAssetPtr::I3DAssetPtr((I3DAssetPtr *)(this + 0x46a0));
  *(undefined ***)(this + 0x4730) = &PTR_onAssetLoaded_00fda440;
  *(undefined8 *)(this + 0x4718) = 0;
  *(undefined8 *)(this + 0x4710) = 0;
  *(undefined8 *)(this + 0x4708) = 0;
  *(undefined8 *)(this + 0x4700) = 0;
  *(undefined8 *)(this + 0x46f8) = 0;
  *(undefined8 *)(this + 0x46f0) = 0;
  *(undefined8 *)(this + 0x46e8) = 0;
  *(undefined8 *)(this + 0x46e0) = 0;
  *(undefined8 *)(this + 0x46d8) = 0;
  *(undefined8 *)(this + 0x46d0) = 0;
  *(undefined8 *)(this + 0x46c8) = 0;
  *(undefined8 *)(this + 0x46c0) = 0;
  I3DAssetPtr::I3DAssetPtr((I3DAssetPtr *)(this + 0x4738));
  *(undefined8 *)(this + 0x47b0) = 0;
  *(undefined8 *)(this + 0x47a8) = 0;
  *(undefined8 *)(this + 0x47a0) = 0;
  *(undefined8 *)(this + 0x4798) = 0;
  *(undefined8 *)(this + 0x4790) = 0;
  *(undefined8 *)(this + 0x4788) = 0;
  *(undefined8 *)(this + 0x4770) = 0;
  *(undefined8 *)(this + 0x4768) = 0;
  *(undefined8 *)(this + 0x4780) = 0;
  *(undefined8 *)(this + 0x4778) = 0;
  *(undefined8 *)(this + 0x4760) = 0;
  *(undefined8 *)(this + 0x4758) = 0;
  *(undefined ***)(this + 0x47c8) = &PTR_onAssetLoaded_00fda440;
  I3DAssetPtr::I3DAssetPtr((I3DAssetPtr *)(this + 0x47d0));
  *(undefined ***)(this + 0x4860) = &PTR_onAssetLoaded_00fda440;
  *(undefined8 *)(this + 0x4848) = 0;
  *(undefined8 *)(this + 0x4840) = 0;
  *(undefined8 *)(this + 0x4838) = 0;
  *(undefined8 *)(this + 0x4830) = 0;
  *(undefined8 *)(this + 0x4828) = 0;
  *(undefined8 *)(this + 0x4820) = 0;
  *(undefined8 *)(this + 0x4818) = 0;
  *(undefined8 *)(this + 0x4810) = 0;
  *(undefined8 *)(this + 0x4808) = 0;
  *(undefined8 *)(this + 0x4800) = 0;
  *(undefined8 *)(this + 0x47f8) = 0;
  *(undefined8 *)(this + 0x47f0) = 0;
  I3DAssetPtr::I3DAssetPtr((I3DAssetPtr *)(this + 0x4868));
  *(undefined8 *)(this + 0x48e0) = 0;
  *(undefined8 *)(this + 0x48d8) = 0;
  *(undefined8 *)(this + 0x48d0) = 0;
  *(undefined8 *)(this + 0x48c8) = 0;
  *(undefined8 *)(this + 0x48c0) = 0;
  *(undefined8 *)(this + 0x48b8) = 0;
  *(undefined8 *)(this + 0x48a0) = 0;
  *(undefined8 *)(this + 0x4898) = 0;
  *(undefined8 *)(this + 0x48b0) = 0;
  *(undefined8 *)(this + 0x48a8) = 0;
  *(undefined8 *)(this + 0x4890) = 0;
  *(undefined8 *)(this + 0x4888) = 0;
  *(undefined ***)(this + 0x48f8) = &PTR_onAssetLoaded_00fda440;
  I3DAssetPtr::I3DAssetPtr((I3DAssetPtr *)(this + 0x4900));
  *(undefined ***)(this + 0x4990) = &PTR_onAssetLoaded_00fda440;
  *(undefined8 *)(this + 0x4978) = 0;
  *(undefined8 *)(this + 0x4970) = 0;
  *(undefined8 *)(this + 0x4968) = 0;
  *(undefined8 *)(this + 0x4960) = 0;
  *(undefined8 *)(this + 0x4958) = 0;
  *(undefined8 *)(this + 0x4950) = 0;
  *(undefined8 *)(this + 0x4948) = 0;
  *(undefined8 *)(this + 0x4940) = 0;
  *(undefined8 *)(this + 0x4938) = 0;
  *(undefined8 *)(this + 0x4930) = 0;
  *(undefined8 *)(this + 0x4928) = 0;
  *(undefined8 *)(this + 0x4920) = 0;
  I3DAssetPtr::I3DAssetPtr((I3DAssetPtr *)(this + 0x4998));
  *(undefined8 *)(this + 0x4a10) = 0;
  *(undefined8 *)(this + 0x4a08) = 0;
  *(undefined8 *)(this + 0x4a00) = 0;
  *(undefined8 *)(this + 0x49f8) = 0;
  *(undefined8 *)(this + 0x49f0) = 0;
  *(undefined8 *)(this + 0x49e8) = 0;
  *(undefined8 *)(this + 0x49d0) = 0;
  *(undefined8 *)(this + 0x49c8) = 0;
  *(undefined8 *)(this + 0x49e0) = 0;
  *(undefined8 *)(this + 0x49d8) = 0;
  *(undefined8 *)(this + 0x49c0) = 0;
  *(undefined8 *)(this + 0x49b8) = 0;
  *(undefined ***)(this + 0x4a28) = &PTR_onAssetLoaded_00fda440;
  I3DAssetPtr::I3DAssetPtr((I3DAssetPtr *)(this + 0x4a30));
  *(undefined ***)(this + 0x4ac0) = &PTR_onAssetLoaded_00fda440;
  *(undefined8 *)(this + 0x4aa8) = 0;
  *(undefined8 *)(this + 0x4aa0) = 0;
  *(undefined8 *)(this + 0x4a98) = 0;
  *(undefined8 *)(this + 0x4a90) = 0;
  *(undefined8 *)(this + 0x4a88) = 0;
  *(undefined8 *)(this + 0x4a80) = 0;
  *(undefined8 *)(this + 0x4a78) = 0;
  *(undefined8 *)(this + 0x4a70) = 0;
  *(undefined8 *)(this + 0x4a68) = 0;
  *(undefined8 *)(this + 0x4a60) = 0;
  *(undefined8 *)(this + 0x4a58) = 0;
  *(undefined8 *)(this + 0x4a50) = 0;
  I3DAssetPtr::I3DAssetPtr((I3DAssetPtr *)(this + 0x4ac8));
  *(undefined8 *)(this + 0x4b30) = 0;
  *(undefined8 *)(this + 0x4b28) = 0;
  *(undefined8 *)(this + 0x4b40) = 0;
  *(undefined8 *)(this + 0x4b38) = 0;
  *(undefined8 *)(this + 0x4b20) = 0;
  *(undefined8 *)(this + 0x4b18) = 0;
  *(undefined8 *)(this + 0x4b00) = 0;
  *(undefined8 *)(this + 0x4af8) = 0;
  *(undefined8 *)(this + 0x4b10) = 0;
  *(undefined8 *)(this + 0x4b08) = 0;
  *(undefined ***)(this + 0x4b58) = &PTR_onAssetLoaded_00fda440;
  *(undefined8 *)(this + 0x4af0) = 0;
  *(undefined8 *)(this + 0x4ae8) = 0;
  I3DAssetPtr::I3DAssetPtr((I3DAssetPtr *)(this + 0x4b60));
  *(undefined ***)(this + 0x4bf0) = &PTR_onAssetLoaded_00fda440;
  *(undefined8 *)(this + 0x4bd8) = 0;
  *(undefined8 *)(this + 0x4bd0) = 0;
  *(undefined8 *)(this + 0x4bc8) = 0;
  *(undefined8 *)(this + 0x4bc0) = 0;
  *(undefined8 *)(this + 0x4bb8) = 0;
  *(undefined8 *)(this + 0x4bb0) = 0;
  *(undefined8 *)(this + 0x4ba8) = 0;
  *(undefined8 *)(this + 0x4ba0) = 0;
  *(undefined8 *)(this + 0x4b98) = 0;
  *(undefined8 *)(this + 0x4b90) = 0;
  *(undefined8 *)(this + 0x4b88) = 0;
  *(undefined8 *)(this + 0x4b80) = 0;
  I3DAssetPtr::I3DAssetPtr((I3DAssetPtr *)(this + 0x4bf8));
  *(undefined8 *)(this + 0x4cc0) = 0;
  *(undefined8 *)(this + 0x4cb8) = 0;
  *(undefined8 *)(this + 0x4c70) = 0;
  *(undefined8 *)(this + 0x4c68) = 0;
  *(undefined8 *)(this + 0x4c60) = 0;
  *(undefined8 *)(this + 0x4c58) = 0;
  *(undefined8 *)(this + 0x4c50) = 0;
  *(undefined8 *)(this + 0x4c48) = 0;
  *(undefined8 *)(this + 0x4c40) = 0;
  *(undefined8 *)(this + 0x4c38) = 0;
  *(undefined8 *)(this + 0x4c30) = 0;
  *(undefined8 *)(this + 0x4c28) = 0;
  *(undefined8 *)(this + 0x4c20) = 0;
  *(undefined8 *)(this + 0x4c18) = 0;
  pplVar16 = (long **)(this + 0x4ce0);
  *(undefined8 *)(this + 0x4ce8) = 0;
  *(TrafficSystem **)(this + 0x4cb0) = this + 0x4cb8;
  *(undefined8 *)(this + 0x4ce0) = 0;
  *(long ***)(this + 0x4cd8) = pplVar16;
  *(TrafficSystem **)(this + 0x4cf0) = this + 0x4cf8;
  *(undefined8 *)(this + 0x4d00) = 0;
  *(undefined8 *)(this + 0x4cf8) = 0;
  *(undefined4 *)(this + 0x4c98) = 0;
  *(undefined8 *)(this + 0x4c88) = 0;
  *(undefined8 *)(this + 0x4c90) = 0;
  *(undefined8 *)(this + 0x4ca8) = 0;
  *(undefined8 *)(this + 0x4ca0) = 0;
  *(undefined8 *)(this + 0x4cc8) = 0;
  *(undefined8 *)(this + 0x4cd0) = 0;
  *(undefined8 *)(this + 0x4d08) = 0x4bdbba004c903210;
  this[0x4d10] = (TrafficSystem)0x0;
                    /* try { // try from 00715308 to 0071530b has its CatchHandler @ 00717110 */
  TrafficVehicle::TrafficVehicle((TrafficVehicle *)(this + 0x4d20));
                    /* try { // try from 00715314 to 00715377 has its CatchHandler @ 0071717c */
  TrafficVehicle::TrafficVehicle((TrafficVehicle *)(this + 0x50c8));
  TrafficVehicle::TrafficVehicle((TrafficVehicle *)(this + 0x5470));
  TrafficVehicle::TrafficVehicle((TrafficVehicle *)(this + 0x5818));
  TrafficVehicle::TrafficVehicle((TrafficVehicle *)(this + 0x5bc0));
  TrafficVehicle::TrafficVehicle((TrafficVehicle *)(this + 0x5f68));
  TrafficVehicle::TrafficVehicle((TrafficVehicle *)(this + 0x6310));
  TrafficVehicle::TrafficVehicle((TrafficVehicle *)(this + 0x66b8));
  TrafficVehicle::TrafficVehicle((TrafficVehicle *)(this + 0x6a60));
  TrafficVehicle::TrafficVehicle((TrafficVehicle *)(this + 0x6e08));
  *(TransformGroup **)(this + 0x60) = param_2;
  *(undefined2 *)(this + 0xb2) = 0;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x10000000;
  *(undefined2 *)(this + 0x7270) = 0;
  *(undefined8 *)(this + 0x71c8) = 0;
  *(undefined8 *)(this + 0x71c0) = 0;
  this[0xb4] = (TrafficSystem)param_4;
  *(undefined8 *)(this + 0x71b8) = 0;
  *(undefined8 *)(this + 0x71b0) = 0;
  *(undefined8 *)(this + 0x7268) = 0;
  this[0xb5] = (TrafficSystem)param_5;
  *(undefined8 *)(this + 0xa0) = 0x82277b8b3abeedc4;
  *(undefined8 *)(this + 0x98) = 0x82277b8b3abeedc4;
  *(undefined4 *)(this + 0x4d18) = 0;
  this[0xb6] = (TrafficSystem)param_6;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0x7260) = 0;
  *(uint *)(this + 0x7264) = param_7;
  *(undefined8 *)(this + 0x11f8) = 0;
  *(undefined8 *)(this + 0x4300) = 0;
  *(undefined4 *)(this + 0x4c88) = 0;
  *(undefined8 *)(this + 0x7258) = 0x800000005;
  *(undefined8 *)(this + 0x7250) = 0xffffffff00000000;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined2 *)(this + 0xb0) = 1;
                    /* try { // try from 00715430 to 00715437 has its CatchHandler @ 00717138 */
  this_01 = (TransformGroup *)operator_new(0x158);
                    /* try { // try from 0071543c to 00715447 has its CatchHandler @ 007170fc */
  TransformGroup::TransformGroup(this_01,"TrafficSystemVehicles");
  *(TransformGroup **)(this + 0x68) = this_01;
                    /* try { // try from 00715458 to 00715467 has its CatchHandler @ 00717138 */
  (**(code **)(*(long *)param_3 + 0x18))(param_3,this_01,0xffffffff);
  sVar10 = strlen(param_1);
  if (0xffffffffffffffef < sVar10) {
                    /* try { // try from 0071700c to 00717013 has its CatchHandler @ 00717130 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar10 < 0x17) {
    pvVar28 = (void *)((ulong)&local_328 | 1);
    local_328 = CONCAT71(local_328._1_7_,(char)((int)sVar10 << 1));
    if (sVar10 != 0) goto LAB_007154bc;
  }
  else {
    uVar11 = sVar10 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 007154a4 to 007154ab has its CatchHandler @ 00717130 */
    pvVar28 = operator_new(uVar11);
    local_328 = uVar11 | 1;
    local_320 = sVar10;
    local_318 = pvVar28;
LAB_007154bc:
    memcpy(pvVar28,param_1,sVar10);
  }
  *(undefined *)((long)pvVar28 + sVar10) = 0;
  local_340 = 0;
  uStack_338 = 0;
  local_330 = (void *)0x0;
                    /* try { // try from 007154d8 to 007154e7 has its CatchHandler @ 007170f0 */
  PathUtil::getBasePath((basic_string *)&local_328,(basic_string *)&local_340,true);
  puVar22 = (undefined8 *)(this + 0x71d0);
  *(undefined8 *)(this + 0x7238) = 0;
  *(undefined8 *)(this + 0x7230) = 0;
  *(undefined8 *)(this + 0x7248) = 0;
  *(undefined8 *)(this + 0x7240) = 0;
  *(undefined8 *)(this + 0x7218) = 0;
  *(undefined8 *)(this + 0x7210) = 0;
  *(undefined8 *)(this + 0x7228) = 0;
  *(undefined8 *)(this + 0x7220) = 0;
  *(undefined8 *)(this + 0x71f8) = 0;
  *(undefined8 *)(this + 0x71f0) = 0;
  *(undefined8 *)(this + 0x7208) = 0;
  *(undefined8 *)(this + 0x7200) = 0;
  *(undefined8 *)(this + 0x71d8) = 0;
  *puVar22 = 0;
  *(undefined8 *)(this + 0x71e8) = 0;
  *(undefined8 *)(this + 0x71e0) = 0;
                    /* try { // try from 00715508 to 0071550f has its CatchHandler @ 007170ec */
  DomXMLFile::DomXMLFile(aDStack_188);
                    /* try { // try from 00715510 to 00715537 has its CatchHandler @ 00717154 */
  uVar11 = DomXMLFile::loadFromFile(aDStack_188,param_1,true);
  if ((uVar11 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar9 != 0)) {
                    /* try { // try from 00717038 to 00717043 has its CatchHandler @ 00717074 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 007155b0 to 007155c7 has its CatchHandler @ 00717154 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Can\'t load traffic system XML file \'%s\'.\n",param_1);
    goto LAB_00716f40;
  }
  bVar7 = Properties::getBoolDefault
                    ((Properties *)aDStack_188,"trafficSystem#leftHandTraffic",false);
  this[0x4d10] = (TrafficSystem)(bVar7 & 1);
                    /* try { // try from 00715544 to 00715553 has its CatchHandler @ 007170dc */
  uVar8 = DomXMLFile::getNumChildren(aDStack_188,"trafficSystem.vehicles");
  if (0xf < uVar8) {
    uVar8 = 0x10;
  }
                    /* try { // try from 00715560 to 00715577 has its CatchHandler @ 007170d8 */
  pcVar12 = (char *)DomXMLFile::getValue(aDStack_188,"trafficSystem#licensePlates",false);
  if (pcVar12 != (char *)0x0) {
    local_358 = (long *)0x0;
    local_350 = (long *)0x0;
    local_348 = (long *)0x0;
    if (*pcVar12 == '$') {
                    /* try { // try from 00715594 to 0071559b has its CatchHandler @ 007170e8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)&local_358);
    }
    else {
                    /* try { // try from 007155cc to 00715613 has its CatchHandler @ 007170e8 */
      PathUtil::buildAbsolutePath((basic_string *)&local_340,pcVar12,(basic_string *)&local_358);
    }
    plVar29 = (long *)((ulong)&local_358 | 1);
    if (((ulong)local_358 & 1) != 0) {
      plVar29 = local_348;
    }
    this[0xb0] = (TrafficSystem)0x0;
    I3DAssetPtr::loadI3DAsync
              ((I3DAssetPtr *)(this + 0x70),(char *)plVar29,false,false,(MeshSplitFileState *)0x0,
               false,true,(Loader *)(this + 0x30));
    if (((ulong)local_358 & 1) != 0) {
      operator_delete(local_348);
    }
  }
  if (uVar8 != 0) {
    uVar11 = 0;
    lVar24 = 0x1290;
    lVar37 = 0x4398;
    do {
                    /* try { // try from 00715674 to 007156f3 has its CatchHandler @ 007171f8 */
      FUN_00717680(auStack_288,0x80,"trafficSystem.vehicles.vehicle(%u)",uVar11 & 0xffffffff);
      FUN_00717680(acStack_208,0x80,"%s#probability",auStack_288);
      uVar40 = Properties::getFloat((Properties *)aDStack_188,acStack_208,1.0);
      *(undefined4 *)(this + lVar24) = uVar40;
      FUN_00717680(acStack_208,0x80,"%s#probabilityParked",auStack_288);
      uVar40 = Properties::getFloat((Properties *)aDStack_188,acStack_208,1.0);
      *(undefined4 *)(this + lVar37) = uVar40;
      FUN_00717680(acStack_208,0x80,"%s#filename",auStack_288);
                    /* try { // try from 007156f4 to 00715707 has its CatchHandler @ 00717188 */
      pcVar12 = (char *)DomXMLFile::getValue(aDStack_188,acStack_208,false);
      if (pcVar12 != (char *)0x0) {
        local_358 = (long *)0x0;
        local_350 = (long *)0x0;
        local_348 = (long *)0x0;
        if (*pcVar12 == '$') {
                    /* try { // try from 00715724 to 0071575b has its CatchHandler @ 0071718c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&local_358);
        }
        else {
          PathUtil::buildAbsolutePath((basic_string *)&local_340,pcVar12,(basic_string *)&local_358)
          ;
        }
        plVar29 = (long *)((ulong)&local_358 | 1);
        if (((ulong)local_358 & 1) != 0) {
          plVar29 = local_348;
        }
        uVar13 = loadVehicle(this,(char *)plVar29,*(uint *)(this + 0x11fc),
                             (basic_string *)&local_340);
        if ((uVar13 & 1) != 0) {
          *(int *)(this + 0x11fc) = *(int *)(this + 0x11fc) + 1;
        }
        if (((ulong)local_358 & 1) != 0) {
          operator_delete(local_348);
        }
      }
      uVar11 = uVar11 + 1;
      lVar24 = lVar24 + 0x310;
      lVar37 = lVar37 + 0x98;
    } while (uVar8 != uVar11);
  }
  uVar2 = *(uint *)(this + 0x11fc);
  uVar11 = (ulong)uVar2;
  if (uVar2 == 0) {
LAB_00715834:
    *(undefined4 *)puVar22 = *(undefined4 *)(this + 0x1290);
  }
  else {
    if (uVar2 == 1) {
      fVar41 = 0.0;
      uVar17 = 0;
LAB_007157e0:
      lVar24 = uVar11 - uVar17;
      pfVar18 = (float *)(this + uVar17 * 0x310 + 0x1290);
      do {
        fVar45 = *pfVar18;
        pfVar18 = pfVar18 + 0xc4;
        lVar24 = lVar24 + -1;
        fVar41 = fVar41 + fVar45;
      } while (lVar24 != 0);
    }
    else {
      uVar17 = uVar11 & 0xfffffffe;
      fVar41 = 0.0;
      pfVar18 = (float *)(this + 0x1290);
      uVar13 = uVar17;
      do {
        fVar45 = *pfVar18;
        uVar13 = uVar13 - 2;
        pfVar20 = pfVar18 + 0xc4;
        pfVar18 = pfVar18 + 0x188;
        fVar41 = fVar41 + fVar45 + *pfVar20;
      } while (uVar13 != 0);
      if (uVar17 != uVar11) goto LAB_007157e0;
    }
    if (uVar2 == 0) goto LAB_00715834;
    if (fVar41 <= 1e-06) {
      fVar41 = 1.0 / (float)(ulong)uVar2;
      if (uVar2 < 2) {
        uVar17 = 0;
      }
      else {
        uVar17 = uVar11 & 0xfffffffe;
        pfVar18 = (float *)(this + 0x1290);
        uVar13 = uVar17;
        do {
          *pfVar18 = fVar41;
          uVar13 = uVar13 - 2;
          pfVar18[0xc4] = fVar41;
          pfVar18 = pfVar18 + 0x188;
        } while (uVar13 != 0);
        if (uVar17 == uVar11) goto LAB_0071592c;
      }
      lVar24 = uVar11 - uVar17;
      pfVar18 = (float *)(this + uVar17 * 0x310 + 0x1290);
      do {
        *pfVar18 = fVar41;
        pfVar18 = pfVar18 + 0xc4;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
    }
    else {
      if (uVar2 < 2) {
        uVar17 = 0;
      }
      else {
        uVar17 = uVar11 & 0xfffffffe;
        pfVar18 = (float *)(this + 0x1290);
        uVar13 = uVar17;
        do {
          uVar13 = uVar13 - 2;
          *pfVar18 = *pfVar18 / fVar41;
          pfVar18[0xc4] = pfVar18[0xc4] / fVar41;
          pfVar18 = pfVar18 + 0x188;
        } while (uVar13 != 0);
        if (uVar17 == uVar11) goto LAB_0071592c;
      }
      lVar24 = uVar11 - uVar17;
      pfVar18 = (float *)(this + uVar17 * 0x310 + 0x1290);
      do {
        lVar24 = lVar24 + -1;
        *pfVar18 = *pfVar18 / fVar41;
        pfVar18 = pfVar18 + 0xc4;
      } while (lVar24 != 0);
    }
LAB_0071592c:
    fVar41 = *(float *)(this + 0x1290);
    *(float *)puVar22 = fVar41;
    if (1 < uVar2) {
      pfVar18 = (float *)(this + 0x15a0);
      lVar24 = uVar11 - 1;
      pfVar20 = (float *)(this + 0x71d4);
      do {
        fVar45 = *pfVar18;
        pfVar18 = pfVar18 + 0xc4;
        lVar24 = lVar24 + -1;
        fVar41 = fVar41 + fVar45;
        *pfVar20 = fVar41;
        pfVar20 = pfVar20 + 1;
      } while (lVar24 != 0);
    }
  }
  uVar3 = *(uint *)(this + 0x4304);
  uVar11 = (ulong)uVar3;
  if (uVar3 == 0) {
LAB_00715a1c:
    *(undefined4 *)(this + 0x7210) = *(undefined4 *)(this + 0x4398);
  }
  else {
    if (uVar3 == 1) {
      fVar41 = 0.0;
      uVar17 = 0;
LAB_007159cc:
      lVar24 = uVar11 - uVar17;
      pfVar18 = (float *)(this + uVar17 * 0x98 + 0x4398);
      do {
        lVar24 = lVar24 + -1;
        fVar41 = fVar41 + *pfVar18;
        pfVar18 = pfVar18 + 0x26;
      } while (lVar24 != 0);
    }
    else {
      uVar17 = uVar11 & 0xfffffffe;
      fVar41 = 0.0;
      pfVar18 = (float *)(this + 0x4430);
      uVar13 = uVar17;
      do {
        pfVar20 = pfVar18 + -0x26;
        uVar13 = uVar13 - 2;
        fVar45 = *pfVar18;
        pfVar18 = pfVar18 + 0x4c;
        fVar41 = fVar41 + *pfVar20 + fVar45;
      } while (uVar13 != 0);
      if (uVar17 != uVar11) goto LAB_007159cc;
    }
    if (uVar3 == 0) goto LAB_00715a1c;
    if (fVar41 <= 1e-06) {
      fVar41 = 1.0 / (float)(ulong)uVar3;
      if (uVar3 < 2) {
        uVar17 = 0;
      }
      else {
        uVar17 = uVar11 & 0xfffffffe;
        pfVar18 = (float *)(this + 0x4430);
        uVar13 = uVar17;
        do {
          pfVar18[-0x26] = fVar41;
          uVar13 = uVar13 - 2;
          *pfVar18 = fVar41;
          pfVar18 = pfVar18 + 0x4c;
        } while (uVar13 != 0);
        if (uVar17 == uVar11) goto LAB_00715b0c;
      }
      lVar24 = uVar11 - uVar17;
      pfVar18 = (float *)(this + uVar17 * 0x98 + 0x4398);
      do {
        lVar24 = lVar24 + -1;
        *pfVar18 = fVar41;
        pfVar18 = pfVar18 + 0x26;
      } while (lVar24 != 0);
    }
    else {
      if (uVar3 < 2) {
        uVar17 = 0;
      }
      else {
        uVar17 = uVar11 & 0xfffffffe;
        pfVar18 = (float *)(this + 0x4430);
        uVar13 = uVar17;
        do {
          uVar13 = uVar13 - 2;
          pfVar18[-0x26] = pfVar18[-0x26] / fVar41;
          *pfVar18 = *pfVar18 / fVar41;
          pfVar18 = pfVar18 + 0x4c;
        } while (uVar13 != 0);
        if (uVar17 == uVar11) goto LAB_00715b0c;
      }
      lVar24 = uVar11 - uVar17;
      pfVar18 = (float *)(this + uVar17 * 0x98 + 0x4398);
      do {
        lVar24 = lVar24 + -1;
        *pfVar18 = *pfVar18 / fVar41;
        pfVar18 = pfVar18 + 0x26;
      } while (lVar24 != 0);
    }
LAB_00715b0c:
    fVar41 = *(float *)(this + 0x4398);
    *(float *)(this + 0x7210) = fVar41;
    if (1 < uVar3) {
      lVar24 = uVar11 - 1;
      pfVar18 = (float *)(this + 0x4430);
      pfVar20 = (float *)(this + 0x7214);
      do {
        lVar24 = lVar24 + -1;
        fVar41 = fVar41 + *pfVar18;
        *pfVar20 = fVar41;
        pfVar18 = pfVar18 + 0x26;
        pfVar20 = pfVar20 + 1;
      } while (lVar24 != 0);
    }
  }
  if (uVar8 != uVar2) goto LAB_00716f40;
  plVar29 = (long *)0x0;
  local_358 = (long *)0x0;
  local_350 = (long *)0x0;
  local_348 = (long *)0x0;
  lVar24 = *(long *)(*(long *)(this + 0x60) + 0x28);
  uVar11 = *(long *)(*(long *)(this + 0x60) + 0x30) - lVar24;
  iVar9 = (int)(uVar11 >> 3);
  if (iVar9 != 0) {
    uVar13 = 0;
LAB_00715b88:
    plVar1 = local_358;
    lVar24 = *(long *)(lVar24 + uVar13 * 8);
    if ((*(byte *)(lVar24 + 0x11) >> 3 & 1) == 0) {
      lVar37 = *(long *)(lVar24 + 0x28);
      uVar17 = *(long *)(lVar24 + 0x30) - lVar37;
      if ((int)(uVar17 >> 3) != 0) {
        if (uVar13 != iVar9 - 1) {
          lVar25 = 0;
          bVar5 = false;
          uVar17 = uVar17 >> 3 & 0xffffffff;
          do {
            plVar1 = local_358;
            lVar37 = *(long *)(lVar37 + lVar25 * 8);
            if (((*(byte *)(lVar37 + 0x11) >> 3 & 1) == 0) ||
               ((*(byte *)(*(long *)(lVar37 + 0x170) + 0x22) >> 6 & 1) == 0)) {
              if (lVar25 + 1U == uVar17) goto LAB_00715d88;
            }
            else {
              uVar8 = *(uint *)(this + 0x4c98);
              if (plVar29 < local_348) {
                plVar35 = plVar29 + 2;
                *plVar29 = lVar37;
                plVar29[1] = (ulong)uVar8;
                local_350 = plVar35;
              }
              else {
                sVar10 = (long)plVar29 - (long)local_358;
                uVar30 = ((long)sVar10 >> 4) + 1;
                if (uVar30 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__vector_base_common<true>::__throw_length_error();
                }
                uVar21 = (long)local_348 - (long)local_358 >> 3;
                if (uVar30 <= uVar21) {
                  uVar30 = uVar21;
                }
                if (0x7fffffffffffffef < (ulong)((long)local_348 - (long)local_358)) {
                  uVar30 = 0xfffffffffffffff;
                }
                if (uVar30 >> 0x3c != 0) {
                    /* try { // try from 00716ff8 to 0071700b has its CatchHandler @ 00717168 */
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                    /* try { // try from 00715c80 to 00715c83 has its CatchHandler @ 00717150 */
                plVar29 = (long *)operator_new(uVar30 << 4);
                plVar35 = plVar29 + ((long)sVar10 >> 4) * 2;
                *plVar35 = lVar37;
                plVar35[1] = (ulong)uVar8;
                if (0 < (long)sVar10) {
                  memcpy(plVar29,plVar1,sVar10);
                }
                plVar35 = plVar35 + 2;
                local_348 = plVar29 + uVar30 * 2;
                local_358 = plVar29;
                local_350 = plVar35;
                if (plVar1 != (long *)0x0) {
                  operator_delete(plVar1);
                }
              }
              *(int *)(this + 0x4c90) = *(int *)(this + 0x4c90) + 1;
              if (lVar25 + 1U == uVar17) goto LAB_00715da0;
              bVar5 = true;
              plVar29 = plVar35;
            }
            lVar25 = lVar25 + 1;
            lVar37 = *(long *)(lVar24 + 0x28);
          } while( true );
        }
        *(long *)(this + 0xa8) = lVar24;
      }
    }
    else if ((*(byte *)(*(long *)(lVar24 + 0x170) + 0x22) >> 6 & 1) != 0) {
      if (plVar29 < local_348) {
        plVar35 = plVar29 + 2;
        *plVar29 = lVar24;
        plVar29[1] = 0xffffffff;
        local_350 = plVar35;
      }
      else {
        sVar10 = (long)plVar29 - (long)local_358;
        uVar17 = ((long)sVar10 >> 4) + 1;
        if (uVar17 >> 0x3c != 0) {
                    /* try { // try from 00717014 to 00717027 has its CatchHandler @ 0071712c */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar30 = (long)local_348 - (long)local_358 >> 3;
        if (uVar17 <= uVar30) {
          uVar17 = uVar30;
        }
        if (0x7fffffffffffffef < (ulong)((long)local_348 - (long)local_358)) {
          uVar17 = 0xfffffffffffffff;
        }
        if (uVar17 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00715d2c to 00715d2f has its CatchHandler @ 007170e4 */
        plVar29 = (long *)operator_new(uVar17 << 4);
        plVar35 = plVar29 + ((long)sVar10 >> 4) * 2;
        *plVar35 = lVar24;
        plVar35[1] = 0xffffffff;
        if (0 < (long)sVar10) {
          memcpy(plVar29,plVar1,sVar10);
        }
        plVar35 = plVar35 + 2;
        local_348 = plVar29 + uVar17 * 2;
        local_358 = plVar29;
        local_350 = plVar35;
        if (plVar1 != (long *)0x0) {
          operator_delete(plVar1);
        }
      }
      *(int *)(this + 0x4c90) = *(int *)(this + 0x4c90) + 1;
      plVar29 = plVar35;
    }
    goto LAB_00715db0;
  }
LAB_00715dcc:
  uVar8 = *(uint *)(this + 0x4c90);
  uVar11 = (ulong)uVar8;
  if (uVar8 != 0) {
    *(undefined4 *)(this + 0x4c8c) = 0;
                    /* try { // try from 00715dec to 00715eab has its CatchHandler @ 007170c0 */
    puVar14 = (ulong *)operator_new__(uVar11 * 0x88 + 8);
    plVar1 = (long *)(this + 0x4ca0);
    *puVar14 = uVar11;
    lVar24 = 0;
    do {
      lVar37 = lVar24 + 0x88;
      *(undefined8 *)((long)puVar14 + lVar24 + 0x30) = 0;
      *(undefined8 *)((long)puVar14 + lVar24 + 0x10) = 0;
      *(undefined8 *)((long)puVar14 + lVar24 + 8) = 0;
      *(undefined8 *)((long)puVar14 + lVar24 + 0x20) = 0;
      *(undefined8 *)((long)puVar14 + lVar24 + 0x18) = 0;
      *(undefined4 *)((long)puVar14 + lVar24 + 0x28) = 0;
      *(undefined8 *)((long)puVar14 + lVar24 + 0x68) = 0;
      *(undefined8 *)((long)puVar14 + lVar24 + 0x60) = 0;
      *(undefined8 *)((long)puVar14 + lVar24 + 0x78) = 0;
      *(undefined8 *)((long)puVar14 + lVar24 + 0x70) = 0;
      *(undefined8 *)((long)puVar14 + lVar24 + 0x88) = 0;
      *(undefined8 *)((long)puVar14 + lVar24 + 0x80) = 0;
      *(undefined8 *)((long)puVar14 + lVar24 + 0x44) = 0x3f80000000000000;
      *(undefined4 *)((long)puVar14 + lVar24 + 0x4c) = 0x7f7fffff;
      *(undefined8 *)((long)puVar14 + lVar24 + 0x50) = 0;
      *(undefined4 *)((long)puVar14 + lVar24 + 0x58) = 0;
      lVar24 = lVar37;
    } while (uVar11 * 0x88 - lVar37 != 0);
    uVar8 = uVar8 | uVar8 >> 1;
    uVar8 = uVar8 | uVar8 >> 2;
    uVar8 = uVar8 | uVar8 >> 4;
    uVar8 = uVar8 | uVar8 >> 8;
    iVar9 = *(int *)(MathUtil::s_multiplyDeBruijnBitPosition +
                    (ulong)((uVar8 | uVar8 >> 0x10) * 0x7c4acdd >> 0x1b) * 4);
    uVar11 = (ulong)*(uint *)(this + 0x4c98);
    *(ulong **)(this + 0x4ca0) = puVar14 + 1;
    *(int *)(this + 0x4c94) = iVar9 + 1;
    if (*(uint *)(this + 0x4c98) != 0) {
      puVar14 = (ulong *)operator_new__(uVar11 << 4 | 8);
      *puVar14 = uVar11;
      memset(puVar14 + 1,0,uVar11 << 4);
      *(ulong **)(this + 0x4ca8) = puVar14 + 1;
    }
    if (plVar29 != local_358) {
      uVar11 = 0;
      uVar8 = 0;
      do {
        plVar29 = local_358 + uVar11 * 2;
                    /* try { // try from 00715f50 to 00715fe3 has its CatchHandler @ 00717164 */
        lVar24 = SplineGeometry::getSpline();
        if (*(int *)(lVar24 + 0x30) == 1) {
          lVar37 = *plVar29;
          *(long *)(*plVar1 + (ulong)uVar8 * 0x88) = lVar37;
          uVar2 = *(uint *)(lVar37 + 0x18);
          pplVar33 = (long **)*pplVar16;
          pplVar31 = pplVar16;
          pplVar34 = pplVar16;
          while (pplVar33 != (long **)0x0) {
            while (pplVar32 = pplVar33, pplVar34 = pplVar32,
                  uVar2 < *(uint *)((long)pplVar32 + 0x1c)) {
              pplVar31 = pplVar32;
              pplVar33 = (long **)*pplVar32;
              if ((long **)*pplVar32 == (long **)0x0) {
                if (*pplVar32 != (long *)0x0) goto LAB_0071604c;
                goto LAB_00715ff4;
              }
            }
            if (uVar2 <= *(uint *)((long)pplVar32 + 0x1c)) break;
            pplVar31 = pplVar32 + 1;
            pplVar33 = (long **)*pplVar31;
          }
          pplVar32 = pplVar31;
          if (*pplVar32 == (long *)0x0) {
LAB_00715ff4:
                    /* try { // try from 00715ff4 to 00715fff has its CatchHandler @ 007170e0 */
            plVar29 = (long *)operator_new(0x28);
            *(uint *)((long)plVar29 + 0x1c) = uVar2;
            *(int *)(plVar29 + 4) = (int)uVar11;
            *plVar29 = 0;
            plVar29[1] = 0;
            plVar29[2] = (long)pplVar34;
            *pplVar32 = plVar29;
            if (**(long **)(this + 0x4cd8) != 0) {
              *(long *)(this + 0x4cd8) = **(long **)(this + 0x4cd8);
              plVar29 = *pplVar32;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (*(__tree_node_base **)(this + 0x4ce0),(__tree_node_base *)plVar29);
            *(long *)(this + 0x4ce8) = *(long *)(this + 0x4ce8) + 1;
          }
LAB_0071604c:
                    /* try { // try from 0071604c to 00716053 has its CatchHandler @ 00717164 */
          fVar41 = (float)Spline::getLength();
          uVar13 = (ulong)uVar8;
          fVar45 = *(float *)(this + 0x4c8c);
          lVar37 = *plVar1 + uVar13 * 0x88;
          *(float *)(this + 0x4c8c) = fVar41 + fVar45;
          *(float *)(lVar37 + 0x3c) = fVar41 + fVar45;
          *(long *)(lVar37 + 8) = lVar24;
                    /* try { // try from 0071607c to 00716083 has its CatchHandler @ 00717134 */
          fVar41 = (float)Spline::getLength();
          uVar2 = (int)(fVar41 / 0.005) | (uint)(int)(fVar41 / 0.005) >> 1;
          uVar2 = uVar2 | uVar2 >> 2;
          uVar2 = uVar2 | uVar2 >> 4;
          uVar2 = uVar2 | uVar2 >> 8;
          lVar24 = *plVar1;
          iVar9 = 1 << (ulong)(*(int *)(MathUtil::s_multiplyDeBruijnBitPosition +
                                       (ulong)((uVar2 | uVar2 >> 0x10) * 0x7c4acdd >> 0x1b) * 4) +
                               1U & 0x1f);
          lVar37 = lVar24 + uVar13 * 0x88;
          *(uint *)(lVar37 + 0x30) =
               *(int *)(MathUtil::s_multiplyDeBruijnBitPosition +
                       (ulong)((uVar2 | uVar2 >> 0x10) * 0x7c4acdd >> 0x1b) * 4) + 1U;
          *(int *)(lVar37 + 0x38) = iVar9 + -1;
          *(float *)(lVar37 + 0x34) = (float)iVar9;
          if (*(uint *)(local_358 + uVar11 * 2 + 1) == 0xffffffff) {
            lVar37 = 0;
          }
          else {
            lVar37 = *(long *)(this + 0x4ca8) + (ulong)*(uint *)(local_358 + uVar11 * 2 + 1) * 0x10;
            *(int *)(lVar37 + 8) = *(int *)(lVar37 + 8) + 1;
          }
          plVar29 = (long *)(lVar24 + uVar13 * 0x88);
          plVar29[2] = lVar37;
          this_00 = (UserAttributes *)(*plVar29 + 0x60);
                    /* try { // try from 0071612c to 0071615b has its CatchHandler @ 00717148 */
          lVar24 = UserAttributes::getAttribute(this_00,"maxSpeedScale");
          if ((lVar24 != 0) && (iVar9 = UserAttribute::getType(), iVar9 == 2)) {
            uVar40 = UserAttribute::getFloat();
            *(undefined4 *)(*plVar1 + uVar13 * 0x88 + 0x40) = uVar40;
          }
                    /* try { // try from 00716170 to 0071619f has its CatchHandler @ 00717158 */
          lVar24 = UserAttributes::getAttribute(this_00,"speedLimit");
          if ((lVar24 != 0) && (iVar9 = UserAttribute::getType(), iVar9 == 2)) {
            fVar41 = (float)UserAttribute::getFloat();
            *(float *)(*plVar1 + uVar13 * 0x88 + 0x44) = fVar41 * 0.0002777778;
          }
                    /* try { // try from 00715efc to 00715f03 has its CatchHandler @ 00717158 */
          fVar41 = (float)Spline::getLength();
          uVar8 = uVar8 + 1;
          lVar24 = *plVar1 + uVar13 * 0x88;
          *(undefined4 *)(lVar24 + 0x4c) = 0;
          *(int *)(lVar24 + 0x50) = (int)(fVar41 / 250.0) + 1;
        }
        else {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar9 != 0)) {
                    /* try { // try from 007161d4 to 007161df has its CatchHandler @ 007170a8 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                            "Warning: Non cubic spline detected when loading Traffic System.\n");
        }
        uVar11 = (ulong)((int)uVar11 + 1);
      } while (uVar11 < (ulong)((long)local_350 - (long)local_358 >> 4));
      uVar11 = (ulong)*(uint *)(this + 0x4c98);
    }
    uVar8 = (uint)uVar11;
    if (uVar8 != 0) {
      uVar13 = uVar11;
      puVar15 = (uint *)(*(long *)(this + 0x4ca8) + 8);
      do {
                    /* try { // try from 00716234 to 00716237 has its CatchHandler @ 0071714c */
        pvVar28 = operator_new__((ulong)*puVar15 << 3);
        uVar13 = uVar13 - 1;
        *(void **)(puVar15 + -2) = pvVar28;
        *puVar15 = 0;
        puVar15 = puVar15 + 4;
      } while (uVar13 != 0);
    }
    local_370 = (long *)0x0;
    local_368 = (long *)0x0;
    local_360 = (long *)0x0;
    this[0xb2] = (TrafficSystem)0x1;
    if (*(int *)(this + 0x4c90) == 0) {
      iVar9 = 0;
    }
    else {
      uVar11 = 0;
      do {
        lVar24 = *plVar1;
        plVar35 = (long *)(lVar24 + uVar11 * 0x88);
        plVar29 = (long *)plVar35[2];
        if (plVar29 != (long *)0x0) {
          uVar8 = *(uint *)(plVar29 + 1);
          *(uint *)(plVar29 + 1) = uVar8 + 1;
          *(long **)(*plVar29 + (ulong)uVar8 * 8) = plVar35;
        }
                    /* try { // try from 007162cc to 007162e3 has its CatchHandler @ 00717160 */
        iVar9 = Spline::getNumOfCV();
        Spline::getCV(*(Spline **)(lVar24 + uVar11 * 0x88 + 8),iVar9 - 1,(float *)&local_310);
        lVar37 = *plVar35;
                    /* try { // try from 007162e8 to 007162ef has its CatchHandler @ 0071715c */
        RawTransformGroup::updateWorldTransformation();
        if (local_368 != local_370) {
          local_368 = local_370;
        }
        if (*(int *)(this + 0x4c90) == 0) {
          uVar17 = 0;
          uVar13 = (long)local_368 - (long)local_370;
          if (uVar13 == 0) goto LAB_0071655c;
LAB_007164f0:
          plVar29 = local_370;
          if ((ulong)((long)uVar13 >> 3) >> 0x3d != 0) {
            uVar13 = 0xffffffffffffffff;
          }
                    /* try { // try from 007164fc to 007164ff has its CatchHandler @ 0071715c */
          plVar35 = (long *)operator_new__(uVar13);
          pplVar16 = (long **)(lVar24 + uVar11 * 0x88 + 0x28);
          *pplVar16 = plVar35;
          *plVar35 = *plVar29;
          if ((ulong)((long)local_368 - (long)local_370) < 9) {
            uVar13 = (long)local_368 - (long)local_370 >> 3;
          }
          else {
            uVar30 = 1;
            do {
              uVar21 = (ulong)((int)uVar30 + 1);
              (*pplVar16)[uVar30] = local_370[uVar30];
              uVar13 = (long)local_368 - (long)local_370 >> 3;
              uVar30 = uVar21;
            } while (uVar21 < uVar13);
          }
          *(int *)(lVar24 + uVar11 * 0x88 + 0x20) = (int)uVar13;
        }
        else {
          lVar25 = 0;
          uVar13 = 0;
          uVar40 = NEON_fmadd((undefined4)local_310,*(undefined4 *)(lVar37 + 0xc0),
                              local_310._4_4_ * *(float *)(lVar37 + 0xd0));
          uVar46 = NEON_fmadd((undefined4)local_310,*(undefined4 *)(lVar37 + 0xb8),
                              local_310._4_4_ * *(float *)(lVar37 + 200));
          uVar53 = NEON_fmadd((undefined4)local_310,*(undefined4 *)(lVar37 + 0xbc),
                              local_310._4_4_ * *(float *)(lVar37 + 0xcc));
          fVar45 = (float)NEON_fmadd(local_308._0_4_,*(undefined4 *)(lVar37 + 0xd8),uVar46);
          fVar54 = (float)NEON_fmadd(local_308._0_4_,*(undefined4 *)(lVar37 + 0xdc),uVar53);
          fVar58 = *(float *)(lVar37 + 0xe8);
          fVar61 = *(float *)(lVar37 + 0xec);
          fVar41 = (float)NEON_fmadd(local_308._0_4_,*(undefined4 *)(lVar37 + 0xe0),uVar40);
          fVar62 = *(float *)(lVar37 + 0xf0);
          plVar29 = local_368;
          do {
            lVar26 = *plVar1;
            lVar37 = lVar26 + lVar25;
                    /* try { // try from 007163a8 to 007163b3 has its CatchHandler @ 00717204 */
            Spline::getCV(*(Spline **)(lVar37 + 8),0,(float *)&local_298);
            lVar26 = *(long *)(lVar26 + lVar25);
                    /* try { // try from 007163b8 to 00716493 has its CatchHandler @ 00717208 */
            RawTransformGroup::updateWorldTransformation();
            plVar36 = local_370;
            uVar40 = NEON_fmadd((float)local_298,*(undefined4 *)(lVar26 + 0xb8),
                                local_298._4_4_ * *(float *)(lVar26 + 200));
            uVar46 = NEON_fmadd((float)local_298,*(undefined4 *)(lVar26 + 0xbc),
                                local_298._4_4_ * *(float *)(lVar26 + 0xcc));
            fVar47 = (float)NEON_fmadd(local_290[0],*(undefined4 *)(lVar26 + 0xd8),uVar40);
            fVar55 = (float)NEON_fmadd(local_290[0],*(undefined4 *)(lVar26 + 0xdc),uVar46);
            uVar40 = NEON_fmadd((float)local_298,*(undefined4 *)(lVar26 + 0xc0),
                                local_298._4_4_ * *(float *)(lVar26 + 0xd0));
            fVar42 = (float)NEON_fmadd(local_290[0],*(undefined4 *)(lVar26 + 0xe0),uVar40);
            fVar47 = (fVar47 + *(float *)(lVar26 + 0xe8)) - (fVar45 + fVar58);
            fVar55 = (*(float *)(lVar26 + 0xec) + fVar55) - (fVar61 + fVar54);
            fVar42 = (*(float *)(lVar26 + 0xf0) + fVar42) - (fVar62 + fVar41);
            uVar40 = NEON_fmadd(fVar55,fVar55,fVar47 * fVar47);
            fVar42 = (float)NEON_fmadd(fVar42,fVar42,uVar40);
            plVar38 = plVar29;
            if (fVar42 < 0.05) {
              if (plVar29 == local_360) {
                uVar30 = (long)plVar29 - (long)local_370;
                uVar17 = ((long)uVar30 >> 3) + 1;
                if (uVar17 >> 0x3d != 0) {
                    /* try { // try from 00716fe4 to 00716ff7 has its CatchHandler @ 007171c8 */
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__vector_base_common<true>::__throw_length_error();
                }
                if (uVar17 <= (ulong)((long)uVar30 >> 2)) {
                  uVar17 = (long)uVar30 >> 2;
                }
                if (0x7ffffffffffffff7 < uVar30) {
                  uVar17 = 0x1fffffffffffffff;
                }
                if (uVar17 == 0) {
                  plVar29 = (long *)0x0;
                }
                else {
                  if (uVar17 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_006d1f18(
                                "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                );
                  }
                  plVar29 = (long *)operator_new(uVar17 << 3);
                }
                plVar38 = plVar29 + ((long)uVar30 >> 3) + 1;
                plVar29[(long)uVar30 >> 3] = lVar37;
                if (0 < (long)uVar30) {
                  memcpy(plVar29,plVar36,uVar30);
                }
                local_360 = plVar29 + uVar17;
                local_370 = plVar29;
                local_368 = plVar38;
                if (plVar36 != (long *)0x0) {
                  operator_delete(plVar36);
                }
              }
              else {
                plVar38 = plVar29 + 1;
                *plVar29 = lVar37;
                local_368 = plVar38;
              }
            }
            uVar13 = uVar13 + 1;
            lVar25 = lVar25 + 0x88;
            uVar17 = (ulong)*(uint *)(this + 0x4c90);
            plVar29 = plVar38;
          } while (uVar13 < uVar17);
          uVar13 = (long)plVar38 - (long)local_370;
          if (uVar13 != 0) goto LAB_007164f0;
LAB_0071655c:
          this[0xb2] = (TrafficSystem)0x0;
          lVar24 = *plVar35;
                    /* try { // try from 00716568 to 00716603 has its CatchHandler @ 00717144 */
          RawTransformGroup::updateWorldTransformation();
          uVar53 = *(undefined4 *)(lVar24 + 0xb8);
          uVar40 = (undefined4)local_310;
          fVar41 = local_310._4_4_;
          fVar58 = *(float *)(lVar24 + 200);
          uVar66 = *(undefined4 *)(lVar24 + 0xd8);
          uVar46 = local_308._0_4_;
          uVar59 = *(undefined4 *)(lVar24 + 0xc0);
          fVar45 = *(float *)(lVar24 + 0xe8);
          fVar54 = *(float *)(lVar24 + 0xd0);
          uVar56 = *(undefined4 *)(lVar24 + 0xe0);
          fVar61 = *(float *)(lVar24 + 0xf0);
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar9 != 0)) {
                    /* try { // try from 00716620 to 0071662b has its CatchHandler @ 00717088 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          uVar53 = NEON_fmadd(uVar40,uVar53,fVar41 * fVar58);
          uVar40 = NEON_fmadd(uVar40,uVar59,fVar41 * fVar54);
          fVar41 = (float)NEON_fmadd(uVar46,uVar66,uVar53);
          fVar54 = (float)NEON_fmadd(uVar46,uVar56,uVar40);
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             (double)(fVar41 + fVar45),(double)(fVar61 + fVar54),
                             "Error: Traffic system road spline \'%s\' dead-end found at %f %f\n",
                             *(undefined8 *)(*plVar35 + 8));
          uVar17 = (ulong)*(uint *)(this + 0x4c90);
        }
        iVar9 = (int)uVar17;
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar17);
      uVar8 = *(uint *)(this + 0x4c98);
      uVar11 = (ulong)uVar8;
    }
    if (uVar8 != 0) {
      uVar13 = 0;
      do {
        plVar29 = (long *)(*(long *)(this + 0x4ca8) + uVar13 * 0x10);
        uVar8 = *(uint *)(plVar29 + 1);
        if (0x1f < uVar8) {
          uVar8 = 0x20;
        }
        if (uVar8 != 0) {
          uVar11 = 0;
          do {
            plVar35 = *(long **)(*plVar29 + uVar11 * 8);
                    /* try { // try from 00716700 to 0071672b has its CatchHandler @ 00717218 */
            (**(code **)(*(long *)plVar35[1] + 0x10))(0,(long *)plVar35[1],&local_310,&local_298);
            (**(code **)(*(long *)plVar35[1] + 0x10))
                      (0x3f800000,(long *)plVar35[1],&local_2a8,&local_2b8);
            fVar54 = 1.0;
            uVar40 = NEON_fmadd((float)local_298,(float)local_298,0);
            fVar45 = (float)NEON_fmadd(local_290[0],local_290[0],uVar40);
            fVar41 = 1.0;
            if (1e-06 < fVar45) {
              fVar54 = 1.0 / SQRT(fVar45);
            }
            uVar40 = NEON_fmadd(local_2b8,local_2b8,0);
            fVar45 = (float)NEON_fmadd(local_2b0,local_2b0,uVar40);
            local_298._0_4_ = (float)local_298 * fVar54;
            local_290[0] = local_290[0] * fVar54;
            local_298 = CONCAT44(fVar54 * 0.0,(float)local_298);
            if (1e-06 < fVar45) {
              fVar41 = 1.0 / SQRT(fVar45);
            }
            local_2b4 = fVar41 * 0.0;
            local_2b8 = local_2b8 * fVar41;
            local_2b0 = local_2b0 * fVar41;
            uVar40 = NEON_fmadd((float)local_298,local_2b8,fVar54 * 0.0 * local_2b4);
            fVar41 = (float)NEON_fmadd(local_290[0],local_2b0,uVar40);
            if (fVar41 < 0.8) {
              fVar41 = (float)NEON_fmadd(local_290[0],local_2b8,local_2b0 * -(float)local_298);
              uVar40 = 0xffffffff;
              if (0.0 < fVar41) {
                uVar40 = 1;
              }
              *(undefined4 *)(plVar35 + 9) = uVar40;
            }
            uVar2 = 1 << (ulong)((uint)uVar11 & 0x1f);
            *(uint *)(plVar35 + 3) = uVar2;
                    /* try { // try from 00716800 to 00716827 has its CatchHandler @ 00717220 */
            Spline::getCV((Spline *)plVar35[1],0,&local_2c8);
            pSVar27 = (Spline *)plVar35[1];
            iVar9 = Spline::getNumOfCV();
            Spline::getCV(pSVar27,iVar9 - 1,&local_2d8);
            lVar24 = *plVar35;
                    /* try { // try from 0071682c to 00716877 has its CatchHandler @ 0071721c */
            RawTransformGroup::updateWorldTransformation();
            uVar40 = local_2c0;
            fVar45 = local_2c4;
            fVar41 = local_2c8;
            uVar46 = *(undefined4 *)(lVar24 + 0xd8);
            uVar66 = *(undefined4 *)(lVar24 + 0xb8);
            fVar54 = *(float *)(lVar24 + 0xe8);
            fVar62 = *(float *)(lVar24 + 200);
            uVar53 = *(undefined4 *)(lVar24 + 0xc0);
            fVar61 = *(float *)(lVar24 + 0xd0);
            uVar67 = *(undefined4 *)(lVar24 + 0xe0);
            fVar58 = *(float *)(lVar24 + 0xf0);
            lVar24 = *plVar35;
            RawTransformGroup::updateWorldTransformation();
            uVar17 = 0;
            uVar59 = NEON_fmadd(fVar41,uVar66,fVar45 * fVar62);
            uVar63 = NEON_fmadd(fVar41,uVar53,fVar45 * fVar61);
            uVar53 = NEON_fmadd(local_2d8,*(undefined4 *)(lVar24 + 0xc0),
                                local_2d4 * *(float *)(lVar24 + 0xd0));
            uVar66 = NEON_fmadd(local_2d8,*(undefined4 *)(lVar24 + 0xb8),
                                local_2d4 * *(float *)(lVar24 + 200));
            uVar56 = NEON_fmadd(local_2d8,*(undefined4 *)(lVar24 + 0xbc),
                                local_2d4 * *(float *)(lVar24 + 0xcc));
            fVar42 = (float)NEON_fmadd(uVar40,uVar67,uVar63);
            fVar62 = (float)NEON_fmadd(uVar40,uVar46,uVar59);
            fVar41 = (float)NEON_fmadd(local_2d0,*(undefined4 *)(lVar24 + 0xe0),uVar53);
            fVar45 = (float)NEON_fmadd(local_2d0,*(undefined4 *)(lVar24 + 0xd8),uVar66);
            fVar61 = (float)NEON_fmadd(local_2d0,*(undefined4 *)(lVar24 + 0xdc),uVar56);
            fVar47 = *(float *)(lVar24 + 0xec);
            fVar45 = fVar45 + *(float *)(lVar24 + 0xe8);
            fVar41 = *(float *)(lVar24 + 0xf0) + fVar41;
            do {
              if (uVar17 < uVar11) {
                plVar36 = *(long **)(*plVar29 + uVar17 * 8);
                    /* try { // try from 00716958 to 0071697f has its CatchHandler @ 0071746c */
                Spline::getCV((Spline *)plVar36[1],0,&local_2e8);
                pSVar27 = (Spline *)plVar36[1];
                iVar9 = Spline::getNumOfCV();
                Spline::getCV(pSVar27,iVar9 - 1,&local_2f8);
                lVar24 = *plVar36;
                    /* try { // try from 00716984 to 007169cb has its CatchHandler @ 00717468 */
                RawTransformGroup::updateWorldTransformation();
                uVar40 = local_2e0;
                fVar49 = local_2e4;
                fVar55 = local_2e8;
                uVar46 = *(undefined4 *)(lVar24 + 0xb8);
                fVar65 = *(float *)(lVar24 + 200);
                uVar66 = *(undefined4 *)(lVar24 + 0xd8);
                fVar43 = *(float *)(lVar24 + 0xe8);
                uVar59 = *(undefined4 *)(lVar24 + 0xc0);
                fVar68 = *(float *)(lVar24 + 0xd0);
                uVar63 = *(undefined4 *)(lVar24 + 0xe0);
                fVar64 = *(float *)(lVar24 + 0xf0);
                lVar24 = *plVar36;
                RawTransformGroup::updateWorldTransformation();
                local_378 = 0;
                uVar53 = NEON_fmadd(local_2f8,*(undefined4 *)(lVar24 + 0xb8),
                                    local_2f4 * *(float *)(lVar24 + 200));
                uVar56 = NEON_fmadd(local_2f8,*(undefined4 *)(lVar24 + 0xbc),
                                    local_2f4 * *(float *)(lVar24 + 0xcc));
                fVar48 = (float)NEON_fmadd(local_2f0,*(undefined4 *)(lVar24 + 0xd8),uVar53);
                fVar57 = (float)NEON_fmadd(local_2f0,*(undefined4 *)(lVar24 + 0xdc),uVar56);
                uVar53 = NEON_fmadd(local_2f8,*(undefined4 *)(lVar24 + 0xc0),
                                    local_2f4 * *(float *)(lVar24 + 0xd0));
                fVar48 = fVar48 + *(float *)(lVar24 + 0xe8);
                fVar44 = (float)NEON_fmadd(local_2f0,*(undefined4 *)(lVar24 + 0xe0),uVar53);
                fVar60 = fVar45 - fVar48;
                fVar44 = *(float *)(lVar24 + 0xf0) + fVar44;
                fVar57 = (fVar47 + fVar61) - (*(float *)(lVar24 + 0xec) + fVar57);
                uVar53 = NEON_fmadd(fVar57,fVar57,fVar60 * fVar60);
                fVar57 = fVar41 - fVar44;
                fVar57 = (float)NEON_fmadd(fVar57,fVar57,uVar53);
                if (0.05 <= fVar57) {
                  uVar46 = NEON_fmadd(fVar55,uVar46,fVar49 * fVar65);
                  uVar53 = NEON_fmadd(fVar55,uVar59,fVar49 * fVar68);
                  fVar55 = (float)NEON_fmadd(uVar40,uVar66,uVar46);
                  fVar49 = (float)NEON_fmadd(uVar40,uVar63,uVar53);
                    /* try { // try from 00716a88 to 00716aa3 has its CatchHandler @ 00717464 */
                  uVar30 = MathUtil::lineLineIntersect2D
                                     (fVar62 + fVar54,fVar58 + fVar42,fVar45,fVar41,fVar55 + fVar43,
                                      fVar64 + fVar49,fVar48,fVar44,(float *)((long)&local_378 + 4),
                                      (float *)&local_378);
                  if ((uVar30 & 1) == 0) goto LAB_00716938;
                }
                *(uint *)((long)plVar35 + 0x1c) =
                     *(uint *)((long)plVar35 + 0x1c) | 1 << (ulong)((uint)uVar17 & 0x1f);
                *(uint *)((long)plVar36 + 0x1c) = *(uint *)((long)plVar36 + 0x1c) | uVar2;
              }
LAB_00716938:
              uVar17 = uVar17 + 1;
            } while (uVar8 != uVar17);
            uVar11 = uVar11 + 1;
          } while (uVar11 != uVar8);
          uVar11 = (ulong)*(uint *)(this + 0x4c98);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar11);
      iVar9 = *(int *)(this + 0x4c90);
    }
    uVar8 = (uint)(*(float *)(this + 0x4c8c) / 250.0);
    if (9 < uVar8) {
      uVar8 = 10;
    }
    uVar2 = uVar8 >> 1 | uVar8;
    local_310 = (BoundingBox *)0x0;
    local_308 = (undefined4 *)0x0;
    *(uint *)(this + 0x4d18) = uVar8;
    iVar52 = *(int *)(MathUtil::s_multiplyDeBruijnBitPosition +
                     (ulong)((uVar2 | uVar2 >> 2) * 0x7c4acdd >> 0x1b) * 4);
    *(uint *)(this + 0x7258) = uVar8 >> 1;
    local_300 = (undefined4 *)0x0;
    *(undefined8 *)(this + 0x71c0) = *(undefined8 *)(this + 0x71b8);
    *(int *)(this + 0x725c) = iVar52 + 1;
    if (iVar9 == 0) {
      puVar39 = (undefined4 *)0x0;
    }
    else {
      puVar39 = (undefined4 *)0x0;
      uVar11 = 0;
      do {
        uVar23 = 0;
        this_03 = *(CubicSpline **)(*plVar1 + uVar11 * 0x88 + 8);
        while( true ) {
                    /* try { // try from 00716b8c to 00716b93 has its CatchHandler @ 00717214 */
          iVar9 = Spline::getNumOfCV();
          uVar8 = (uint)uVar23;
          if (iVar9 - 1U <= uVar8) break;
                    /* try { // try from 00716ba4 to 00716d3f has its CatchHandler @ 00717224 */
          CubicSpline::solveCoordExtremes
                    (this_03,(float *)&local_298,(float *)&local_2a8,&local_2b8,&local_2c8,uVar8,0.0
                     ,1.0,0);
          CubicSpline::solveCoordExtremes
                    (this_03,local_290,local_2a0,&local_2b8,&local_2c8,uVar8,0.0,1.0,2);
          lVar24 = *(long *)(*plVar1 + uVar11 * 0x88);
          RawTransformGroup::updateWorldTransformation();
          uVar40 = NEON_fmadd((float)local_298,*(undefined4 *)(lVar24 + 0xc0),
                              local_298._4_4_ * *(float *)(lVar24 + 0xd0));
          fVar41 = (float)NEON_fmadd(local_290[0],*(undefined4 *)(lVar24 + 0xe0),uVar40);
          local_298 = CONCAT44((float)((ulong)*(undefined8 *)(lVar24 + 0xe8) >> 0x20) +
                               (float)((ulong)*(undefined8 *)(lVar24 + 200) >> 0x20) *
                               local_298._4_4_ +
                               (float)((ulong)*(undefined8 *)(lVar24 + 0xb8) >> 0x20) *
                               (float)local_298 +
                               (float)((ulong)*(undefined8 *)(lVar24 + 0xd8) >> 0x20) * local_290[0]
                               ,(float)*(undefined8 *)(lVar24 + 0xe8) +
                                (float)*(undefined8 *)(lVar24 + 200) * local_298._4_4_ +
                                (float)*(undefined8 *)(lVar24 + 0xb8) * (float)local_298 +
                                (float)*(undefined8 *)(lVar24 + 0xd8) * local_290[0]);
          local_290[0] = *(float *)(lVar24 + 0xf0) + fVar41;
          lVar24 = *(long *)(*plVar1 + uVar11 * 0x88);
          RawTransformGroup::updateWorldTransformation();
          uVar40 = NEON_fmadd((float)local_2a8,*(undefined4 *)(lVar24 + 0xc0),
                              local_2a8._4_4_ * *(float *)(lVar24 + 0xd0));
          puVar19 = *(undefined2 **)(this + 0x71c0);
          fVar41 = (float)NEON_fmadd(local_2a0[0],*(undefined4 *)(lVar24 + 0xe0),uVar40);
          local_2a8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar24 + 0xe8) >> 0x20) +
                               (float)((ulong)*(undefined8 *)(lVar24 + 200) >> 0x20) *
                               local_2a8._4_4_ +
                               (float)((ulong)*(undefined8 *)(lVar24 + 0xb8) >> 0x20) *
                               (float)local_2a8 +
                               (float)((ulong)*(undefined8 *)(lVar24 + 0xd8) >> 0x20) * local_2a0[0]
                               ,(float)*(undefined8 *)(lVar24 + 0xe8) +
                                (float)*(undefined8 *)(lVar24 + 200) * local_2a8._4_4_ +
                                (float)*(undefined8 *)(lVar24 + 0xb8) * (float)local_2a8 +
                                (float)*(undefined8 *)(lVar24 + 0xd8) * local_2a0[0]);
          local_2a0[0] = *(float *)(lVar24 + 0xf0) + fVar41;
          if (puVar19 < *(undefined2 **)(this + 0x71c8)) {
            *puVar19 = (short)uVar11;
            puVar19[1] = uVar23;
            *(undefined2 **)(this + 0x71c0) = puVar19 + 2;
          }
          else {
            pvVar28 = *(void **)(this + 0x71b8);
            sVar10 = (long)puVar19 - (long)pvVar28;
            uVar13 = ((long)sVar10 >> 2) + 1;
            if (uVar13 >> 0x3e != 0) {
                    /* try { // try from 00716fbc to 00716fc3 has its CatchHandler @ 0071720c */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            uVar17 = (long)*(undefined2 **)(this + 0x71c8) - (long)pvVar28;
            uVar30 = (long)uVar17 >> 1;
            if (uVar13 <= uVar30) {
              uVar13 = uVar30;
            }
            if (0x7ffffffffffffffb < uVar17) {
              uVar13 = 0x3fffffffffffffff;
            }
            if (uVar13 == 0) {
              __dest = (void *)0x0;
            }
            else {
              if (uVar13 >> 0x3e != 0) {
                    /* try { // try from 00716fd8 to 00716fe3 has its CatchHandler @ 0071720c */
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
              __dest = operator_new(uVar13 << 2);
            }
            puVar19 = (undefined2 *)((long)__dest + ((long)sVar10 >> 2) * 4);
            *puVar19 = (short)uVar11;
            puVar19[1] = uVar23;
            if (0 < (long)sVar10) {
              memcpy(__dest,pvVar28,sVar10);
            }
            *(void **)(this + 0x71b8) = __dest;
            *(undefined2 **)(this + 0x71c0) = puVar19 + 2;
            *(void **)(this + 0x71c8) = (void *)((long)__dest + uVar13 * 4);
            if (pvVar28 != (void *)0x0) {
              operator_delete(pvVar28);
            }
          }
          fVar45 = local_290[0];
          fVar41 = local_2a0[0];
          pBVar6 = local_310;
          uVar46 = (float)local_298;
          uVar40 = (float)local_2a8;
          if (puVar39 < local_300) {
            *puVar39 = (float)local_298;
            puVar39[1] = local_290[0];
            uVar23 = uVar23 + 1;
            puVar39[2] = (float)local_2a8;
            puVar39[3] = local_2a0[0];
            puVar39 = puVar39 + 4;
            local_308 = puVar39;
          }
          else {
            sVar10 = (long)puVar39 - (long)local_310;
            uVar13 = ((long)sVar10 >> 4) + 1;
            if (uVar13 >> 0x3c != 0) {
                    /* try { // try from 00716fc4 to 00716fd7 has its CatchHandler @ 00717210 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            uVar17 = (long)local_300 - (long)local_310 >> 3;
            if (uVar13 <= uVar17) {
              uVar13 = uVar17;
            }
            if (0x7fffffffffffffef < (ulong)((long)local_300 - (long)local_310)) {
              uVar13 = 0xfffffffffffffff;
            }
            if (uVar13 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00716df4 to 00716df7 has its CatchHandler @ 007171f4 */
            __dest_00 = (BoundingBox *)operator_new(uVar13 << 4);
            puVar39 = (undefined4 *)(__dest_00 + ((long)sVar10 >> 4) * 0x10);
            *puVar39 = uVar46;
            puVar39[1] = fVar45;
            puVar39[2] = uVar40;
            puVar39[3] = fVar41;
            if (0 < (long)sVar10) {
              memcpy(__dest_00,pBVar6,sVar10);
            }
            puVar39 = puVar39 + 4;
            local_300 = (undefined4 *)(__dest_00 + uVar13 * 0x10);
            local_310 = __dest_00;
            local_308 = puVar39;
            if (pBVar6 != (BoundingBox *)0x0) {
              operator_delete(pBVar6);
            }
            uVar23 = uVar23 + 1;
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(this + 0x4c90));
    }
    pBVar6 = local_310;
    uVar13 = (long)puVar39 - (long)local_310;
    uVar11 = (long)uVar13 >> 4 & 0xffffffff;
    uVar8 = (uint)((long)uVar13 >> 4);
    if (uVar11 == 0) {
      puVar15 = (uint *)0x0;
    }
    else {
      uVar11 = uVar11 << 2;
                    /* try { // try from 00716e68 to 00716e6f has its CatchHandler @ 007170bc */
      puVar15 = (uint *)operator_new(uVar11);
      memset(puVar15,0,uVar11);
    }
    if (uVar8 != 0) {
      uVar11 = uVar13 >> 4 & 0xffffffff;
      if (uVar11 < 8) {
        uVar13 = 0;
      }
      else {
        uVar30 = uVar13 >> 4 & 7;
        uVar13 = uVar11 - uVar30;
        uVar51 = 0x300000002;
        uVar50 = 0x100000000;
        puVar22 = (undefined8 *)(puVar15 + 4);
        uVar17 = uVar13;
        do {
          iVar9 = (int)((ulong)uVar50 >> 0x20);
          iVar52 = (int)((ulong)uVar51 >> 0x20);
          uVar17 = uVar17 - 8;
          puVar22[-1] = uVar51;
          puVar22[-2] = uVar50;
          puVar22[1] = CONCAT44(iVar52 + 4,(int)uVar51 + 4);
          *puVar22 = CONCAT44(iVar9 + 4,(int)uVar50 + 4);
          puVar22 = puVar22 + 4;
          uVar50 = CONCAT44(iVar9 + 8,(int)uVar50 + 8);
          uVar51 = CONCAT44(iVar52 + 8,(int)uVar51 + 8);
        } while (uVar17 != 0);
        if (uVar30 == 0) goto LAB_00716ef0;
      }
      do {
        puVar15[uVar13] = (uint)uVar13;
        uVar13 = uVar13 + 1;
      } while (uVar11 != uVar13);
    }
LAB_00716ef0:
                    /* try { // try from 00716ef0 to 00716f0b has its CatchHandler @ 007170c4 */
    RectangleTree::buildRectangleNodes((RectangleTree *)(this + 0x71b0),uVar8,puVar15,pBVar6);
    processRoads();
    if (puVar15 != (uint *)0x0) {
      operator_delete(puVar15);
    }
    if (pBVar6 != (BoundingBox *)0x0) {
      operator_delete(pBVar6);
    }
    if (local_370 != (long *)0x0) {
      operator_delete(local_370);
    }
  }
  if (local_358 != (long *)0x0) {
    local_350 = local_358;
    operator_delete(local_358);
  }
LAB_00716f40:
                    /* try { // try from 00716f40 to 00716f4f has its CatchHandler @ 00717154 */
  this_02 = (UpdateManager *)UpdateManager::getInstance();
  UpdateManager::addUpdateable(this_02,(Updateable *)(this + 0x20),false);
  DomXMLFile::~DomXMLFile(aDStack_188);
  if ((local_340 & 1) != 0) {
    operator_delete(local_330);
  }
  if ((local_328 & 1) != 0) {
    operator_delete(local_318);
  }
  if (*(long *)(lVar4 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00715d88:
  plVar35 = plVar29;
  if (bVar5) {
LAB_00715da0:
    *(int *)(this + 0x4c98) = *(int *)(this + 0x4c98) + 1;
    plVar29 = plVar35;
  }
LAB_00715db0:
  uVar13 = uVar13 + 1;
  if (uVar13 == (uVar11 >> 3 & 0xffffffff)) goto LAB_00715dcc;
  lVar24 = *(long *)(*(long *)(this + 0x60) + 0x28);
  goto LAB_00715b88;
}


