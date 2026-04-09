// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert
// Entry Point: 006d7b94
// Size: 948 bytes
// Signature: undefined __thiscall insert(vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>> * this, __wrap_iter param_1, ulong param_2, basic_string * param_3)


/* std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   >::insert(std::__ndk1::__wrap_iter<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const*>, unsigned long,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

undefined8 * __thiscall
std::__ndk1::
vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
::insert(vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
         *this,__wrap_iter param_1,ulong param_2,basic_string *param_3)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)this;
  lVar11 = (long)((ulong)param_1 - lVar4) / 0x18;
  puVar12 = (undefined8 *)(lVar4 + lVar11 * 0x18);
  if (param_2 != 0) {
    puVar9 = *(undefined8 **)(this + 8);
    if ((ulong)((*(long *)(this + 0x10) - (long)puVar9 >> 3) * -0x5555555555555555) < param_2) {
      uVar8 = param_2 + ((long)puVar9 - lVar4 >> 3) * -0x5555555555555555;
      if (0xaaaaaaaaaaaaaaa < uVar8) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      lVar4 = *(long *)(this + 0x10) - lVar4 >> 3;
      uVar5 = lVar4 * 0x5555555555555556;
      if (uVar8 <= uVar5) {
        uVar8 = uVar5;
      }
      if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
        uVar8 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar8 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (0xaaaaaaaaaaaaaaa < uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        pvVar2 = operator_new(uVar8 * 0x18);
      }
      lVar4 = param_2 * 0x18;
      puVar10 = (undefined8 *)((long)pvVar2 + lVar11 * 0x18);
      puVar14 = puVar10 + param_2 * 3;
      puVar9 = puVar10;
      do {
                    /* try { // try from 006d7e0c to 006d7e17 has its CatchHandler @ 006d7f50 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)puVar9);
        puVar9 = puVar9 + 3;
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != 0);
      puVar6 = *(undefined8 **)this;
      puVar7 = puVar10;
      for (puVar9 = puVar12; puVar6 != puVar9; puVar9 = puVar9 + -3) {
        uVar16 = puVar9[-2];
        uVar15 = puVar9[-3];
        puVar7[-1] = puVar9[-1];
        puVar7[-2] = uVar16;
        puVar7[-3] = uVar15;
        puVar7 = puVar7 + -3;
        puVar9[-2] = 0;
        puVar9[-1] = 0;
        puVar9[-3] = 0;
      }
      puVar6 = *(undefined8 **)(this + 8);
      puVar9 = puVar14;
      if (puVar6 != puVar12) {
        do {
          uVar16 = puVar12[1];
          uVar15 = *puVar12;
          puVar9[2] = puVar12[2];
          puVar14 = puVar9 + 3;
          puVar9[1] = uVar16;
          *puVar9 = uVar15;
          puVar12[1] = 0;
          puVar12[2] = 0;
          puVar13 = puVar12 + 3;
          *puVar12 = 0;
          puVar12 = puVar13;
          puVar9 = puVar14;
        } while (puVar13 != puVar6);
        puVar12 = *(undefined8 **)(this + 8);
      }
      puVar9 = *(undefined8 **)this;
      *(undefined8 **)this = puVar7;
      *(undefined8 **)(this + 8) = puVar14;
      *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar8 * 0x18);
      while (puVar14 = puVar12, puVar14 != puVar9) {
        puVar12 = puVar14 + -3;
        if ((*(byte *)puVar12 & 1) != 0) {
          operator_delete((void *)puVar14[-1]);
        }
      }
      puVar12 = puVar10;
      if (puVar9 != (undefined8 *)0x0) {
        operator_delete(puVar9);
      }
    }
    else {
      uVar5 = ((long)puVar9 - (long)puVar12) / 0x18;
      uVar8 = param_2;
      puVar14 = puVar9;
      if (uVar5 < param_2) {
        if (param_2 - uVar5 == 0) {
          *(undefined8 **)(this + 8) = puVar9;
        }
        else {
          puVar14 = puVar9 + (param_2 - uVar5) * 3;
          lVar11 = param_2 * 0x18 + uVar5 * -0x18;
          puVar10 = puVar9;
          do {
                    /* try { // try from 006d7cd0 to 006d7cdb has its CatchHandler @ 006d7f48 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string((basic_string *)puVar10);
            puVar10 = puVar10 + 3;
            lVar11 = lVar11 + -0x18;
          } while (lVar11 != 0);
          *(undefined8 **)(this + 8) = puVar14;
        }
        uVar8 = uVar5;
        if ((long)puVar9 - (long)puVar12 == 0) goto LAB_006d7ee8;
      }
      lVar11 = ((long)puVar14 - (long)(puVar12 + param_2 * 3)) / 0x18;
      puVar7 = puVar14;
      for (puVar10 = puVar12 + lVar11 * 3; puVar10 < puVar9; puVar10 = puVar10 + 3) {
        uVar16 = puVar10[1];
        uVar15 = *puVar10;
        puVar7[2] = puVar10[2];
        puVar7[1] = uVar16;
        *puVar7 = uVar15;
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
        puVar7 = puVar7 + 3;
      }
      *(undefined8 **)(this + 8) = puVar7;
      if ((long)puVar14 - (long)(puVar12 + param_2 * 3) != 0) {
        lVar11 = lVar11 * 0x18;
        do {
          puVar9 = puVar14 + -3;
          if ((*(byte *)puVar9 & 1) != 0) {
            operator_delete((void *)puVar14[-1]);
          }
          lVar4 = lVar11 + -0x18;
          uVar16 = *(undefined8 *)((long)puVar12 + lVar11 + -0x10);
          uVar15 = *(undefined8 *)((long)puVar12 + lVar11 + -0x18);
          puVar14[-1] = *(undefined8 *)((long)puVar12 + lVar11 + -8);
          puVar14[-2] = uVar16;
          *puVar9 = uVar15;
          *(undefined2 *)((long)puVar12 + lVar11 + -0x18) = 0;
          lVar11 = lVar4;
          puVar14 = puVar9;
        } while (lVar4 != 0);
        puVar7 = *(undefined8 **)(this + 8);
      }
      if ((puVar7 <= param_3 || param_3 <= puVar12) &&
          (puVar7 <= param_3 || puVar12 != (undefined8 *)param_3)) {
        param_2 = 0;
      }
      puVar9 = puVar12;
      do {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)puVar9,param_3 + param_2 * 6);
        puVar9 = puVar9 + 3;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
LAB_006d7ee8:
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return puVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


