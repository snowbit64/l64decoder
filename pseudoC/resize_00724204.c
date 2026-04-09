// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resize
// Entry Point: 00724204
// Size: 644 bytes
// Signature: undefined __thiscall resize(vector<bool,std::__ndk1::allocator<bool>> * this, ulong param_1, bool param_2)


/* std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >::resize(unsigned long, bool) */

void __thiscall
std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::resize
          (vector<bool,std::__ndk1::allocator<bool>> *this,ulong param_1,bool param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  size_t __n;
  ulong *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong *local_80;
  long local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar3 = *(ulong *)(this + 8);
  if (uVar3 < param_1) {
    uVar8 = param_1 - uVar3;
    uVar4 = *(long *)(this + 0x10) * 0x40;
    if ((uVar4 < uVar8) || (uVar4 - uVar8 < uVar3)) {
      local_80 = (ulong *)0x0;
      local_78 = 0;
      uStack_70 = 0;
      if ((long)param_1 < 0) {
                    /* try { // try from 0072447c to 00724483 has its CatchHandler @ 00724488 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar4 < 0x3fffffffffffffff) {
        uVar4 = *(long *)(this + 0x10) << 7;
        uVar3 = param_1 + 0x3f & 0xffffffffffffffc0;
        if (uVar3 <= uVar4) {
          uVar3 = uVar4;
        }
      }
      else {
        uVar3 = 0x7fffffffffffffff;
      }
                    /* try { // try from 007242b8 to 007242bf has its CatchHandler @ 00724488 */
      reserve((vector<bool,std::__ndk1::allocator<bool>> *)&local_80,uVar3);
      puVar5 = local_80;
      puVar6 = *(ulong **)this;
      uVar3 = *(ulong *)(this + 8);
      local_78 = uVar3 + uVar8;
      if ((long)uVar3 < 1) {
        uVar4 = 0;
      }
      else {
        uVar2 = uVar3 >> 6;
        memmove(local_80,puVar6,uVar2 * 8);
        uVar3 = uVar3 - (uVar3 & 0xffffffffffffffc0);
        puVar5 = puVar5 + uVar2;
        if ((long)uVar3 < 1) {
          uVar4 = 0;
        }
        else {
          uVar4 = uVar3 & 0xffffffff;
          uVar3 = 0xffffffffffffffff >> (-uVar3 & 0x3f);
          *puVar5 = *puVar5 & (uVar3 ^ 0xffffffffffffffff) | puVar6[uVar2] & uVar3;
        }
        puVar6 = *(ulong **)this;
      }
      uVar10 = *(undefined8 *)(this + 0x10);
      uVar9 = *(undefined8 *)(this + 8);
      *(ulong **)this = local_80;
      *(undefined8 *)(this + 0x10) = uStack_70;
      *(long *)(this + 8) = local_78;
      local_80 = puVar6;
      local_78 = uVar9;
      uStack_70 = uVar10;
      if (puVar6 != (ulong *)0x0) {
        operator_delete(puVar6);
      }
    }
    else {
      uVar4 = (ulong)((uint)uVar3 & 0x3f);
      *(ulong *)(this + 8) = param_1;
      puVar5 = (ulong *)(*(long *)this + (uVar3 >> 3 & 0x1ffffffffffffff8));
    }
    if (uVar8 != 0) {
      iVar7 = (int)uVar4;
      puVar6 = puVar5;
      if (param_2) {
        if (iVar7 != 0) {
          uVar2 = (ulong)(0x40 - iVar7);
          uVar3 = uVar8;
          if (uVar2 <= uVar8) {
            uVar3 = uVar2;
          }
          uVar8 = uVar8 - uVar3;
          puVar6 = puVar5 + 1;
          *puVar5 = *puVar5 | 0xffffffffffffffffU >> (uVar2 - uVar3 & 0x3f) & -1L << (uVar4 & 0x3f);
        }
        __n = (uVar8 >> 6) * 8;
        memset(puVar6,0xff,__n);
        if ((uVar8 & 0x3f) == 0) goto LAB_0072444c;
        uVar3 = puVar6[uVar8 >> 6] | 0xffffffffffffffffU >> (-(uVar8 & 0x3f) & 0x3f);
      }
      else {
        if (iVar7 != 0) {
          uVar2 = (ulong)(0x40 - iVar7);
          uVar3 = uVar8;
          if (uVar2 <= uVar8) {
            uVar3 = uVar2;
          }
          uVar8 = uVar8 - uVar3;
          puVar6 = puVar5 + 1;
          *puVar5 = *puVar5 & (0xffffffffffffffffU >> (uVar2 - uVar3 & 0x3f) & -1L << (uVar4 & 0x3f)
                              ^ 0xffffffffffffffff);
        }
        __n = (uVar8 >> 6) * 8;
        memset(puVar6,0,__n);
        if ((uVar8 & 0x3f) == 0) goto LAB_0072444c;
        uVar3 = puVar6[uVar8 >> 6] &
                (0xffffffffffffffffU >> (-(uVar8 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
      }
      *(ulong *)((long)puVar6 + __n) = uVar3;
    }
  }
  else {
    *(ulong *)(this + 8) = param_1;
  }
LAB_0072444c:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


