// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementIndexMask
// Entry Point: 009cb12c
// Size: 844 bytes
// Signature: undefined __thiscall ProceduralPlacementIndexMask(ProceduralPlacementIndexMask * this, ProceduralPlacementMask * param_1, basic_string * param_2, ProceduralPlacementMask * param_3)


/* ProceduralPlacementIndexMask::ProceduralPlacementIndexMask(ProceduralPlacementMask*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, ProceduralPlacementMask*) */

void __thiscall
ProceduralPlacementIndexMask::ProceduralPlacementIndexMask
          (ProceduralPlacementIndexMask *this,ProceduralPlacementMask *param_1,basic_string *param_2
          ,ProceduralPlacementMask *param_3)

{
  ProceduralPlacementMask **ppPVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  ProceduralPlacementMask *pPVar8;
  long lVar9;
  void *pvVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  ProceduralPlacementMask **ppPVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar3 = tpidr_el0;
  lVar9 = *(long *)(lVar3 + 0x28);
  pPVar8 = param_3;
  ProceduralPlacementMask::ProceduralPlacementMask((ProceduralPlacementMask *)this,param_1);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  puVar16 = (undefined8 *)(this + 0xd0);
  *puVar16 = 0;
  *(undefined ***)this = &PTR__ProceduralPlacementIndexMask_00fe20a8;
                    /* try { // try from 009cb188 to 009cb19f has its CatchHandler @ 009cb47c */
  getIndexCreateMaskSignature
            ((ProceduralPlacementIndexMask *)param_1,(ProceduralPlacementMask *)param_2,
             (basic_string *)param_3,pPVar8);
  if (((byte)this[0x70] & 1) != 0) {
    operator_delete(*(void **)(this + 0x80));
  }
  ppPVar1 = *(ProceduralPlacementMask ***)(this + 0x90);
  *(undefined8 *)(this + 0x78) = uStack_78;
  *(undefined8 *)(this + 0x70) = local_80;
  *(undefined8 *)(this + 0x80) = local_70;
  if (ppPVar1 == *(ProceduralPlacementMask ***)(this + 0x98)) {
    pvVar7 = *(void **)(this + 0x88);
    uVar18 = (long)ppPVar1 - (long)pvVar7;
    uVar17 = ((long)uVar18 >> 3) + 1;
    if (uVar17 >> 0x3d != 0) {
                    /* try { // try from 009cb44c to 009cb473 has its CatchHandler @ 009cb480 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar17 <= (ulong)((long)uVar18 >> 2)) {
      uVar17 = (long)uVar18 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar18) {
      uVar17 = 0x1fffffffffffffff;
    }
    if (uVar17 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar17 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009cb228 to 009cb22b has its CatchHandler @ 009cb480 */
      pvVar10 = operator_new(uVar17 << 3);
    }
    ppPVar1 = (ProceduralPlacementMask **)((long)pvVar10 + ((long)uVar18 >> 3) * 8);
    ppPVar19 = ppPVar1 + 1;
    *ppPVar1 = param_1;
    if (0 < (long)uVar18) {
      memcpy(pvVar10,pvVar7,uVar18);
    }
    *(void **)(this + 0x88) = pvVar10;
    *(ProceduralPlacementMask ***)(this + 0x90) = ppPVar19;
    *(void **)(this + 0x98) = (void *)((long)pvVar10 + uVar17 * 8);
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
      ppPVar19 = *(ProceduralPlacementMask ***)(this + 0x90);
    }
  }
  else {
    ppPVar19 = ppPVar1 + 1;
    *ppPVar1 = param_1;
    *(ProceduralPlacementMask ***)(this + 0x90) = ppPVar19;
  }
  if (ppPVar19 == *(ProceduralPlacementMask ***)(this + 0x98)) {
    pvVar7 = *(void **)(this + 0x88);
    uVar18 = (long)ppPVar19 - (long)pvVar7;
    uVar17 = ((long)uVar18 >> 3) + 1;
    if (uVar17 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar17 <= (ulong)((long)uVar18 >> 2)) {
      uVar17 = (long)uVar18 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar18) {
      uVar17 = 0x1fffffffffffffff;
    }
    if (uVar17 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar17 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009cb2d4 to 009cb2d7 has its CatchHandler @ 009cb480 */
      pvVar10 = operator_new(uVar17 << 3);
    }
    ppPVar1 = (ProceduralPlacementMask **)((long)pvVar10 + ((long)uVar18 >> 3) * 8);
    *ppPVar1 = param_3;
    if (0 < (long)uVar18) {
      memcpy(pvVar10,pvVar7,uVar18);
    }
    *(void **)(this + 0x88) = pvVar10;
    *(ProceduralPlacementMask ***)(this + 0x90) = ppPVar1 + 1;
    *(void **)(this + 0x98) = (void *)((long)pvVar10 + uVar17 * 8);
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
  }
  else {
    *ppPVar19 = param_3;
    *(ProceduralPlacementMask ***)(this + 0x90) = ppPVar19 + 1;
  }
                    /* try { // try from 009cb324 to 009cb32b has its CatchHandler @ 009cb480 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0xb0),param_2);
  if (puVar16 != (undefined8 *)(param_1 + 0xd0)) {
                    /* try { // try from 009cb33c to 009cb343 has its CatchHandler @ 009cb478 */
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    assign<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)puVar16,*(basic_string **)(param_1 + 0xd0),*(basic_string **)(param_1 + 0xd8));
  }
                    /* try { // try from 009cb34c to 009cb3e3 has its CatchHandler @ 009cb484 */
  iVar5 = (**(code **)(*(long *)this + 0x40))(this);
  iVar6 = (**(code **)(*(long *)this + 0x48))(this);
  uVar2 = iVar6 * iVar5;
  uVar18 = (ulong)uVar2;
  uVar17 = uVar18 * 4;
  pvVar7 = operator_new__(uVar17);
  *(void **)(this + 200) = pvVar7;
  if (uVar2 != 0) {
    pvVar10 = *(void **)(param_1 + 200);
    if ((uVar2 < 8) ||
       ((pvVar7 < (void *)((long)pvVar10 + uVar17) && (pvVar10 < (void *)((long)pvVar7 + uVar17)))))
    {
      uVar17 = 0;
    }
    else {
      uVar17 = uVar18 & 0xfffffff8;
      puVar16 = (undefined8 *)((long)pvVar10 + 0x10);
      puVar14 = (undefined8 *)((long)pvVar7 + 0x10);
      uVar15 = uVar17;
      do {
        puVar4 = puVar16 + -1;
        uVar20 = puVar16[-2];
        uVar22 = puVar16[1];
        uVar21 = *puVar16;
        puVar16 = puVar16 + 4;
        uVar15 = uVar15 - 8;
        puVar14[-1] = *puVar4;
        puVar14[-2] = uVar20;
        puVar14[1] = uVar22;
        *puVar14 = uVar21;
        puVar14 = puVar14 + 4;
      } while (uVar15 != 0);
      if (uVar17 == uVar18) goto LAB_009cb3c8;
    }
    lVar12 = uVar18 - uVar17;
    puVar11 = (undefined4 *)((long)pvVar10 + uVar17 * 4);
    puVar13 = (undefined4 *)((long)pvVar7 + uVar17 * 4);
    do {
      lVar12 = lVar12 + -1;
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    } while (lVar12 != 0);
  }
LAB_009cb3c8:
  (**(code **)(*(long *)this + 0x80))(this,param_1,param_2,param_3);
  if (*(long *)(lVar3 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


