// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementMask
// Entry Point: 009d8758
// Size: 748 bytes
// Signature: undefined __thiscall ProceduralPlacementMask(ProceduralPlacementMask * this, ProceduralPlacementMask * param_1, basic_string * param_2, ProceduralPlacementMask * param_3)


/* ProceduralPlacementMask::ProceduralPlacementMask(ProceduralPlacementMask*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, ProceduralPlacementMask*) */

void __thiscall
ProceduralPlacementMask::ProceduralPlacementMask
          (ProceduralPlacementMask *this,ProceduralPlacementMask *param_1,basic_string *param_2,
          ProceduralPlacementMask *param_3)

{
  ulong uVar1;
  ProceduralPlacementMask **ppPVar2;
  long lVar3;
  byte bVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  void *pvVar8;
  ulong uVar9;
  ProceduralPlacementMask **ppPVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__ProceduralPlacementMask_00fe24b8;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  puVar7 = (undefined8 *)(this + 0x70);
  *(undefined8 *)(this + 0x78) = 0;
  *puVar7 = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0x8f60c8c12a4d8903;
  *(undefined4 *)(this + 0xa8) = 0x7fffffff;
  *(undefined8 *)(this + 0xa0) = 0x7fffffff;
  *(undefined8 *)(this + 0xac) = 0;
  *(undefined8 *)(this + 0xbc) = 0;
  *(undefined8 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
                    /* try { // try from 009d8814 to 009d882b has its CatchHandler @ 009d8a44 */
  getCreateMaskSignature(param_1,(ProceduralPlacementMask *)param_2,(basic_string *)param_3,param_3)
  ;
  if ((*(byte *)puVar7 & 1) != 0) {
    operator_delete(*(void **)(this + 0x80));
  }
  ppPVar2 = *(ProceduralPlacementMask ***)(this + 0x90);
  *(undefined8 *)(this + 0x78) = uStack_78;
  *puVar7 = local_80;
  *(undefined8 *)(this + 0x80) = local_70;
  if (ppPVar2 == *(ProceduralPlacementMask ***)(this + 0x98)) {
    pvVar8 = *(void **)(this + 0x88);
    uVar9 = (long)ppPVar2 - (long)pvVar8;
    uVar1 = ((long)uVar9 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)uVar9 >> 2)) {
      uVar1 = (long)uVar9 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009d88ac to 009d88af has its CatchHandler @ 009d8a48 */
      pvVar5 = operator_new(uVar1 << 3);
    }
    ppPVar2 = (ProceduralPlacementMask **)((long)pvVar5 + ((long)uVar9 >> 3) * 8);
    ppPVar10 = ppPVar2 + 1;
    *ppPVar2 = param_1;
    if (0 < (long)uVar9) {
      memcpy(pvVar5,pvVar8,uVar9);
    }
    *(void **)(this + 0x98) = (void *)((long)pvVar5 + uVar1 * 8);
    *(void **)(this + 0x88) = pvVar5;
    *(ProceduralPlacementMask ***)(this + 0x90) = ppPVar10;
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
      ppPVar10 = *(ProceduralPlacementMask ***)(this + 0x90);
    }
  }
  else {
    ppPVar10 = ppPVar2 + 1;
    *ppPVar2 = param_1;
    *(ProceduralPlacementMask ***)(this + 0x90) = ppPVar10;
  }
  if (ppPVar10 == *(ProceduralPlacementMask ***)(this + 0x98)) {
    pvVar8 = *(void **)(this + 0x88);
    uVar9 = (long)ppPVar10 - (long)pvVar8;
    uVar1 = ((long)uVar9 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)uVar9 >> 2)) {
      uVar1 = (long)uVar9 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009d8958 to 009d895b has its CatchHandler @ 009d8a48 */
      pvVar5 = operator_new(uVar1 << 3);
    }
    ppPVar2 = (ProceduralPlacementMask **)((long)pvVar5 + ((long)uVar9 >> 3) * 8);
    *ppPVar2 = param_3;
    if (0 < (long)uVar9) {
      memcpy(pvVar5,pvVar8,uVar9);
    }
    *(void **)(this + 0x88) = pvVar5;
    *(ProceduralPlacementMask ***)(this + 0x90) = ppPVar2 + 1;
    *(void **)(this + 0x98) = (void *)((long)pvVar5 + uVar1 * 8);
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
  }
  else {
    *ppPVar10 = param_3;
    *(ProceduralPlacementMask ***)(this + 0x90) = ppPVar10 + 1;
  }
                    /* try { // try from 009d89a0 to 009d8a3f has its CatchHandler @ 009d8a48 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0xb0),param_2);
  this[0x68] = (ProceduralPlacementMask)0x0;
  bVar4 = (**(code **)(*(long *)param_1 + 0x58))(param_1);
  this[0x69] = (ProceduralPlacementMask)(bVar4 & 1);
  (**(code **)(*(long *)this + 0x80))(this,param_1,param_2,param_3);
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


