// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementRemapMask
// Entry Point: 009e1cbc
// Size: 1092 bytes
// Signature: undefined __thiscall ProceduralPlacementRemapMask(ProceduralPlacementRemapMask * this, ProceduralPlacementMask * param_1, uint param_2, float * param_3)


/* ProceduralPlacementRemapMask::ProceduralPlacementRemapMask(ProceduralPlacementMask*, unsigned
   int, float*) */

void __thiscall
ProceduralPlacementRemapMask::ProceduralPlacementRemapMask
          (ProceduralPlacementRemapMask *this,ProceduralPlacementMask *param_1,uint param_2,
          float *param_3)

{
  ProceduralPlacementMask **ppPVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  void *pvVar10;
  float *pfVar11;
  int iVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  ushort local_c0;
  void *local_b0;
  ushort local_a8;
  void *local_98;
  code *local_90;
  undefined8 uStack_88;
  void *local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  local_90 = (code *)((ulong)local_90 & 0xffffffffffff0000);
  local_a8 = 0;
  local_c0 = 0;
                    /* try { // try from 009e1d08 to 009e1d17 has its CatchHandler @ 009e210c */
  pfVar11 = (float *)&local_c0;
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(basic_string *)&local_90,(basic_string *)&local_a8,
             (basic_string *)pfVar11);
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(void **)(this + 200) = (void *)0x0;
  *(undefined ***)this = &PTR__ProceduralPlacementRemapMask_00fe2910;
                    /* try { // try from 009e1d58 to 009e1d6b has its CatchHandler @ 009e2108 */
  getRemapMaskSignature
            ((ProceduralPlacementRemapMask *)param_1,(ProceduralPlacementMask *)(ulong)param_2,
             (uint)param_3,pfVar11);
  if ((*(byte *)(this + 0x70) & 1) != 0) {
    operator_delete(*(void **)(this + 0x80));
  }
  ppPVar1 = *(ProceduralPlacementMask ***)(this + 0x90);
  *(undefined8 *)(this + 0x78) = uStack_88;
  *(code **)(this + 0x70) = local_90;
  *(void **)(this + 0x80) = local_80;
  if (ppPVar1 == *(ProceduralPlacementMask ***)(this + 0x98)) {
    pvVar7 = *(void **)(this + 0x88);
    uVar9 = (long)ppPVar1 - (long)pvVar7;
    uVar8 = ((long)uVar9 >> 3) + 1;
    if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009e20ec to 009e20fb has its CatchHandler @ 009e2164 */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar8 <= (ulong)((long)uVar9 >> 2)) {
      uVar8 = (long)uVar9 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009e1e18 to 009e1e1b has its CatchHandler @ 009e2164 */
      pvVar10 = operator_new(uVar8 << 3);
    }
    ppPVar1 = (ProceduralPlacementMask **)((long)pvVar10 + ((long)uVar9 >> 3) * 8);
    *ppPVar1 = param_1;
    if (0 < (long)uVar9) {
      memcpy(pvVar10,pvVar7,uVar9);
    }
    *(void **)(this + 0x88) = pvVar10;
    *(ProceduralPlacementMask ***)(this + 0x90) = ppPVar1 + 1;
    *(void **)(this + 0x98) = (void *)((long)pvVar10 + uVar8 * 8);
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
  }
  else {
    *ppPVar1 = param_1;
    *(ProceduralPlacementMask ***)(this + 0x90) = ppPVar1 + 1;
  }
                    /* try { // try from 009e1e68 to 009e1ee3 has its CatchHandler @ 009e2164 */
  uVar3 = (**(code **)(*(long *)param_1 + 0x40))(param_1);
  *(undefined4 *)(this + 0x50) = uVar3;
  uVar3 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
  *(undefined4 *)(this + 0x54) = uVar3;
  iVar4 = (**(code **)(*(long *)param_1 + 0x40))(param_1);
  iVar5 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
  pvVar7 = operator_new__((ulong)(uint)(iVar5 * iVar4) << 2);
  *(void **)(this + 0x58) = pvVar7;
  uVar8 = (**(code **)(*(long *)param_1 + 0x40))(param_1);
  uVar9 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
  memset(pvVar7,0,(uVar8 & 0xffffffff) * (uVar9 & 0xffffffff) * 4);
  if (param_2 != 0) {
    uVar16 = 0;
    do {
      if (uVar16 + 1 < param_2) {
        pfVar11 = *(float **)(this + 0xd0);
        fVar17 = param_3[uVar16];
        fVar18 = param_3[uVar16 + 1];
        if (pfVar11 == *(float **)(this + 0xd8)) {
          pvVar7 = *(void **)(this + 200);
          uVar9 = (long)pfVar11 - (long)pvVar7;
          uVar8 = ((long)uVar9 >> 3) + 1;
          if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar8 <= (ulong)((long)uVar9 >> 2)) {
            uVar8 = (long)uVar9 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar9) {
            uVar8 = 0x1fffffffffffffff;
          }
          if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009e20d8 to 009e20eb has its CatchHandler @ 009e2160 */
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 009e1f80 to 009e1f83 has its CatchHandler @ 009e215c */
          pvVar10 = operator_new(uVar8 << 3);
          pfVar11 = (float *)((long)pvVar10 + ((long)uVar9 >> 3) * 8);
          *pfVar11 = fVar17;
          pfVar11[1] = fVar18;
          if (0 < (long)uVar9) {
            memcpy(pvVar10,pvVar7,uVar9);
          }
          *(void **)(this + 200) = pvVar10;
          *(float **)(this + 0xd0) = pfVar11 + 2;
          *(void **)(this + 0xd8) = (void *)((long)pvVar10 + uVar8 * 8);
          if (pvVar7 != (void *)0x0) {
            operator_delete(pvVar7);
          }
        }
        else {
          *pfVar11 = fVar17;
          pfVar11[1] = fVar18;
          *(float **)(this + 0xd0) = pfVar11 + 2;
        }
      }
      uVar16 = uVar16 + 2;
    } while (uVar16 < param_2);
  }
  local_90 = BasePoint::sortByDistanceAsc;
                    /* try { // try from 009e1fdc to 009e1fe3 has its CatchHandler @ 009e2164 */
  std::__ndk1::
  __sort<bool(*&)(ProceduralPlacementRemapMask::BasePoint_const&,ProceduralPlacementRemapMask::BasePoint_const&),ProceduralPlacementRemapMask::BasePoint*>
            (*(BasePoint **)(this + 200),*(BasePoint **)(this + 0xd0),
             (_func_bool_BasePoint_ptr_BasePoint_ptr *)&local_90);
                    /* try { // try from 009e1fec to 009e1ff3 has its CatchHandler @ 009e2104 */
  iVar4 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
                    /* try { // try from 009e2000 to 009e2007 has its CatchHandler @ 009e2100 */
  iVar5 = (**(code **)(*(long *)param_1 + 0x40))(param_1);
  if (iVar4 != 0) {
    iVar12 = 0;
    plVar13 = **(long ***)(this + 0x88);
    do {
      if (iVar5 != 0) {
        iVar14 = 0;
        do {
                    /* try { // try from 009e2040 to 009e2077 has its CatchHandler @ 009e2168 */
          fVar17 = (float)(**(code **)(*plVar13 + 0x68))(plVar13,iVar14,iVar12);
          fVar17 = (float)remap(this,fVar17 / 255.0);
          lVar15 = *(long *)(this + 0x58);
          iVar6 = (**(code **)(*plVar13 + 0x40))(plVar13);
          uVar16 = iVar14 + iVar12 * iVar6;
          iVar14 = iVar14 + 1;
          *(float *)(lVar15 + (ulong)uVar16 * 4) = (float)(ulong)(uint)(int)(fVar17 * 255.0);
        } while (iVar5 != iVar14);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != iVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


