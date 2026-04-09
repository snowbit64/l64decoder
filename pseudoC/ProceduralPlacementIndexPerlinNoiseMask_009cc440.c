// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementIndexPerlinNoiseMask
// Entry Point: 009cc440
// Size: 896 bytes
// Signature: undefined __thiscall ProceduralPlacementIndexPerlinNoiseMask(ProceduralPlacementIndexPerlinNoiseMask * this, ProceduralPlacementMask * param_1, basic_string * param_2, ProceduralPlacementMask * param_3)


/* ProceduralPlacementIndexPerlinNoiseMask::ProceduralPlacementIndexPerlinNoiseMask(ProceduralPlacementMask*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, ProceduralPlacementMask*) */

void __thiscall
ProceduralPlacementIndexPerlinNoiseMask::ProceduralPlacementIndexPerlinNoiseMask
          (ProceduralPlacementIndexPerlinNoiseMask *this,ProceduralPlacementMask *param_1,
          basic_string *param_2,ProceduralPlacementMask *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  ProceduralPlacementMask **ppPVar5;
  long lVar6;
  void *pvVar7;
  ProceduralPlacementMask *pPVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  void *pvVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  ProceduralPlacementMask **ppPVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar6 = tpidr_el0;
  lVar10 = *(long *)(lVar6 + 0x28);
  pPVar8 = param_3;
  ProceduralPlacementMask::ProceduralPlacementMask((ProceduralPlacementMask *)this,param_1);
  *(undefined ***)this = &PTR__ProceduralPlacementIndexPerlinNoiseMask_00fe2168;
                    /* try { // try from 009cc490 to 009cc4a3 has its CatchHandler @ 009cc7c0 */
  getIndexPerlinNoiseCreateMaskSignature
            ((ProceduralPlacementIndexPerlinNoiseMask *)param_1,(ProceduralPlacementMask *)param_2,
             (basic_string *)param_3,pPVar8);
  if (((byte)this[0x70] & 1) != 0) {
    operator_delete(*(void **)(this + 0x80));
  }
  ppPVar5 = *(ProceduralPlacementMask ***)(this + 0x90);
  *(undefined8 *)(this + 0x78) = uStack_78;
  *(undefined8 *)(this + 0x70) = local_80;
  *(undefined8 *)(this + 0x80) = local_70;
  if (ppPVar5 == *(ProceduralPlacementMask ***)(this + 0x98)) {
    pvVar7 = *(void **)(this + 0x88);
    uVar12 = (long)ppPVar5 - (long)pvVar7;
    uVar18 = ((long)uVar12 >> 3) + 1;
    if (uVar18 >> 0x3d != 0) {
                    /* try { // try from 009cc794 to 009cc7bb has its CatchHandler @ 009cc7c4 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar18 <= (ulong)((long)uVar12 >> 2)) {
      uVar18 = (long)uVar12 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar12) {
      uVar18 = 0x1fffffffffffffff;
    }
    if (uVar18 == 0) {
      pvVar13 = (void *)0x0;
    }
    else {
      if (uVar18 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009cc52c to 009cc52f has its CatchHandler @ 009cc7c4 */
      pvVar13 = operator_new(uVar18 << 3);
    }
    ppPVar5 = (ProceduralPlacementMask **)((long)pvVar13 + ((long)uVar12 >> 3) * 8);
    ppPVar17 = ppPVar5 + 1;
    *ppPVar5 = param_1;
    if (0 < (long)uVar12) {
      memcpy(pvVar13,pvVar7,uVar12);
    }
    *(void **)(this + 0x88) = pvVar13;
    *(ProceduralPlacementMask ***)(this + 0x90) = ppPVar17;
    *(void **)(this + 0x98) = (void *)((long)pvVar13 + uVar18 * 8);
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
      ppPVar17 = *(ProceduralPlacementMask ***)(this + 0x90);
    }
  }
  else {
    ppPVar17 = ppPVar5 + 1;
    *ppPVar5 = param_1;
    *(ProceduralPlacementMask ***)(this + 0x90) = ppPVar17;
  }
  if (ppPVar17 == *(ProceduralPlacementMask ***)(this + 0x98)) {
    pvVar7 = *(void **)(this + 0x88);
    uVar12 = (long)ppPVar17 - (long)pvVar7;
    uVar18 = ((long)uVar12 >> 3) + 1;
    if (uVar18 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar18 <= (ulong)((long)uVar12 >> 2)) {
      uVar18 = (long)uVar12 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar12) {
      uVar18 = 0x1fffffffffffffff;
    }
    if (uVar18 == 0) {
      pvVar13 = (void *)0x0;
    }
    else {
      if (uVar18 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009cc5d4 to 009cc5d7 has its CatchHandler @ 009cc7c4 */
      pvVar13 = operator_new(uVar18 << 3);
    }
    ppPVar5 = (ProceduralPlacementMask **)((long)pvVar13 + ((long)uVar12 >> 3) * 8);
    *ppPVar5 = param_3;
    if (0 < (long)uVar12) {
      memcpy(pvVar13,pvVar7,uVar12);
    }
    *(void **)(this + 0x88) = pvVar13;
    *(ProceduralPlacementMask ***)(this + 0x90) = ppPVar5 + 1;
    *(void **)(this + 0x98) = (void *)((long)pvVar13 + uVar18 * 8);
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
  }
  else {
    *ppPVar17 = param_3;
    *(ProceduralPlacementMask ***)(this + 0x90) = ppPVar17 + 1;
  }
                    /* try { // try from 009cc620 to 009cc627 has its CatchHandler @ 009cc7c4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0xb0),param_2);
  uVar18 = *(ulong *)(param_1 + 200);
  *(ulong *)(this + 200) = uVar18;
  uVar18 = (uVar18 & 0xffffffff) << 2;
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
                    /* try { // try from 009cc640 to 009cc647 has its CatchHandler @ 009cc7c8 */
  pvVar7 = operator_new__(uVar18);
  *(void **)(this + 0xd8) = pvVar7;
  memset(pvVar7,0,uVar18);
                    /* try { // try from 009cc660 to 009cc683 has its CatchHandler @ 009cc7c8 */
  (**(code **)(*(long *)this + 0x80))(this,param_1,param_2,param_3);
  uVar3 = *(uint *)(this + 0x50);
  uVar18 = (ulong)uVar3;
  iVar4 = *(int *)(this + 0x54);
  pvVar7 = operator_new__((ulong)(iVar4 * uVar3) << 2);
  *(void **)(this + 0xe0) = pvVar7;
  if (iVar4 != 0) {
    uVar9 = 0;
    iVar11 = 0;
    uVar12 = uVar18 & 0xfffffff8;
    do {
      if (uVar3 != 0) {
        pvVar13 = *(void **)(param_1 + 0xe0);
        if (uVar3 < 8) {
LAB_009cc6c8:
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          if ((!CARRY4(uVar3 * iVar11,(uint)(uVar18 - 1))) && (uVar18 - 1 >> 0x20 == 0)) {
            uVar16 = uVar12;
            uVar14 = uVar9;
            if ((pvVar7 < (void *)((long)pvVar13 + uVar18 * 4)) &&
               (pvVar13 < (void *)((long)pvVar7 + uVar18 * 4))) goto LAB_009cc6c8;
            do {
              uVar16 = uVar16 - 8;
              puVar1 = (undefined8 *)((long)pvVar13 + (ulong)uVar14 * 4);
              puVar2 = (undefined8 *)((long)pvVar7 + (ulong)uVar14 * 4);
              uVar19 = *puVar1;
              uVar21 = puVar1[3];
              uVar20 = puVar1[2];
              puVar2[1] = puVar1[1];
              *puVar2 = uVar19;
              puVar2[3] = uVar21;
              puVar2[2] = uVar20;
              uVar14 = uVar14 + 8;
            } while (uVar16 != 0);
            uVar16 = uVar12;
            if (uVar12 == uVar18) goto LAB_009cc758;
          }
        }
        uVar14 = uVar9 + (int)uVar16;
        lVar15 = uVar18 - uVar16;
        do {
          uVar16 = (ulong)uVar14;
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + -1;
          *(undefined4 *)((long)pvVar7 + uVar16 * 4) = *(undefined4 *)((long)pvVar13 + uVar16 * 4);
        } while (lVar15 != 0);
      }
LAB_009cc758:
      iVar11 = iVar11 + 1;
      if (iVar11 == iVar4) break;
      pvVar7 = *(void **)(this + 0xe0);
      uVar9 = uVar9 + uVar3;
    } while( true );
  }
  if (*(long *)(lVar6 + 0x28) == lVar10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


