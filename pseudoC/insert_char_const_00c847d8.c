// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert<char_const*>
// Entry Point: 00c847d8
// Size: 812 bytes
// Signature: _EnableIfImpl __thiscall insert<char_const*>(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * this, __wrap_iter param_1, char * param_2, char * param_3)


/* std::__ndk1::_MetaBase<__is_cpp17_forward_iterator<char
   const*>::value&&__libcpp_string_gets_noexcept_iterator<char
   const*>::value>::_EnableIfImpl<std::__ndk1::__wrap_iter<char*> > std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert<char
   const*>(std::__ndk1::__wrap_iter<char const*>, char const*, char const*) */

_EnableIfImpl __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
insert<char_const*>(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    *this,__wrap_iter param_1,char *param_2,char *param_3)

{
  bool bVar1;
  bool bVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  ulong __n;
  long lVar4;
  undefined8 *puVar5;
  _EnableIfImpl _Var6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  undefined8 *puVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  char *pcVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 local_80;
  ulong local_78;
  char *local_70;
  long local_68;
  
  uVar17 = (ulong)param_1;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  bVar3 = *this;
  pbVar8 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
  pbVar10 = pbVar8;
  if (((byte)bVar3 & 1) == 0) {
    pbVar10 = this + 1;
  }
  __n = (long)param_3 - (long)param_2;
  uVar15 = uVar17 - (long)pbVar10;
  if (__n != 0) {
    uVar14 = (ulong)((byte)bVar3 >> 1);
    if (((byte)bVar3 & 1) != 0) {
      uVar14 = *(ulong *)(this + 8);
    }
    bVar2 = pbVar10 <= param_2;
    bVar1 = param_2 < pbVar10 + uVar14;
    if (bVar2 && bVar1) {
      if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (__n < 0x17) {
        pcVar16 = (char *)((ulong)&local_80 | 1);
        local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
      }
      else {
        uVar17 = __n + 0x10 & 0xfffffffffffffff0;
        pcVar16 = (char *)operator_new(uVar17);
        local_80 = uVar17 | 1;
        local_78 = __n;
        local_70 = pcVar16;
      }
      if (param_2 != param_3) {
        memcpy(pcVar16,param_2,__n);
        pcVar16 = pcVar16 + __n;
      }
      *pcVar16 = '\0';
      uVar17 = local_80 >> 1 & 0x7f;
      pcVar16 = (char *)((ulong)&local_80 | 1);
      if ((local_80 & 1) != 0) {
        uVar17 = local_78;
        pcVar16 = local_70;
      }
                    /* try { // try from 00c84984 to 00c8498f has its CatchHandler @ 00c84b04 */
      _Var6 = insert<char_const*>(this,param_1,pcVar16,pcVar16 + uVar17);
      param_3 = (char *)(ulong)_Var6;
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      goto LAB_00c84ac4;
    }
    uVar11 = 0x16;
    if (((byte)bVar3 & 1) != 0) {
      uVar11 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    }
    if (uVar11 - uVar14 < __n) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __grow_by((ulong)this,uVar11,(uVar14 + __n) - uVar11,uVar14,uVar15,0);
      pbVar8 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
      bVar3 = *this;
joined_r0x00c849b4:
      if (((byte)bVar3 & 1) != 0) goto LAB_00c849b8;
LAB_00c84908:
      *this = SUB41((int)(uVar14 + __n) << 1,0);
      pbVar8[uVar14 + __n] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    }
    else {
      pbVar8 = pbVar10;
      if (uVar14 - uVar15 == 0) {
        bVar3 = *this;
        goto joined_r0x00c849b4;
      }
      memmove(pbVar10 + uVar15 + __n,pbVar10 + uVar15,uVar14 - uVar15);
      if (((byte)*this & 1) == 0) goto LAB_00c84908;
LAB_00c849b8:
      *(ulong *)(this + 8) = uVar14 + __n;
      pbVar8[uVar14 + __n] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    }
    if (param_2 != param_3) {
      pbVar7 = pbVar8 + uVar15;
      if ((__n < 8) ||
         ((pbVar7 < param_3 &&
          (param_2 < pbVar8 + (long)(param_3 + (uVar17 - (long)(param_2 + (long)pbVar10))))))) {
LAB_00c84a94:
        do {
          pbVar10 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)param_2 + 1;
          *pbVar7 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    *param_2;
          pbVar7 = pbVar7 + 1;
          param_2 = (char *)pbVar10;
        } while (pbVar10 !=
                 (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 param_3);
      }
      else if (__n < 0x20) {
        uVar11 = 0;
LAB_00c84a50:
        uVar14 = __n & 0xfffffffffffffff8;
        pbVar7 = pbVar7 + uVar14;
        lVar12 = uVar11 - uVar14;
        puVar9 = (undefined8 *)(pbVar8 + ((uVar11 + uVar17) - (long)pbVar10));
        puVar13 = (undefined8 *)(param_2 + uVar11);
        do {
          lVar12 = lVar12 + 8;
          *puVar9 = *puVar13;
          puVar9 = puVar9 + 1;
          puVar13 = puVar13 + 1;
        } while (lVar12 != 0);
        param_2 = (char *)(param_2 + uVar14);
        if (__n != uVar14) goto LAB_00c84a94;
      }
      else {
        uVar11 = __n & 0xffffffffffffffe0;
        puVar9 = (undefined8 *)(param_2 + 0x10);
        puVar13 = (undefined8 *)(pbVar8 + uVar15 + 0x10);
        uVar14 = uVar11;
        do {
          puVar5 = puVar9 + -1;
          uVar18 = puVar9[-2];
          uVar20 = puVar9[1];
          uVar19 = *puVar9;
          puVar9 = puVar9 + 4;
          uVar14 = uVar14 - 0x20;
          puVar13[-1] = *puVar5;
          puVar13[-2] = uVar18;
          puVar13[1] = uVar20;
          *puVar13 = uVar19;
          puVar13 = puVar13 + 4;
        } while (uVar14 != 0);
        if (__n != uVar11) {
          if ((__n & 0x18) == 0) {
            param_2 = param_2 + uVar11;
            pbVar7 = pbVar7 + uVar11;
            goto LAB_00c84a94;
          }
          goto LAB_00c84a50;
        }
      }
      if (bVar2 && bVar1) goto LAB_00c84ac4;
    }
    bVar3 = *this;
    pbVar8 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  pbVar10 = this + 1;
  if (((byte)bVar3 & 1) != 0) {
    pbVar10 = pbVar8;
  }
  param_3 = (char *)(pbVar10 + uVar15);
LAB_00c84ac4:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (_EnableIfImpl)param_3;
}


