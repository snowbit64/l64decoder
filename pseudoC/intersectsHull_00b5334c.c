// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: intersectsHull
// Entry Point: 00b5334c
// Size: 184 bytes
// Signature: undefined __cdecl intersectsHull(float * param_1, uint param_2, float * param_3, uint param_4)


/* ConvexHull3DUtil::intersectsHull(float const*, unsigned int, float const*, unsigned int) */

void ConvexHull3DUtil::intersectsHull(float *param_1,uint param_2,float *param_3,uint param_4)

{
  long lVar1;
  float local_1f4;
  Vector3 aVStack_1f0 [16];
  Vector3 aVStack_1e0 [16];
  GJKDistance aGStack_1d0 [240];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  uint local_60;
  float *local_58;
  uint local_50;
  float *local_48;
  undefined8 local_40;
  undefined4 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x5d5e0b6b;
  local_38 = 0;
  uStack_d8 = 0;
  local_e0 = 0x3f800000;
  uStack_c8 = 0;
  uStack_d0 = 0x3f80000000000000;
  uStack_b8 = 0x3f800000;
  local_c0 = 0;
  uStack_a8 = 0x3f80000000000000;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0x3f800000;
  uStack_88 = 0;
  uStack_90 = 0x3f80000000000000;
  uStack_78 = 0x3f800000;
  local_80 = 0;
  uStack_68 = 0x3f80000000000000;
  uStack_70 = 0;
  local_60 = param_2;
  local_58 = param_1;
  local_50 = param_4;
  local_48 = param_3;
  GJKDistance::getClosestPoints
            (aGStack_1d0,(ClosestPointsInput *)&local_e0,&local_1f4,aVStack_1e0,aVStack_1f0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_1f4 == 0.0);
}


