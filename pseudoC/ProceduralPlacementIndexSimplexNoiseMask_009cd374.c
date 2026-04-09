// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementIndexSimplexNoiseMask
// Entry Point: 009cd374
// Size: 872 bytes
// Signature: undefined __thiscall ProceduralPlacementIndexSimplexNoiseMask(ProceduralPlacementIndexSimplexNoiseMask * this, ProceduralPlacementMask * param_1, basic_string * param_2, ProceduralPlacementMask * param_3)


/* ProceduralPlacementIndexSimplexNoiseMask::ProceduralPlacementIndexSimplexNoiseMask(ProceduralPlacementMask*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, ProceduralPlacementMask*) */

void __thiscall
ProceduralPlacementIndexSimplexNoiseMask::ProceduralPlacementIndexSimplexNoiseMask
          (ProceduralPlacementIndexSimplexNoiseMask *this,ProceduralPlacementMask *param_1,
          basic_string *param_2,ProceduralPlacementMask *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  ProceduralPlacementMask **ppPVar6;
  long lVar7;
  void *pvVar8;
  ProceduralPlacementMask *pPVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  void *pvVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ProceduralPlacementMask **ppPVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar7 = tpidr_el0;
  lVar11 = *(long *)(lVar7 + 0x28);
  pPVar9 = param_3;
  ProceduralPlacementMask::ProceduralPlacementMask((ProceduralPlacementMask *)this,param_1);
  *(undefined ***)this = &PTR__ProceduralPlacementIndexSimplexNoiseMask_00fe2228;
                    /* try { // try from 009cd3c4 to 009cd3d7 has its CatchHandler @ 009cd6dc */
  getIndexSimplexNoiseCreateMaskSignature
            ((ProceduralPlacementIndexSimplexNoiseMask *)param_1,(ProceduralPlacementMask *)param_2,
             (basic_string *)param_3,pPVar9);
  if (((byte)this[0x70] & 1) != 0) {
    operator_delete(*(void **)(this + 0x80));
  }
  ppPVar6 = *(ProceduralPlacementMask ***)(this + 0x90);
  *(undefined8 *)(this + 0x78) = uStack_78;
  *(undefined8 *)(this + 0x70) = local_80;
  *(undefined8 *)(this + 0x80) = local_70;
  if (ppPVar6 == *(ProceduralPlacementMask ***)(this + 0x98)) {
    pvVar8 = *(void **)(this + 0x88);
    uVar13 = (long)ppPVar6 - (long)pvVar8;
    uVar4 = ((long)uVar13 >> 3) + 1;
    if (uVar4 >> 0x3d != 0) {
                    /* try { // try from 009cd6b0 to 009cd6d7 has its CatchHandler @ 009cd6e4 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar4 <= (ulong)((long)uVar13 >> 2)) {
      uVar4 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar4 = 0x1fffffffffffffff;
    }
    if (uVar4 == 0) {
      pvVar14 = (void *)0x0;
    }
    else {
      if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009cd460 to 009cd463 has its CatchHandler @ 009cd6e4 */
      pvVar14 = operator_new(uVar4 << 3);
    }
    ppPVar6 = (ProceduralPlacementMask **)((long)pvVar14 + ((long)uVar13 >> 3) * 8);
    ppPVar18 = ppPVar6 + 1;
    *ppPVar6 = param_1;
    if (0 < (long)uVar13) {
      memcpy(pvVar14,pvVar8,uVar13);
    }
    *(void **)(this + 0x88) = pvVar14;
    *(ProceduralPlacementMask ***)(this + 0x90) = ppPVar18;
    *(void **)(this + 0x98) = (void *)((long)pvVar14 + uVar4 * 8);
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
      ppPVar18 = *(ProceduralPlacementMask ***)(this + 0x90);
    }
  }
  else {
    ppPVar18 = ppPVar6 + 1;
    *ppPVar6 = param_1;
    *(ProceduralPlacementMask ***)(this + 0x90) = ppPVar18;
  }
  if (ppPVar18 == *(ProceduralPlacementMask ***)(this + 0x98)) {
    pvVar8 = *(void **)(this + 0x88);
    uVar13 = (long)ppPVar18 - (long)pvVar8;
    uVar4 = ((long)uVar13 >> 3) + 1;
    if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar4 <= (ulong)((long)uVar13 >> 2)) {
      uVar4 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar4 = 0x1fffffffffffffff;
    }
    if (uVar4 == 0) {
      pvVar14 = (void *)0x0;
    }
    else {
      if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009cd508 to 009cd50b has its CatchHandler @ 009cd6e4 */
      pvVar14 = operator_new(uVar4 << 3);
    }
    ppPVar6 = (ProceduralPlacementMask **)((long)pvVar14 + ((long)uVar13 >> 3) * 8);
    *ppPVar6 = param_3;
    if (0 < (long)uVar13) {
      memcpy(pvVar14,pvVar8,uVar13);
    }
    *(void **)(this + 0x88) = pvVar14;
    *(ProceduralPlacementMask ***)(this + 0x90) = ppPVar6 + 1;
    *(void **)(this + 0x98) = (void *)((long)pvVar14 + uVar4 * 8);
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
  }
  else {
    *ppPVar18 = param_3;
    *(ProceduralPlacementMask ***)(this + 0x90) = ppPVar18 + 1;
  }
                    /* try { // try from 009cd554 to 009cd55b has its CatchHandler @ 009cd6e4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0xb0),param_2);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  memcpy(this + 0xcc,param_1 + 0xcc,0x200);
                    /* try { // try from 009cd57c to 009cd59f has its CatchHandler @ 009cd6e0 */
  (**(code **)(*(long *)this + 0x80))(this,param_1,param_2,param_3);
  uVar3 = *(uint *)(this + 0x50);
  uVar4 = (ulong)uVar3;
  iVar5 = *(int *)(this + 0x54);
  pvVar8 = operator_new__((ulong)(iVar5 * uVar3) << 2);
  *(void **)(this + 0x2d0) = pvVar8;
  if (iVar5 != 0) {
    uVar10 = 0;
    iVar12 = 0;
    uVar13 = uVar4 & 0xfffffff8;
    do {
      if (uVar3 != 0) {
        pvVar14 = *(void **)(param_1 + 0x2d0);
        if (uVar3 < 8) {
LAB_009cd5e4:
          uVar17 = 0;
        }
        else {
          uVar17 = 0;
          if ((!CARRY4(uVar3 * iVar12,(uint)(uVar4 - 1))) && (uVar4 - 1 >> 0x20 == 0)) {
            uVar17 = uVar13;
            uVar15 = uVar10;
            if ((pvVar8 < (void *)((long)pvVar14 + uVar4 * 4)) &&
               (pvVar14 < (void *)((long)pvVar8 + uVar4 * 4))) goto LAB_009cd5e4;
            do {
              uVar17 = uVar17 - 8;
              puVar1 = (undefined8 *)((long)pvVar14 + (ulong)uVar15 * 4);
              puVar2 = (undefined8 *)((long)pvVar8 + (ulong)uVar15 * 4);
              uVar19 = *puVar1;
              uVar21 = puVar1[3];
              uVar20 = puVar1[2];
              puVar2[1] = puVar1[1];
              *puVar2 = uVar19;
              puVar2[3] = uVar21;
              puVar2[2] = uVar20;
              uVar15 = uVar15 + 8;
            } while (uVar17 != 0);
            uVar17 = uVar13;
            if (uVar13 == uVar4) goto LAB_009cd674;
          }
        }
        uVar15 = uVar10 + (int)uVar17;
        lVar16 = uVar4 - uVar17;
        do {
          uVar17 = (ulong)uVar15;
          uVar15 = uVar15 + 1;
          lVar16 = lVar16 + -1;
          *(undefined4 *)((long)pvVar8 + uVar17 * 4) = *(undefined4 *)((long)pvVar14 + uVar17 * 4);
        } while (lVar16 != 0);
      }
LAB_009cd674:
      iVar12 = iVar12 + 1;
      if (iVar12 == iVar5) break;
      pvVar8 = *(void **)(this + 0x2d0);
      uVar10 = uVar10 + uVar3;
    } while( true );
  }
  if (*(long *)(lVar7 + 0x28) == lVar11) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


