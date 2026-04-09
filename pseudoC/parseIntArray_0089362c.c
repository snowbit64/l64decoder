// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseIntArray
// Entry Point: 0089362c
// Size: 588 bytes
// Signature: undefined __thiscall parseIntArray(PedestrianSystem * this, basic_string * param_1, vector * param_2)


/* PedestrianSystem::parseIntArray(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::vector<int, std::__ndk1::allocator<int> >&)
    */

void __thiscall
PedestrianSystem::parseIntArray(PedestrianSystem *this,basic_string *param_1,vector *param_2)

{
  int *piVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  void *__dest;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  void *__src;
  size_t __n;
  byte *pbVar11;
  ulong uVar12;
  ushort local_98;
  undefined local_96;
  void *local_88;
  byte *local_80;
  byte *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)param_2;
  uVar12 = (ulong)(*(byte *)param_1 >> 1);
  if ((*(byte *)param_1 & 1) != 0) {
    uVar12 = *(ulong *)(param_1 + 2);
  }
  if (uVar12 != 0) {
    local_80 = (byte *)0x0;
    local_78 = (byte *)0x0;
    local_70 = 0;
    local_96 = 0;
    local_98 = 0x3b02;
                    /* try { // try from 00893694 to 008936a7 has its CatchHandler @ 00893878 */
    StringUtil::split(param_1,(basic_string *)&local_98,(vector *)&local_80,true,true);
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    pbVar11 = local_78;
    pbVar10 = local_78;
    if (local_78 != local_80) {
      uVar12 = 0;
      pbVar11 = local_80;
      do {
        pbVar6 = pbVar11 + uVar12 * 0x18;
        bVar2 = *pbVar6;
        uVar5 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          uVar5 = *(ulong *)(pbVar6 + 8);
        }
        if (uVar5 != 0) {
          pbVar8 = *(byte **)(pbVar11 + uVar12 * 0x18 + 0x10);
          if ((bVar2 & 1) == 0) {
            pbVar8 = pbVar6 + 1;
          }
          iVar4 = atoi((char *)pbVar8);
          piVar1 = *(int **)(param_2 + 8);
          if (piVar1 < *(int **)(param_2 + 0x10)) {
            *piVar1 = iVar4;
            *(int **)(param_2 + 8) = piVar1 + 1;
          }
          else {
            __src = *(void **)param_2;
            __n = (long)piVar1 - (long)__src;
            uVar5 = ((long)__n >> 2) + 1;
            if (uVar5 >> 0x3e != 0) {
                    /* try { // try from 00893860 to 00893873 has its CatchHandler @ 00893894 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            uVar7 = (long)*(int **)(param_2 + 0x10) - (long)__src;
            uVar9 = (long)uVar7 >> 1;
            if (uVar5 <= uVar9) {
              uVar5 = uVar9;
            }
            if (0x7ffffffffffffffb < uVar7) {
              uVar5 = 0x3fffffffffffffff;
            }
            if (uVar5 == 0) {
              __dest = (void *)0x0;
            }
            else {
              if (uVar5 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00893784 to 00893787 has its CatchHandler @ 00893890 */
              __dest = operator_new(uVar5 << 2);
            }
            piVar1 = (int *)((long)__dest + ((long)__n >> 2) * 4);
            *piVar1 = iVar4;
            if (0 < (long)__n) {
              memcpy(__dest,__src,__n);
            }
            *(void **)param_2 = __dest;
            *(int **)(param_2 + 8) = piVar1 + 1;
            *(void **)(param_2 + 0x10) = (void *)((long)__dest + uVar5 * 4);
            if (__src != (void *)0x0) {
              operator_delete(__src);
              pbVar11 = local_80;
              pbVar10 = local_78;
            }
          }
        }
        uVar12 = (ulong)((int)uVar12 + 1);
        uVar5 = ((long)pbVar10 - (long)pbVar11 >> 3) * -0x5555555555555555;
      } while (uVar12 <= uVar5 && uVar5 - uVar12 != 0);
    }
    pbVar6 = pbVar11;
    if (pbVar11 != (byte *)0x0) {
      while (pbVar8 = pbVar10, pbVar8 != pbVar11) {
        pbVar10 = pbVar8 + -0x18;
        pbVar6 = local_80;
        if ((*pbVar10 & 1) != 0) {
          operator_delete(*(void **)(pbVar8 + -8));
          pbVar6 = local_80;
        }
      }
      local_78 = pbVar11;
      operator_delete(pbVar6);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


