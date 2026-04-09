// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementScaleMask
// Entry Point: 009e7e24
// Size: 976 bytes
// Signature: undefined __thiscall ProceduralPlacementScaleMask(ProceduralPlacementScaleMask * this, ProceduralPlacementMask * param_1, uint param_2, uint param_3)


/* ProceduralPlacementScaleMask::ProceduralPlacementScaleMask(ProceduralPlacementMask*, unsigned
   int, unsigned int) */

void __thiscall
ProceduralPlacementScaleMask::ProceduralPlacementScaleMask
          (ProceduralPlacementScaleMask *this,ProceduralPlacementMask *param_1,uint param_2,
          uint param_3)

{
  ProceduralPlacementMask **ppPVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  void *__dest;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  ushort local_c0;
  void *local_b0;
  ushort local_a8;
  void *local_98;
  byte local_90;
  undefined uStack_8f;
  undefined6 uStack_8e;
  undefined8 uStack_88;
  void *local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  local_90 = 0;
  uStack_8f = 0;
  local_a8 = 0;
  local_c0 = 0;
                    /* try { // try from 009e7e70 to 009e7e7f has its CatchHandler @ 009e81fc */
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(basic_string *)&local_90,(basic_string *)&local_a8,
             (basic_string *)&local_c0);
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  *(undefined ***)this = &PTR__ProceduralPlacementScaleMask_00fe2b28;
                    /* try { // try from 009e7eb0 to 009e7ec3 has its CatchHandler @ 009e81f8 */
  getScaleMaskSignature(param_1,param_2,param_3);
  if ((*(byte *)(this + 0x70) & 1) != 0) {
    operator_delete(*(void **)(this + 0x80));
  }
  ppPVar1 = *(ProceduralPlacementMask ***)(this + 0x90);
  *(undefined8 *)(this + 0x78) = uStack_88;
  *(ulong *)(this + 0x70) = CONCAT62(uStack_8e,CONCAT11(uStack_8f,local_90));
  *(void **)(this + 0x80) = local_80;
  if (ppPVar1 == *(ProceduralPlacementMask ***)(this + 0x98)) {
    pvVar7 = *(void **)(this + 0x88);
    uVar9 = (long)ppPVar1 - (long)pvVar7;
    uVar8 = ((long)uVar9 >> 3) + 1;
    if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009e81e0 to 009e81ef has its CatchHandler @ 009e824c */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar8 <= (ulong)((long)uVar9 >> 2)) {
      uVar8 = (long)uVar9 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009e7f70 to 009e7f73 has its CatchHandler @ 009e824c */
      __dest = operator_new(uVar8 << 3);
    }
    ppPVar1 = (ProceduralPlacementMask **)((long)__dest + ((long)uVar9 >> 3) * 8);
    *ppPVar1 = param_1;
    if (0 < (long)uVar9) {
      memcpy(__dest,pvVar7,uVar9);
    }
    *(void **)(this + 0x88) = __dest;
    *(ProceduralPlacementMask ***)(this + 0x90) = ppPVar1 + 1;
    *(void **)(this + 0x98) = (void *)((long)__dest + uVar8 * 8);
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
  }
  else {
    *ppPVar1 = param_1;
    *(ProceduralPlacementMask ***)(this + 0x90) = ppPVar1 + 1;
  }
  *(ProceduralPlacementMask **)(this + 200) = param_1;
  *(uint *)(this + 0x50) = param_2;
  *(uint *)(this + 0x54) = param_3;
                    /* try { // try from 009e7fcc to 009e7ffb has its CatchHandler @ 009e824c */
  pvVar7 = operator_new__((ulong)(param_3 * param_2) << 2);
  *(void **)(this + 0x58) = pvVar7;
  uVar8 = (**(code **)(*(long *)this + 0x40))(this);
  uVar9 = (**(code **)(*(long *)this + 0x48))(this);
  memset(pvVar7,0,(uVar8 & 0xffffffff) * (uVar9 & 0xffffffff) * 4);
                    /* try { // try from 009e8018 to 009e801f has its CatchHandler @ 009e81f4 */
  uVar8 = (**(code **)(*(long *)param_1 + 0x40))(param_1);
  uVar18 = *(undefined4 *)(this + 0x50);
                    /* try { // try from 009e8030 to 009e8037 has its CatchHandler @ 009e8250 */
  uVar9 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
  uVar12 = *(uint *)(this + 0x50);
  uVar13 = *(uint *)(this + 0x54);
  if (uVar13 != 0) {
    fVar16 = (float)NEON_ucvtf(uVar18);
    uVar14 = 0;
    uVar3 = (ulong)uVar13;
    uVar15 = uVar12;
    do {
      if (uVar15 != 0) {
        uVar13 = 0;
        do {
                    /* try { // try from 009e8094 to 009e80af has its CatchHandler @ 009e8258 */
          lVar10 = (**(code **)(*(long *)param_1 + 0x50))(param_1);
          iVar6 = (**(code **)(*(long *)param_1 + 0x40))(param_1);
          uVar4 = (ulong)uVar13;
          uVar12 = *(uint *)(this + 0x50);
          uVar15 = uVar13 + uVar14 * uVar12;
          uVar13 = uVar13 + 1;
          *(undefined4 *)(*(long *)(this + 0x58) + (ulong)uVar15 * 4) =
               *(undefined4 *)
                (lVar10 + (ulong)(uint)((int)(((float)(uVar8 & 0xffffffff) / fVar16) * (float)uVar4)
                                       + iVar6 * (int)(((float)(uVar9 & 0xffffffff) / (float)uVar3)
                                                      * (float)(ulong)uVar14)) * 4);
        } while (uVar13 < uVar12);
        uVar13 = *(uint *)(this + 0x54);
        uVar15 = uVar12;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar13);
  }
                    /* try { // try from 009e80ec to 009e8123 has its CatchHandler @ 009e8250 */
  pvVar7 = operator_new__((ulong)(uVar12 * uVar13) << 2);
  *(void **)(this + 0xd0) = pvVar7;
  plVar11 = **(long ***)(this + 0x88);
  uVar8 = (**(code **)(*plVar11 + 0x40))(plVar11);
  uVar18 = *(undefined4 *)(this + 0x50);
  uVar9 = (**(code **)(*plVar11 + 0x48))(plVar11);
  if (uVar13 != 0) {
    fVar17 = (float)NEON_ucvtf(uVar18);
    uVar14 = 0;
    fVar16 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x54));
    do {
      if (uVar12 != 0) {
        uVar15 = 0;
        do {
                    /* try { // try from 009e8180 to 009e818b has its CatchHandler @ 009e8254 */
          uVar18 = (**(code **)(*plVar11 + 0x68))
                             (plVar11,(int)(((float)(uVar8 & 0xffffffff) / fVar17) *
                                           (float)(ulong)uVar15),
                              (int)(((float)(uVar9 & 0xffffffff) / fVar16) * (float)(ulong)uVar14));
          uVar2 = uVar15 + uVar14 * *(int *)(this + 0x50);
          uVar15 = uVar15 + 1;
          *(undefined4 *)(*(long *)(this + 0xd0) + (ulong)uVar2 * 4) = uVar18;
        } while (uVar12 != uVar15);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar13);
  }
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


