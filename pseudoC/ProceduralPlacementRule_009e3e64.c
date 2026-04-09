// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementRule
// Entry Point: 009e3e64
// Size: 1144 bytes
// Signature: undefined __thiscall ProceduralPlacementRule(ProceduralPlacementRule * this, ProceduralPlacementRule * param_1)


/* ProceduralPlacementRule::ProceduralPlacementRule(ProceduralPlacementRule const&) */

void __thiscall
ProceduralPlacementRule::ProceduralPlacementRule
          (ProceduralPlacementRule *this,ProceduralPlacementRule *param_1)

{
  void **ppvVar1;
  ProceduralPlacementScriptDesc *this_00;
  undefined4 uVar2;
  ProceduralPlacementRule PVar3;
  ProceduralPlacementRule PVar4;
  long lVar5;
  void *pvVar6;
  int iVar7;
  ProceduralPlacementFoliageObjectDesc *this_01;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  ProceduralPlacementFoliageObjectDesc **ppPVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  void *pvVar16;
  size_t __n;
  undefined8 uVar17;
  ProceduralPlacementScriptDesc local_a8 [16];
  void *local_98;
  void *local_90;
  void *local_88;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  *(undefined ***)this = &PTR__ProceduralPlacementRule_00fe2a70;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)(this + 0x20) = &PTR__ProceduralPlacementRuleDesc_00fe2af8;
  PVar3 = param_1[0x40];
  uVar17 = *(undefined8 *)(param_1 + 0x44);
  uVar2 = *(undefined4 *)(param_1 + 0x4c);
                    /* try { // try from 009e3ee8 to 009e3eeb has its CatchHandler @ 009e42e0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x28));
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  PVar4 = param_1[0x88];
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x80) = 0x8f60c8c12a4d8903;
  this[0x88] = PVar4;
  this[0x40] = PVar3;
  *(undefined8 *)(this + 0x44) = uVar17;
  *(undefined4 *)(this + 0x4c) = uVar2;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(ProceduralPlacementRule **)(this + 0x90) = this + 0x98;
  *(ProceduralPlacementRule **)(this + 0xa8) = this + 0xb0;
  *(undefined8 *)(this + 0xb8) = 0;
                    /* try { // try from 009e3f54 to 009e3f5b has its CatchHandler @ 009e42dc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 8),(basic_string *)(param_1 + 8));
  lVar14 = *(long *)(param_1 + 0x50);
  if (*(long *)(param_1 + 0x58) != lVar14) {
    uVar13 = 0;
    do {
                    /* try { // try from 009e3f9c to 009e3fa3 has its CatchHandler @ 009e4334 */
      ProceduralPlacementScriptDesc::ProceduralPlacementScriptDesc
                (local_a8,(ProceduralPlacementScriptDesc *)(lVar14 + uVar13 * 0x30));
      this_00 = *(ProceduralPlacementScriptDesc **)(this + 0x58);
      if (this_00 == *(ProceduralPlacementScriptDesc **)(this + 0x60)) {
                    /* try { // try from 009e3fc8 to 009e3fd3 has its CatchHandler @ 009e4310 */
        std::__ndk1::
        vector<ProceduralPlacementRule::ProceduralPlacementScriptDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptDesc>>
        ::__push_back_slow_path<ProceduralPlacementRule::ProceduralPlacementScriptDesc_const&>
                  ((vector<ProceduralPlacementRule::ProceduralPlacementScriptDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptDesc>>
                    *)(this + 0x50),local_a8);
      }
      else {
                    /* try { // try from 009e3fb0 to 009e3fbb has its CatchHandler @ 009e4320 */
        ProceduralPlacementScriptDesc::ProceduralPlacementScriptDesc(this_00,local_a8);
        *(ProceduralPlacementScriptDesc **)(this + 0x58) = this_00 + 0x30;
      }
      pvVar16 = local_90;
      pvVar8 = local_88;
      if (local_90 != (void *)0x0) {
        while (pvVar6 = pvVar8, pvVar6 != pvVar16) {
          if ((*(byte *)((long)pvVar6 + -0x18) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar6 + -8));
          }
          if ((*(byte *)((long)pvVar6 + -0x30) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar6 + -0x20));
          }
          pvVar8 = (void *)((long)pvVar6 + -0x48);
          if ((*(byte *)((long)pvVar6 + -0x48) & 1) != 0) {
            operator_delete(*(void **)((long)pvVar6 + -0x38));
          }
        }
        local_88 = pvVar16;
        operator_delete(local_90);
      }
      if (((byte)local_a8[0] & 1) != 0) {
        operator_delete(local_98);
      }
      lVar14 = *(long *)(param_1 + 0x50);
      uVar13 = (ulong)((int)uVar13 + 1);
      uVar10 = (*(long *)(param_1 + 0x58) - lVar14 >> 4) * -0x5555555555555555;
    } while (uVar13 <= uVar10 && uVar10 - uVar13 != 0);
  }
  lVar14 = *(long *)(param_1 + 0x68);
  if (*(long *)(param_1 + 0x70) != lVar14) {
    uVar13 = 0;
    ppvVar1 = (void **)(this + 0x68);
    do {
      plVar15 = *(long **)(lVar14 + uVar13 * 8);
                    /* try { // try from 009e4094 to 009e40af has its CatchHandler @ 009e4338 */
      iVar7 = (**(code **)(*plVar15 + 0x10))(plVar15);
      if (iVar7 == 0) {
                    /* try { // try from 009e4128 to 009e412f has its CatchHandler @ 009e431c */
        this_01 = (ProceduralPlacementFoliageObjectDesc *)operator_new(0x78);
                    /* try { // try from 009e4134 to 009e413b has its CatchHandler @ 009e4300 */
        ProceduralPlacementTextureObjectDesc::ProceduralPlacementTextureObjectDesc
                  ((ProceduralPlacementTextureObjectDesc *)this_01,
                   (ProceduralPlacementTextureObjectDesc *)plVar15);
        ppPVar11 = *(ProceduralPlacementFoliageObjectDesc ***)(this + 0x70);
        if (*(ProceduralPlacementFoliageObjectDesc ***)(this + 0x78) <= ppPVar11) {
          pvVar16 = *ppvVar1;
          __n = (long)ppPVar11 - (long)pvVar16;
          lVar14 = (long)__n >> 3;
          uVar10 = lVar14 + 1;
          if (uVar10 >> 0x3d != 0) {
                    /* try { // try from 009e429c to 009e42a3 has its CatchHandler @ 009e42f8 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar9 = (long)*(ProceduralPlacementFoliageObjectDesc ***)(this + 0x78) - (long)pvVar16;
          uVar12 = (long)uVar9 >> 2;
          if (uVar10 <= uVar12) {
            uVar10 = uVar12;
          }
          if (0x7ffffffffffffff7 < uVar9) {
            uVar10 = 0x1fffffffffffffff;
          }
          if (uVar10 == 0) {
LAB_009e4224:
            pvVar8 = (void *)0x0;
          }
          else {
            if (uVar10 >> 0x3d != 0) {
                    /* try { // try from 009e42ac to 009e42b7 has its CatchHandler @ 009e42f8 */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 009e4190 to 009e4193 has its CatchHandler @ 009e431c */
            pvVar8 = operator_new(uVar10 << 3);
          }
          goto LAB_009e4228;
        }
LAB_009e406c:
        *ppPVar11 = this_01;
        *(ProceduralPlacementFoliageObjectDesc ***)(this + 0x70) = ppPVar11 + 1;
      }
      else {
        iVar7 = (**(code **)(*plVar15 + 0x10))(plVar15);
        if (iVar7 == 1) {
                    /* try { // try from 009e40b8 to 009e40bf has its CatchHandler @ 009e4318 */
          this_01 = (ProceduralPlacementFoliageObjectDesc *)operator_new(0xa8);
                    /* try { // try from 009e40c4 to 009e40cb has its CatchHandler @ 009e42fc */
          ProceduralPlacementFoliageObjectDesc::ProceduralPlacementFoliageObjectDesc
                    (this_01,(ProceduralPlacementFoliageObjectDesc *)plVar15);
          ppPVar11 = *(ProceduralPlacementFoliageObjectDesc ***)(this + 0x70);
          if (ppPVar11 < *(ProceduralPlacementFoliageObjectDesc ***)(this + 0x78))
          goto LAB_009e406c;
          pvVar16 = *ppvVar1;
          __n = (long)ppPVar11 - (long)pvVar16;
          lVar14 = (long)__n >> 3;
          uVar10 = lVar14 + 1;
          if (uVar10 >> 0x3d != 0) {
                    /* try { // try from 009e42a4 to 009e42ab has its CatchHandler @ 009e42f4 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar9 = (long)*(ProceduralPlacementFoliageObjectDesc ***)(this + 0x78) - (long)pvVar16;
          uVar12 = (long)uVar9 >> 2;
          if (uVar10 <= uVar12) {
            uVar10 = uVar12;
          }
          if (0x7ffffffffffffff7 < uVar9) {
            uVar10 = 0x1fffffffffffffff;
          }
          if (uVar10 == 0) goto LAB_009e4224;
          if (uVar10 >> 0x3d != 0) {
                    /* try { // try from 009e42b8 to 009e42c3 has its CatchHandler @ 009e42f4 */
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 009e4120 to 009e4123 has its CatchHandler @ 009e4318 */
          pvVar8 = operator_new(uVar10 << 3);
        }
        else {
                    /* try { // try from 009e41a0 to 009e41a7 has its CatchHandler @ 009e4338 */
          iVar7 = (**(code **)(*plVar15 + 0x10))(plVar15);
          if (iVar7 != 2) goto LAB_009e4074;
                    /* try { // try from 009e41b0 to 009e41b7 has its CatchHandler @ 009e42f0 */
          this_01 = (ProceduralPlacementFoliageObjectDesc *)operator_new(0x98);
                    /* try { // try from 009e41bc to 009e41c3 has its CatchHandler @ 009e42ec */
          ProceduralPlacementReferenceObjectDesc::ProceduralPlacementReferenceObjectDesc
                    ((ProceduralPlacementReferenceObjectDesc *)this_01,
                     (ProceduralPlacementReferenceObjectDesc *)plVar15);
          ppPVar11 = *(ProceduralPlacementFoliageObjectDesc ***)(this + 0x70);
          if (ppPVar11 < *(ProceduralPlacementFoliageObjectDesc ***)(this + 0x78))
          goto LAB_009e406c;
          pvVar16 = *ppvVar1;
          __n = (long)ppPVar11 - (long)pvVar16;
          lVar14 = (long)__n >> 3;
          uVar10 = lVar14 + 1;
          if (uVar10 >> 0x3d != 0) {
                    /* try { // try from 009e42c4 to 009e42d7 has its CatchHandler @ 009e42e8 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar9 = (long)*(ProceduralPlacementFoliageObjectDesc ***)(this + 0x78) - (long)pvVar16;
          uVar12 = (long)uVar9 >> 2;
          if (uVar10 <= uVar12) {
            uVar10 = uVar12;
          }
          if (0x7ffffffffffffff7 < uVar9) {
            uVar10 = 0x1fffffffffffffff;
          }
          if (uVar10 == 0) goto LAB_009e4224;
          if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 009e4218 to 009e421b has its CatchHandler @ 009e42f0 */
          pvVar8 = operator_new(uVar10 << 3);
        }
LAB_009e4228:
        ppPVar11 = (ProceduralPlacementFoliageObjectDesc **)((long)pvVar8 + lVar14 * 8);
        *ppPVar11 = this_01;
        if (0 < (long)__n) {
          memcpy(pvVar8,pvVar16,__n);
        }
        *(void **)(this + 0x68) = pvVar8;
        *(ProceduralPlacementFoliageObjectDesc ***)(this + 0x70) = ppPVar11 + 1;
        *(void **)(this + 0x78) = (void *)((long)pvVar8 + uVar10 * 8);
        if (pvVar16 != (void *)0x0) {
          operator_delete(pvVar16);
        }
      }
LAB_009e4074:
      lVar14 = *(long *)(param_1 + 0x68);
      uVar13 = (ulong)((int)uVar13 + 1);
    } while (uVar13 < (ulong)(*(long *)(param_1 + 0x70) - lVar14 >> 3));
  }
  if (*(long *)(lVar5 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


