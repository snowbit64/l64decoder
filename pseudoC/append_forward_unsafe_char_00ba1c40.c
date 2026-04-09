// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append_forward_unsafe<char*>
// Entry Point: 00ba1c40
// Size: 600 bytes
// Signature: basic_string * __thiscall __append_forward_unsafe<char*>(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * this, char * param_1, char * param_2)


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::__append_forward_unsafe<char*>(char*, char*) */

basic_string * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__append_forward_unsafe<char*>
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,char *param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  ulong __n;
  long lVar2;
  undefined8 *puVar3;
  bool bVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  uint uVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 local_70;
  ulong local_68;
  undefined *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  bVar1 = *this;
  bVar4 = ((byte)bVar1 & 1) != 0;
  uVar14 = (ulong)((byte)bVar1 >> 1);
  if (bVar4) {
    uVar14 = *(ulong *)(this + 8);
  }
  uVar12 = 0x16;
  if (bVar4) {
    uVar12 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  __n = (long)param_2 - (long)param_1;
  if (__n == 0) goto LAB_00ba1e5c;
  pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
  pbVar8 = pbVar5;
  if (((byte)bVar1 & 1) == 0) {
    pbVar8 = this + 1;
  }
  if ((pbVar8 <= param_1) && (param_1 < pbVar8 + uVar14)) {
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (__n < 0x17) {
      puVar13 = (undefined *)((ulong)&local_70 | 1);
      local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    }
    else {
      uVar14 = __n + 0x10 & 0xfffffffffffffff0;
      puVar13 = (undefined *)operator_new(uVar14);
      local_70 = uVar14 | 1;
      local_68 = __n;
      local_60 = puVar13;
    }
    if (param_1 != param_2) {
      memcpy(puVar13,param_1,__n);
      puVar13 = puVar13 + __n;
    }
    *puVar13 = 0;
    puVar13 = (undefined *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      puVar13 = local_60;
    }
                    /* try { // try from 00ba1db0 to 00ba1db7 has its CatchHandler @ 00ba1e98 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)this,(ulong)puVar13);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    goto LAB_00ba1e5c;
  }
  if (uVar12 - uVar14 < __n) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by((ulong)this,uVar12,(uVar14 + __n) - uVar12,uVar14,uVar14,0);
    uVar7 = (uint)(byte)*this;
    pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  else {
    uVar7 = (uint)*(ulong *)this & 0xff;
  }
  pbVar8 = this + 1;
  if ((uVar7 & 1) != 0) {
    pbVar8 = pbVar5;
  }
  pbVar5 = pbVar8 + uVar14;
  if (param_1 != param_2) {
    pbVar6 = pbVar5;
    if ((0x1f < __n) &&
       ((param_2 <= pbVar5 || (pbVar8 + (long)(param_2 + (uVar14 - (long)param_1)) <= param_1)))) {
      uVar9 = __n & 0xffffffffffffffe0;
      pbVar5 = pbVar5 + uVar9;
      puVar11 = (undefined8 *)(param_1 + 0x10);
      puVar10 = (undefined8 *)(pbVar8 + uVar14 + 0x10);
      uVar12 = uVar9;
      do {
        puVar3 = puVar11 + -1;
        uVar15 = puVar11[-2];
        uVar17 = puVar11[1];
        uVar16 = *puVar11;
        puVar11 = puVar11 + 4;
        uVar12 = uVar12 - 0x20;
        puVar10[-1] = *puVar3;
        puVar10[-2] = uVar15;
        puVar10[1] = uVar17;
        *puVar10 = uVar16;
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
      pbVar6 = pbVar5;
      param_1 = (char *)(param_1 + uVar9);
      if (__n == uVar9) goto LAB_00ba1e3c;
    }
    do {
      pbVar8 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               param_1 + 1;
      pbVar5 = pbVar6 + 1;
      *pbVar6 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                *param_1;
      pbVar6 = pbVar5;
      param_1 = (char *)pbVar8;
    } while (pbVar8 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)param_2);
  }
LAB_00ba1e3c:
  *pbVar5 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)(uVar14 + __n) << 1,0);
  }
  else {
    *(ulong *)(this + 8) = uVar14 + __n;
  }
LAB_00ba1e5c:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (basic_string *)this;
}


