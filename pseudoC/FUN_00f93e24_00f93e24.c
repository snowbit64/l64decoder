// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f93e24
// Entry Point: 00f93e24
// Size: 456 bytes
// Signature: undefined FUN_00f93e24(void)


undefined8 FUN_00f93e24(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined **local_388;
  undefined *puStack_380;
  undefined ***local_378;
  undefined ***pppuStack_370;
  undefined auStack_368 [308];
  undefined4 local_234;
  undefined local_21c;
  undefined **local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined8 uStack_1dc;
  undefined4 local_1c4;
  undefined8 *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined **local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined4 local_154;
  undefined4 local_144;
  undefined **local_138 [21];
  float local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_6c = 0;
  local_74 = 0;
  local_78 = 0x3f800000;
  local_64 = 0x3f800000;
  local_50 = 0x3f800000;
  local_60 = 0;
  uStack_58 = 0;
  local_44 = 0;
  local_138[0] = &PTR_DebugDraw_00feb2a8;
  local_4c = 0;
  local_3c = 0;
  local_88 = 0;
  pppuStack_370 = &local_200;
  local_80 = 0;
  local_154 = *(undefined4 *)(param_1 + 200);
  local_90 = *(float *)(param_1 + 0xcc);
  local_170 = 0;
  local_168 = 0xffffffff;
  local_180 = &PTR__btConvexShape_0101c5e8;
  uStack_15c = 0x3f800000;
  local_164 = 0x3f8000003f800000;
  local_178 = 8;
  local_1f0 = 0;
  uStack_1dc = 0x3f800000;
  local_1e4 = 0x3f8000003f800000;
  uStack_188 = param_2[5];
  local_190 = param_2[4];
  local_1c4 = 0x3d23d70a;
  local_200 = &PTR__btPolyhedralConvexShape_00fe1bf8;
  local_1e8 = 0xffffffff;
  local_1b8 = (undefined8 *)0x0;
  local_378 = &local_180;
  local_1f8 = 1;
  uStack_1a8 = param_2[1];
  local_1b0 = *param_2;
  uStack_198 = param_2[3];
  uStack_1a0 = param_2[2];
  local_234 = 0x38d1b717;
  puStack_380 = auStack_368;
  local_388 = &PTR__btConvexCast_0101b5c0;
  local_21c = 0;
  local_144 = local_154;
  uVar2 = btSubsimplexConvexCast::calcTimeOfImpact
                    ((btSubsimplexConvexCast *)&local_388,(btTransform *)(param_1 + 8),
                     (btTransform *)(param_1 + 0x48),(btTransform *)&local_78,
                     (btTransform *)&local_78,(CastResult *)local_138);
  if ((uVar2 & 1) != 0) {
    if (local_90 < *(float *)(param_1 + 0xcc)) {
      *(float *)(param_1 + 0xcc) = local_90;
    }
  }
  local_200 = &PTR__btPolyhedralConvexShape_0101ade0;
  if (local_1b8 != (undefined8 *)0x0) {
    (**(code **)*local_1b8)();
    if (local_1b8 != (undefined8 *)0x0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


