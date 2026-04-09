// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_multi<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,ShaderStructLayout>const&>
// Entry Point: 00bf3960
// Size: 352 bytes
// Signature: __tree_iterator __thiscall __emplace_multi<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,ShaderStructLayout>const&>(__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>> * this, pair * param_1)


/* std::__ndk1::__tree_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, ShaderStructLayout>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, ShaderStructLayout>, void*>*,
   long> std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, ShaderStructLayout>,
   std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, ShaderStructLayout>,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, ShaderStructLayout> >
   >::__emplace_multi<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, ShaderStructLayout>
   const&>(std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const, ShaderStructLayout> const&) */

__tree_iterator __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
::
__emplace_multi<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,ShaderStructLayout>const&>
          (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
           *this,pair *param_1)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  void *__s1;
  byte bVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  void *__s2;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  puVar6 = (undefined8 *)operator_new(0x78);
                    /* try { // try from 00bf39ac to 00bf39b7 has its CatchHandler @ 00bf3ac0 */
  pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,ShaderStructLayout>
  ::pair((pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,ShaderStructLayout>
          *)(puVar6 + 4),param_1);
  puVar8 = (undefined8 *)(this + 8);
  puVar9 = (undefined8 *)*puVar8;
  puVar10 = puVar8;
  if (puVar9 != (undefined8 *)0x0) {
    uVar2 = puVar6[5];
    __s1 = (void *)puVar6[6];
    if ((*(byte *)(puVar6 + 4) & 1) == 0) {
      __s1 = (void *)((long)puVar6 + 0x21);
      uVar2 = (ulong)(*(byte *)(puVar6 + 4) >> 1);
    }
    do {
      while( true ) {
        puVar10 = puVar9;
        bVar3 = *(byte *)(puVar10 + 4);
        uVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar1 = puVar10[5];
        }
        __n = uVar1;
        if (uVar2 <= uVar1) {
          __n = uVar2;
        }
        if (__n == 0) break;
        __s2 = (void *)puVar10[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)puVar10 + 0x21);
        }
        iVar5 = memcmp(__s1,__s2,__n);
        if (iVar5 == 0) break;
        if (-1 < iVar5) goto LAB_00bf39e0;
LAB_00bf3a38:
        puVar8 = puVar10;
        puVar9 = (undefined8 *)*puVar10;
        if ((undefined8 *)*puVar10 == (undefined8 *)0x0) goto LAB_00bf3a54;
      }
      if (uVar2 < uVar1) goto LAB_00bf3a38;
LAB_00bf39e0:
      puVar9 = (undefined8 *)puVar10[1];
    } while ((undefined8 *)puVar10[1] != (undefined8 *)0x0);
    puVar8 = puVar10 + 1;
  }
LAB_00bf3a54:
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = puVar10;
  *puVar8 = puVar6;
  puVar9 = puVar6;
  if (**(long **)this != 0) {
    *(long *)this = **(long **)this;
    puVar9 = (undefined8 *)*puVar8;
  }
  __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar9);
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return (__tree_iterator)puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


