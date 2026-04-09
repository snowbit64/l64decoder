// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementClampedMask
// Entry Point: 009c8ad0
// Size: 812 bytes
// Signature: undefined __thiscall ProceduralPlacementClampedMask(ProceduralPlacementClampedMask * this, ProceduralPlacementMask * param_1, float param_2, float param_3)


/* ProceduralPlacementClampedMask::ProceduralPlacementClampedMask(ProceduralPlacementMask*, float,
   float) */

void __thiscall
ProceduralPlacementClampedMask::ProceduralPlacementClampedMask
          (ProceduralPlacementClampedMask *this,ProceduralPlacementMask *param_1,float param_2,
          float param_3)

{
  ProceduralPlacementMask **ppPVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *__dest;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  ProceduralPlacementMask *extraout_x1;
  ProceduralPlacementMask *pPVar11;
  int iVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
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
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  local_90 = 0;
  uStack_8f = 0;
  local_a8 = 0;
  local_c0 = 0;
                    /* try { // try from 009c8b20 to 009c8b2f has its CatchHandler @ 009c8e08 */
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(basic_string *)&local_90,(basic_string *)&local_a8,
             (basic_string *)&local_c0);
  pPVar11 = extraout_x1;
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  *(float *)(this + 200) = param_2;
  *(float *)(this + 0xcc) = param_3;
  *(undefined ***)this = &PTR__ProceduralPlacementClampedMask_00fe1f28;
                    /* try { // try from 009c8b68 to 009c8b7b has its CatchHandler @ 009c8e04 */
  getClampedMaskSignature((ProceduralPlacementClampedMask *)param_1,pPVar11,param_2,param_3);
  if ((*(byte *)(this + 0x70) & 1) != 0) {
    operator_delete(*(void **)(this + 0x80));
  }
  ppPVar1 = *(ProceduralPlacementMask ***)(this + 0x90);
  *(undefined8 *)(this + 0x78) = uStack_88;
  *(ulong *)(this + 0x70) = CONCAT62(uStack_8e,CONCAT11(uStack_8f,local_90));
  *(void **)(this + 0x80) = local_80;
  if (ppPVar1 == *(ProceduralPlacementMask ***)(this + 0x98)) {
    pvVar8 = *(void **)(this + 0x88);
    uVar10 = (long)ppPVar1 - (long)pvVar8;
    uVar9 = ((long)uVar10 >> 3) + 1;
    if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009c8de8 to 009c8df7 has its CatchHandler @ 009c8e58 */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar9 <= (ulong)((long)uVar10 >> 2)) {
      uVar9 = (long)uVar10 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009c8c24 to 009c8c27 has its CatchHandler @ 009c8e58 */
      __dest = operator_new(uVar9 << 3);
    }
    ppPVar1 = (ProceduralPlacementMask **)((long)__dest + ((long)uVar10 >> 3) * 8);
    *ppPVar1 = param_1;
    if (0 < (long)uVar10) {
      memcpy(__dest,pvVar8,uVar10);
    }
    *(void **)(this + 0x88) = __dest;
    *(ProceduralPlacementMask ***)(this + 0x90) = ppPVar1 + 1;
    *(void **)(this + 0x98) = (void *)((long)__dest + uVar9 * 8);
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
  }
  else {
    *ppPVar1 = param_1;
    *(ProceduralPlacementMask ***)(this + 0x90) = ppPVar1 + 1;
  }
                    /* try { // try from 009c8c74 to 009c8cef has its CatchHandler @ 009c8e58 */
  uVar4 = (**(code **)(*(long *)param_1 + 0x40))(param_1);
  *(undefined4 *)(this + 0x50) = uVar4;
  uVar4 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
  *(undefined4 *)(this + 0x54) = uVar4;
  iVar5 = (**(code **)(*(long *)param_1 + 0x40))(param_1);
  iVar6 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
  pvVar8 = operator_new__((ulong)(uint)(iVar6 * iVar5) << 2);
  *(void **)(this + 0x58) = pvVar8;
  uVar9 = (**(code **)(*(long *)this + 0x40))(this);
  uVar10 = (**(code **)(*(long *)this + 0x48))(this);
  memset(pvVar8,0,(uVar9 & 0xffffffff) * (uVar10 & 0xffffffff) * 4);
                    /* try { // try from 009c8d0c to 009c8d13 has its CatchHandler @ 009c8e00 */
  iVar5 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
                    /* try { // try from 009c8d20 to 009c8d27 has its CatchHandler @ 009c8dfc */
  iVar6 = (**(code **)(*(long *)param_1 + 0x40))(param_1);
  if (iVar5 != 0) {
    iVar12 = 0;
    plVar13 = **(long ***)(this + 0x88);
    do {
      if (iVar6 != 0) {
        iVar14 = 0;
        do {
                    /* try { // try from 009c8d5c to 009c8d87 has its CatchHandler @ 009c8e5c */
          fVar16 = (float)(**(code **)(*plVar13 + 0x68))(plVar13,iVar14,iVar12);
          fVar17 = *(float *)(this + 200);
          fVar18 = *(float *)(this + 0xcc);
          lVar15 = *(long *)(this + 0x58);
          iVar7 = (**(code **)(*plVar13 + 0x40))(plVar13);
          uVar2 = iVar14 + iVar12 * iVar7;
          iVar14 = iVar14 + 1;
          if (fVar16 <= fVar18) {
            fVar18 = fVar16;
          }
          if (fVar17 <= fVar16) {
            fVar17 = fVar18;
          }
          *(float *)(lVar15 + (ulong)uVar2 * 4) = fVar17;
        } while (iVar6 != iVar14);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != iVar5);
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


