// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementThresholdMask
// Entry Point: 009eaa60
// Size: 744 bytes
// Signature: undefined __thiscall ProceduralPlacementThresholdMask(ProceduralPlacementThresholdMask * this, ProceduralPlacementMask * param_1, basic_string * param_2, int param_3)


/* ProceduralPlacementThresholdMask::ProceduralPlacementThresholdMask(ProceduralPlacementMask*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int) */

void __thiscall
ProceduralPlacementThresholdMask::ProceduralPlacementThresholdMask
          (ProceduralPlacementThresholdMask *this,ProceduralPlacementMask *param_1,
          basic_string *param_2,int param_3)

{
  ProceduralPlacementMask **ppPVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  void *__dest;
  void *pvVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong __n;
  ushort local_b0;
  void *local_a0;
  ushort local_98;
  void *local_88;
  byte local_80;
  undefined uStack_7f;
  undefined6 uStack_7e;
  undefined8 uStack_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_80 = 0;
  uStack_7f = 0;
  local_98 = 0;
  local_b0 = 0;
                    /* try { // try from 009eaaa8 to 009eaab7 has its CatchHandler @ 009ead50 */
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(basic_string *)&local_80,(basic_string *)&local_98,
             (basic_string *)&local_b0);
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  *(undefined ***)this = &PTR__ProceduralPlacementThresholdMask_00fe2ee8;
                    /* try { // try from 009eaae8 to 009eaafb has its CatchHandler @ 009ead4c */
  getThresholdSignature(param_1,param_2,param_3);
  if ((*(byte *)(this + 0x70) & 1) != 0) {
    operator_delete(*(void **)(this + 0x80));
  }
  ppPVar1 = *(ProceduralPlacementMask ***)(this + 0x90);
  *(undefined8 *)(this + 0x78) = uStack_78;
  *(ulong *)(this + 0x70) = CONCAT62(uStack_7e,CONCAT11(uStack_7f,local_80));
  *(void **)(this + 0x80) = local_70;
  if (ppPVar1 == *(ProceduralPlacementMask ***)(this + 0x98)) {
    pvVar8 = *(void **)(this + 0x88);
    __n = (long)ppPVar1 - (long)pvVar8;
    uVar11 = ((long)__n >> 3) + 1;
    if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009ead34 to 009ead43 has its CatchHandler @ 009eada4 */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar11 <= (ulong)((long)__n >> 2)) {
      uVar11 = (long)__n >> 2;
    }
    if (0x7ffffffffffffff7 < __n) {
      uVar11 = 0x1fffffffffffffff;
    }
    if (uVar11 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009eaba8 to 009eabab has its CatchHandler @ 009eada4 */
      __dest = operator_new(uVar11 << 3);
    }
    ppPVar1 = (ProceduralPlacementMask **)((long)__dest + ((long)__n >> 3) * 8);
    *ppPVar1 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,pvVar8,__n);
    }
    *(void **)(this + 0x88) = __dest;
    *(ProceduralPlacementMask ***)(this + 0x90) = ppPVar1 + 1;
    *(void **)(this + 0x98) = (void *)((long)__dest + uVar11 * 8);
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
  }
  else {
    *ppPVar1 = param_1;
    *(ProceduralPlacementMask ***)(this + 0x90) = ppPVar1 + 1;
  }
                    /* try { // try from 009eabf8 to 009eac83 has its CatchHandler @ 009eada4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0xb0),param_2);
  *(int *)(this + 200) = param_3;
  uVar3 = (**(code **)(*(long *)param_1 + 0x40))(param_1);
  *(undefined4 *)(this + 0x50) = uVar3;
  uVar3 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
  *(undefined4 *)(this + 0x54) = uVar3;
  iVar4 = (**(code **)(*(long *)param_1 + 0x40))(param_1);
  iVar5 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
  pvVar8 = operator_new__((ulong)(uint)(iVar5 * iVar4) << 2);
  *(void **)(this + 0x58) = pvVar8;
  lVar9 = (**(code **)(*(long *)param_1 + 0x50))(param_1);
  if (lVar9 == 0) {
    (**(code **)(*(long *)param_1 + 0x18))(param_1);
  }
  if (*(int *)(this + 0x54) * *(int *)(this + 0x50) != 0) {
    uVar11 = 0;
    do {
                    /* try { // try from 009eac9c to 009eaca3 has its CatchHandler @ 009eada8 */
      lVar9 = (**(code **)(*(long *)param_1 + 0x50))(param_1);
      lVar10 = uVar11 * 4;
      uVar11 = uVar11 + 1;
      *(undefined4 *)(*(long *)(this + 0x58) + lVar10) = *(undefined4 *)(lVar9 + lVar10);
    } while (uVar11 < (uint)(*(int *)(this + 0x54) * *(int *)(this + 0x50)));
  }
                    /* try { // try from 009eacd0 to 009eacd7 has its CatchHandler @ 009ead48 */
  uVar6 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
                    /* try { // try from 009eace4 to 009ead03 has its CatchHandler @ 009eada0 */
  uVar7 = (**(code **)(*(long *)param_1 + 0x40))(param_1);
  updateRegion(this,0,uVar7,0,uVar6);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


