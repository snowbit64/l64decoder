// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LoadSimulationRuntimeSettings
// Entry Point: 008a8784
// Size: 388 bytes
// Signature: undefined __thiscall LoadSimulationRuntimeSettings(LoadSimulationRuntimeSettings * this)


/* LoadSimulationRuntimeSettings::LoadSimulationRuntimeSettings() */

void __thiscall
LoadSimulationRuntimeSettings::LoadSimulationRuntimeSettings(LoadSimulationRuntimeSettings *this)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *this_00;
  undefined8 uVar3;
  undefined8 local_78;
  undefined4 local_70;
  void *local_68;
  void *pvStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  uVar3 = NEON_fmov(0x3f800000,4);
  local_38 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)this = uVar3;
  *(undefined2 *)(this + 8) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  DistortionSettings::DistortionSettings((DistortionSettings *)(this + 0x14));
  DistortionSettings::DistortionSettings((DistortionSettings *)(this + 0x1c));
  DistortionSettings::DistortionSettings((DistortionSettings *)(this + 0x24));
  local_78 = 0;
  local_70 = 0;
  local_48 = 0;
  this_00 = (undefined8 *)(this + 0x48);
  *this_00 = 0;
  this[0x2c] = (LoadSimulationRuntimeSettings)0x1;
  *(undefined8 *)(this + 0x30) = 0x600000000;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  local_3c = 0;
  pvStack_60 = (void *)0x0;
  local_68 = (void *)0x0;
  uStack_50 = 0;
  local_58 = 0;
  local_44 = 0x3f800000;
  uStack_40 = 0;
                    /* try { // try from 008a8828 to 008a8833 has its CatchHandler @ 008a890c */
  std::__ndk1::
  vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
  ::__push_back_slow_path<LoadSimulationRuntimeSettings::LoadPoint>
            ((vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
              *)this_00,(LoadPoint *)&local_78);
  if (local_68 != (void *)0x0) {
    pvStack_60 = local_68;
    operator_delete(local_68);
  }
  puVar1 = *(undefined8 **)(this + 0x50);
  local_78 = 0x3f800000;
  local_70 = 0;
  local_48 = 0;
  local_44 = 0x3f800000;
  uStack_40 = 0;
  pvStack_60 = (void *)0x0;
  local_68 = (void *)0x0;
  uStack_50 = 0;
  local_58 = 0;
  local_3c = 0;
  if (puVar1 < *(undefined8 **)(this + 0x58)) {
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = 0x3f800000;
    puVar1[2] = 0;
    puVar1[3] = 0;
    local_68 = (void *)0x0;
    pvStack_60 = (void *)0x0;
    puVar1[4] = 0;
    local_58 = 0;
    puVar1[6] = 0x3f80000000000000;
    puVar1[5] = 0;
    puVar1[7] = 0;
    *(undefined8 **)(this + 0x50) = puVar1 + 8;
  }
  else {
                    /* try { // try from 008a88c0 to 008a88cb has its CatchHandler @ 008a8908 */
    std::__ndk1::
    vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
    ::__push_back_slow_path<LoadSimulationRuntimeSettings::LoadPoint>
              ((vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
                *)this_00,(LoadPoint *)&local_78);
    if (local_68 != (void *)0x0) {
      pvStack_60 = local_68;
      operator_delete(local_68);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


