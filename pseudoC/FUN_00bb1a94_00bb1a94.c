// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00bb1a94
// Entry Point: 00bb1a94
// Size: 372 bytes
// Signature: undefined FUN_00bb1a94(void)


undefined8 FUN_00bb1a94(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  btSubsimplexConvexCast abStack_398 [32];
  btVoronoiSimplexSolver abStack_378 [308];
  undefined4 local_244;
  undefined local_22c;
  undefined **local_210;
  undefined4 local_208;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined **local_190;
  undefined4 local_188;
  undefined4 local_164;
  undefined4 local_154;
  undefined **local_148 [21];
  float local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 200);
  local_a0 = *(float *)(param_1 + 0xcc);
  local_7c = 0;
  local_84 = 0;
  local_54 = 0;
  local_5c = 0;
  local_88 = 0x3f800000;
  local_74 = 0x3f800000;
  local_70 = 0;
  uStack_68 = 0;
  local_148[0] = &PTR_DebugDraw_00feb2a8;
  local_60 = 0x3f800000;
  local_4c = 0;
  local_98 = 0;
  local_90 = 0;
  btConvexInternalShape::btConvexInternalShape((btConvexInternalShape *)&local_190);
  local_188 = 8;
  local_190 = &PTR__btConvexShape_0101c5e8;
                    /* try { // try from 00bb1b34 to 00bb1b3b has its CatchHandler @ 00bb1c28 */
  local_164 = uVar3;
  local_154 = uVar3;
  btPolyhedralConvexShape::btPolyhedralConvexShape((btPolyhedralConvexShape *)&local_210);
  local_208 = 1;
  uStack_1b8 = param_2[1];
  local_1c0 = *param_2;
  uStack_1a8 = param_2[3];
  uStack_1b0 = param_2[2];
  local_22c = 0;
  local_210 = &PTR__btPolyhedralConvexShape_00fe1bf8;
  uStack_198 = param_2[5];
  local_1a0 = param_2[4];
  local_244 = 0x38d1b717;
                    /* try { // try from 00bb1b78 to 00bb1b8b has its CatchHandler @ 00bb1c18 */
  btSubsimplexConvexCast::btSubsimplexConvexCast
            (abStack_398,(btConvexShape *)&local_190,(btConvexShape *)&local_210,abStack_378);
                    /* try { // try from 00bb1b94 to 00bb1ba7 has its CatchHandler @ 00bb1c08 */
  uVar2 = btSubsimplexConvexCast::calcTimeOfImpact
                    (abStack_398,(btTransform *)(param_1 + 8),(btTransform *)(param_1 + 0x48),
                     (btTransform *)&local_88,(btTransform *)&local_88,(CastResult *)local_148);
  if (((uVar2 & 1) != 0) && (local_a0 < *(float *)(param_1 + 0xcc))) {
    *(float *)(param_1 + 0xcc) = local_a0;
  }
  btConvexCast::~btConvexCast((btConvexCast *)abStack_398);
  btPolyhedralConvexShape::~btPolyhedralConvexShape((btPolyhedralConvexShape *)&local_210);
  btConvexShape::~btConvexShape((btConvexShape *)&local_190);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


