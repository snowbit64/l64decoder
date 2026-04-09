// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initEqualizerBands
// Entry Point: 008b6bb4
// Size: 656 bytes
// Signature: undefined __thiscall initEqualizerBands(LoadSoundSimulation * this, vector * param_1)


/* LoadSoundSimulation::initEqualizerBands(std::__ndk1::vector<LoadSimulationRuntimeSettings::LoadPoint,
   std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint> > const&) */

void __thiscall LoadSoundSimulation::initEqualizerBands(LoadSoundSimulation *this,vector *param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  ulong uVar10;
  ulong uVar11;
  size_t __n;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  void *local_80;
  void *local_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)param_1;
  if (lVar4 != *(long *)(param_1 + 8)) {
    local_80 = (void *)0x0;
    local_78 = (void *)0x0;
    local_70 = (void *)0x0;
    uVar10 = (*(long *)(lVar4 + 0x18) - *(long *)(lVar4 + 0x10) >> 2) * -0x5555555555555555;
    uVar8 = uVar10 << 0x20;
    uVar11 = (ulong)(int)uVar10;
    if (uVar8 != 0) {
      if ((long)uVar8 < 0) {
                    /* try { // try from 008b6e34 to 008b6e3f has its CatchHandler @ 008b6e48 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 008b6c2c to 008b6c63 has its CatchHandler @ 008b6e48 */
      local_78 = operator_new(uVar11 * 0xc);
      local_70 = (void *)((long)local_78 + uVar11 * 0xc);
    }
    pvVar9 = *(void **)(this + 0x4e8);
    *(void **)(this + 0x4f0) = pvVar9;
    local_80 = local_78;
    if ((ulong)(*(long *)(this + 0x4f8) - (long)pvVar9 >> 2) < uVar11) {
      pvVar3 = operator_new(uVar8 >> 0x1e);
      *(void **)(this + 0x4e8) = pvVar3;
      *(void **)(this + 0x4f0) = pvVar3;
      *(void **)(this + 0x4f8) = (void *)((long)pvVar3 + uVar11 * 4);
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
      }
    }
    if (0 < (int)uVar10) {
      uVar8 = 0;
      do {
        for (lVar4 = *(long *)param_1; lVar4 != *(long *)(param_1 + 8); lVar4 = lVar4 + 0x40) {
          lVar1 = *(long *)(lVar4 + 0x10);
          if (((long)uVar8 <
               (long)((int)((ulong)(*(long *)(lVar4 + 0x18) - lVar1) >> 2) * -0x55555555)) &&
             (*(float *)(lVar1 + uVar8 * 0xc + 4) != 0.0)) {
            puVar5 = (undefined4 *)(lVar1 + uVar8 * 0xc);
            local_90 = *puVar5;
            local_8c = 0;
            local_88 = puVar5[2];
                    /* try { // try from 008b6d14 to 008b6d1f has its CatchHandler @ 008b6e50 */
            FUN_008b713c(&local_80,&local_90);
            puVar5 = *(undefined4 **)(this + 0x4f0);
            if (puVar5 < *(undefined4 **)(this + 0x4f8)) {
              *puVar5 = (int)uVar8;
              *(undefined4 **)(this + 0x4f0) = puVar5 + 1;
            }
            else {
              pvVar9 = *(void **)(this + 0x4e8);
              __n = (long)puVar5 - (long)pvVar9;
              uVar11 = ((long)__n >> 2) + 1;
              if (uVar11 >> 0x3e != 0) {
                    /* try { // try from 008b6e20 to 008b6e33 has its CatchHandler @ 008b6e4c */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              uVar6 = (long)*(undefined4 **)(this + 0x4f8) - (long)pvVar9;
              uVar7 = (long)uVar6 >> 1;
              if (uVar11 <= uVar7) {
                uVar11 = uVar7;
              }
              if (0x7ffffffffffffffb < uVar6) {
                uVar11 = 0x3fffffffffffffff;
              }
              if (uVar11 == 0) {
                pvVar3 = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                    /* try { // try from 008b6d7c to 008b6d7f has its CatchHandler @ 008b6e44 */
                pvVar3 = operator_new(uVar11 << 2);
              }
              puVar5 = (undefined4 *)((long)pvVar3 + ((long)__n >> 2) * 4);
              *puVar5 = (int)uVar8;
              if (0 < (long)__n) {
                memcpy(pvVar3,pvVar9,__n);
              }
              *(void **)(this + 0x4e8) = pvVar3;
              *(undefined4 **)(this + 0x4f0) = puVar5 + 1;
              *(void **)(this + 0x4f8) = (void *)((long)pvVar3 + uVar11 * 4);
              if (pvVar9 != (void *)0x0) {
                operator_delete(pvVar9);
              }
            }
            break;
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != (uVar10 & 0xffffffff));
    }
                    /* try { // try from 008b6dd4 to 008b6ddb has its CatchHandler @ 008b6e48 */
    Equalizer::create((Equalizer *)(this + 0x4d0),(vector *)&local_80);
    if (local_80 != (void *)0x0) {
      local_78 = local_80;
      operator_delete(local_80);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


