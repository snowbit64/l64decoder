// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 008aab40
// Size: 552 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoadSimulationRuntimeSettings::reset() */

void LoadSimulationRuntimeSettings::reset(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *in_x0;
  void *pvVar5;
  undefined8 *this;
  undefined8 uVar6;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  void *local_88;
  void *pvStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  uVar6 = NEON_fmov(0x3f800000,4);
  local_58 = *(long *)(lVar2 + 0x28);
  *in_x0 = uVar6;
  *(undefined2 *)(in_x0 + 1) = 0;
  local_98 = 0;
  DistortionSettings::DistortionSettings((DistortionSettings *)&uStack_90);
  DistortionSettings::DistortionSettings((DistortionSettings *)&local_88);
  DistortionSettings::DistortionSettings((DistortionSettings *)&pvStack_80);
  *(ulong *)((long)in_x0 + 0x14) = CONCAT44(uStack_8c,uStack_90);
  *(undefined8 *)((long)in_x0 + 0xc) = local_98;
  this = in_x0 + 9;
  puVar1 = (undefined8 *)*this;
  *(void **)((long)in_x0 + 0x24) = pvStack_80;
  *(void **)((long)in_x0 + 0x1c) = local_88;
  *(undefined *)((long)in_x0 + 0x2c) = 1;
  in_x0[6] = 0x600000000;
  in_x0[7] = 0;
  *(undefined4 *)(in_x0 + 8) = 0;
  puVar4 = (undefined8 *)in_x0[10];
  while (puVar3 = puVar4, puVar3 != puVar1) {
    pvVar5 = (void *)puVar3[-6];
    puVar4 = puVar3 + -8;
    if (pvVar5 != (void *)0x0) {
      puVar3[-5] = pvVar5;
      operator_delete(pvVar5);
    }
  }
  in_x0[10] = puVar1;
  local_98 = 0;
  uStack_90 = 0;
  pvStack_80 = (void *)0x0;
  local_88 = (void *)0x0;
  uStack_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_64 = 0x3f800000;
  uStack_60 = 0;
  local_5c = 0;
  if (puVar1 < (undefined8 *)in_x0[0xb]) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[6] = 0x3f80000000000000;
    puVar1[5] = 0;
    puVar1[7] = 0;
    in_x0[10] = puVar1 + 8;
  }
  else {
                    /* try { // try from 008aac84 to 008aac8f has its CatchHandler @ 008aad6c */
    std::__ndk1::
    vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
    ::__push_back_slow_path<LoadSimulationRuntimeSettings::LoadPoint>
              ((vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
                *)this,(LoadPoint *)&local_98);
    if (local_88 != (void *)0x0) {
      pvStack_80 = local_88;
      operator_delete(local_88);
    }
  }
  puVar1 = (undefined8 *)in_x0[10];
  local_98 = 0x3f800000;
  uStack_90 = 0;
  local_68 = 0;
  local_64 = 0x3f800000;
  uStack_60 = 0;
  pvStack_80 = (void *)0x0;
  local_88 = (void *)0x0;
  uStack_70 = 0;
  local_78 = 0;
  local_5c = 0;
  if (puVar1 < (undefined8 *)in_x0[0xb]) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = 0x3f800000;
    puVar1[2] = 0;
    puVar1[3] = 0;
    local_88 = (void *)0x0;
    pvStack_80 = (void *)0x0;
    puVar1[4] = 0;
    local_78 = 0;
    puVar1[6] = 0x3f80000000000000;
    puVar1[5] = 0;
    puVar1[7] = 0;
    in_x0[10] = puVar1 + 8;
  }
  else {
                    /* try { // try from 008aad1c to 008aad27 has its CatchHandler @ 008aad68 */
    std::__ndk1::
    vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
    ::__push_back_slow_path<LoadSimulationRuntimeSettings::LoadPoint>
              ((vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
                *)this,(LoadPoint *)&local_98);
    if (local_88 != (void *)0x0) {
      pvStack_80 = local_88;
      operator_delete(local_88);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


